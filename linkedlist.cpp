/*
Name: William Hammel
Linked Lists
Purpose: : Create a fully functional doubly linked list class
Create a linked list object from your class.
Demonstrate complete testing and full functionality of your linked list.
*/

#include "linkedlist.h"

/*
* ****************************************
* Constructors / Destructors
* ****************************************
*/

//constructor
LinkedList::LinkedList() {
    head = NULL;
}

//Destructor
LinkedList::~LinkedList(){
    clearList();
}

// PUBLIC METHODS

bool LinkedList::addNode(int id, string *info) {
    bool flag = false;
    cout << "addNode Test Line " << endl;
    cout << endl;
    Node *nodeHold, *current; // note is the private methods I use **nodeHold here
    if (id > 0 && *info != "/0") {
        cout << "test line after initial condition " << endl;
        //addHead
        if (head == NULL || id < head->data.id) { // makes condition to set id at beginning
            cout << "test line after initial addHead test condition " << endl;
            if(current == NULL){
                nodeHold->prev = NULL;
                nodeHold->next = NULL;
            }else{
                nodeHold->prev = NULL;
                nodeHold->next = current;
                current->prev = nodeHold;
            }
            head = nodeHold;
            flag = true;
        }
    }

    return flag;
}

bool LinkedList::deleteNode(int id){
    bool flag = false;
    cout << "deleteNode Test Line " << endl;
    cout << endl;
    return flag;
}

bool LinkedList::getNode(int id, Data* info){
    bool flag = false;
    cout << "getNode Test Line " << endl;
    cout << endl;
    return flag;
}

void LinkedList::printList(bool direction){
    cout << "printList Test Line " << endl;
    cout << endl;
}

int LinkedList::getCount(){
    int count = 0;
    cout << "getCount Test Line " << endl;
    cout << endl;
    return count;
}

bool LinkedList::clearList(){
    bool flag = false;
    cout << "clearList Test Line " << endl;
    cout << endl;
    return flag;
}

bool LinkedList::exists(int id){
    bool flag = false;
    cout << "exists Test Line " << endl;
    cout << endl;
    return flag;
}

// PRIVATE METHODS
