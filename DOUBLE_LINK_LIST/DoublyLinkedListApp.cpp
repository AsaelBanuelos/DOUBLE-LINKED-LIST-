#include "doublelinkedlist.h"
#include <iostream>

void found(Node<int>* node) {
    if (node != nullptr) {
        std::cout << "Found: " << node->data << std::endl;
    }
    else {
        std::cout << "Not Found" << std::endl;
    }
}

int main() {
    DoublyLinkedList<int> l1;

    //INSERTIONS TO THE LIST 
    l1.insertAtHead(10);       // Insert 10 at the head
    l1.insertAtEnd(20);        // Insert 20 at the end
    l1.insertAtEnd(30);        // Insert 30 at the end
    l1.insertAtHead(80);       // Insert 80 at the head
    l1.insertAtEnd(10);        // Insert 10 at the end
    l1.insertAtEnd(65);        // Insert 65 at the end


    //DISPLAY THE ENTIRE LIST 
    l1.display();

    //FINDING ELEMENT IN THE LIST
    found(l1.find(65));  
    found(l1.find(55));   
    found(l1.find(10));  


    //DISPLAY THE ENTIRE LIST USING BACKWARD TRAVERS
    l1.displayReverse();

    return 0;
}
