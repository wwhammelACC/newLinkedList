/*
 Name: William Hammel
 Linked Lists
 Purpose: : Create a fully functional doubly linked list class
 Create a linked list object from your class.
 Demonstrate complete testing and full functionality of your linked list.
 */

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "data.h"
#include <iostream>
using std::cout;
using std::endl;

class LinkedList{
    
    //prototypes
    
public:
    LinkedList();
    ~LinkedList();
    //accepts id and data, and inserts to the list in order
    bool addNode(int, string*);
    bool deleteNode(int); // accepts an id and deletes the node
    bool getNode(int, Data*); // retrieves the data from a node from a given id
    bool clearList(); // deallocates all nodes and sets head to NULL
    bool exists(int); // tests for the existence of a node based on a given id
    void printList(bool = false); // prints forward (default) or backward
    int getCount(); // returns count dynamically
    
private:
    Node *head;
    void addHead(int, string*, Node*, Node*);
    void addMiddle(int, string*, Node*, Node*);
    void addTail(int, string*, Node*, Node*);
    void nodeAllocate(int, string*, Node**);
};


#endif //LINKEDLIST_H
