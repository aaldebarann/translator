//
// Created by Алексей on 06.05.2023.
//

#ifndef TRANSLATOR_TABLE_H
#define TRANSLATOR_TABLE_H
#include <string>
using std::string;

template <typename T>
class Table {
private:
    struct Node
    {
        string name;
        T data;
        Node() {
            name = " ";
            data = 0.0;
        }
    };
    
    Node* dataMas;
    int* keyMas;
    int marker;
    void repack() {
        int i=0;
        int j = 0;
        while (j < marker) {
            i = j + 1;
            while (i < marker + 1) {
                int p = comparison(dataMas[keyMas[j]].name, dataMas[keyMas[i]].name);
                switch (p)
                {
                    case 0:
                        i++;
                        continue;
                    case 1:
                        std::swap(keyMas[j], keyMas[i]);
                        i++;
                        continue;
                    case -1:
                        i++;
                        continue;
                    default:
                        continue;
                }
            }
            j++;
        }

    }
    int comparison(string one, string tow) {
        const char* s = &one[0];
        const char* f = &tow[0];

        if (s < f == 0) {
            return 0;
        }
        if (s > f) {//str1 áîëüøå, ÷åì str2
            return 1;
        }
        if (s < f) { //str1 ìåíüøå, ÷åì str2
            return -1;
        }
    }

public:
    Table() {
        marker = -1;
        dataMas = new Node[1];
        keyMas = new int[1];
    }
    void insert(const string& key, const T& value) {
        Node val;
        val.name = key;
        val.data = value;
        if (marker == -1) {
            marker = 0;
            dataMas[marker] = val;
            keyMas[marker] = marker;
        }
        else {
            if (search(val.name) == marker + 1) {
                if ((marker == int(sizeof(dataMas)) / 4) || marker == 0) {
                    Node* tmp = new Node[int(sizeof(dataMas)) * 2];
                    int* tm = new int[int(sizeof(keyMas)) * 2];
                    for (int i = 0; i <= marker; i++) {
                        tmp[i] = dataMas[i];
                        tm[i] = keyMas[i];
                    }
                    delete[]dataMas;
                    dataMas = tmp;
                    delete[]keyMas;
                    keyMas = tm;
                }
                dataMas[++marker] = val;
                keyMas[marker] = marker;
                repack();
            }
            else {
                dataMas[keyMas[search(val.name)]] = val;
            }
        }

    }
    void erase(const string& key) {
        int i = search(key);
        if(marker != -1){
            if (i == marker) {
                marker--;
            }
            else {
                while (i < marker) {
                    dataMas[keyMas[i]] = dataMas[keyMas[i + 1]];
                    keyMas[i] = keyMas[i + 1];
                    i++;
                }
                marker--;
            }
        }
    }
    int search(const string& key) {
        int l = 0;
        int r = marker;
        int mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (comparison(dataMas[keyMas[mid]].name, key) == 0) return mid;
            if (comparison(dataMas[keyMas[mid]].name, key) == 1) r = mid - 1;
            else l = mid + 1;
        }
        return marker + 1;


    }
    T& at(const string& key) {
        if (search(key) == marker + 1) {
            // вызвать окно (такого элемента в таблице нет)
            string message("variable was not found: " + key);
            throw std::out_of_range(message);
        }
        return dataMas[keyMas[search(key)]].data;
    }
    void print() {
        int i = 0;
        while (i <= marker) {
            std::cout << "------------------------------------" << std::endl;
            std::cout << dataMas[keyMas[i]].name << " | ";
            dataMas[keyMas[i]].data.print();
            std::cout << std::endl;
            i++;
        }
    }
    string print_() {
        int i = 0;
        string str;
        while (i <= marker) {
            str+= (dataMas[keyMas[i]].name + "  " + dataMas[keyMas[i]].data.to_string()+ "| ");
            i++;
        }
        return str;
    }

};


#endif //TRANSLATOR_TABLE_H
