#include "LinkedList.h"

LinkedList::iterator::iterator() {
    currentList = new Node();
}

LinkedList::iterator::iterator(LinkedList::Node *Node_) {
    currentList = Node_;
}

LinkedList::iterator &LinkedList::iterator::operator=(const LinkedList::iterator &extra) {
    currentList = extra.currentList;
    return *this;
}

bool LinkedList::iterator::operator!=(const LinkedList::iterator &extra) const {
    return currentList != extra.currentList;
}

bool LinkedList::iterator::operator==(const LinkedList::iterator &extra) const {
    return currentList == extra.currentList;
}

value_type &LinkedList::iterator::operator*() {
    return currentList -> val;
}

value_type *LinkedList::iterator::operator->() {
    return &(currentList -> val);
}

LinkedList::iterator &LinkedList::iterator::operator++() {
    currentList = currentList -> next;
    return *this;
}

LinkedList::iterator LinkedList::iterator::operator++(int) {
    LinkedList::iterator it = *this;
    currentList = currentList -> next;
    return it;
}

LinkedList::iterator &LinkedList::iterator::operator--() {
    currentList = currentList -> prev;
    return *this;
}

LinkedList::iterator LinkedList::iterator::operator--(int) {
    LinkedList::iterator it = *this;
    currentList = currentList -> prev;
    return it;
}

LinkedList::iterator LinkedList::iterator::operator+(int shift) {
    LinkedList::iterator it = *this;
    for (int i = 0; i < shift; i++) {
        it++;
    }
    return it;
}

LinkedList::iterator LinkedList::iterator::operator-(int shift) {
    LinkedList::iterator it = *this;
    for (int i = 0; i < shift; i++) {
        it--;
    }
    return it;
}