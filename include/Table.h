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
        string key;
        T value;
        Node(const string& key, const T& value) {
            this->key = key;
            this->value = value;
        }
        Node() {
            this->key = "default-key";
        };
    };
    
    Node* nodes;
    size_t size;
    size_t capacity;

    size_t upper_bound(const string& key) {
        size_t res = size;
        int l = 0, r = size;
        while (l <= r) {
            int c = (l + r) / 2;
            if (c == 0 || nodes[c - 1].key <= key) {
                res = c;
                l = c + 1;
            } else {
                r = c - 1;
            }
        }
        return res;
    } // returns position of the first element greater than the given key (may be out of range)
    void reserve(size_t newCap) {
        Node* newNodes = new Node[newCap];
        for(size_t i = 0; i < newCap && i < capacity; i++) {
            newNodes[i] = nodes[i];
        }
        std::swap(newNodes, nodes);
        delete[] newNodes;
        capacity = newCap;
    } // changes capacity

public:
    Table() {
        size = 0;
        capacity = 16;
        nodes = new Node[capacity];
    }

    void insert(const string& key, const T& value) {
        size_t pos = upper_bound(key);
        if(pos - 1 >= 0 && nodes[pos - 1].key == key) {
            // element was found
            nodes[pos - 1].value = value;
        } else {
            // element was not found
            if(size == capacity)
                reserve(capacity * 2);
            for(size_t i = size + 1; i > pos; i--)
                nodes[i] = nodes[i - 1];
            nodes[pos].key = key;
            nodes[pos].value = value;
            size++;
        }

    } // если такой ключ уже существует, значение элемента будет перезаписано
    void erase(const string& key) {
        size_t pos = upper_bound(key);
        if(pos - 1 >= 0 && nodes[pos - 1].key == key) {
            // element was found
            for(size_t i = pos - 1; i < size; i++)
                nodes[i] = nodes[i + 1];
            size--;
        }
    } // removes the element (if one exists)
    T at(const string& key) {
        size_t pos = upper_bound(key);
        if(pos - 1 >= 0 && nodes[pos - 1].key == key)
            return nodes[pos - 1].value;
        else
            throw std::out_of_range("key was not found");
    }
    void print() {
        int i = 0;
        while (i < size) {
            std::cout << "------------------------------------" << std::endl;
            std::cout << nodes[i].key << " | ";
            nodes[i].value.print();
            std::cout << std::endl;
            i++;
        }
    }
    string print_() {
        int i = 0;
        string str;
        while (i < size) {
            str+= (nodes[i].key + "  " + nodes[i].value.to_string() + "| ");
            i++;
        }
        return str;
    }

};


#endif //TRANSLATOR_TABLE_H
