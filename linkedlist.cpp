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
    Node *current = head;
    if (id > 0 && *info != "/0") {
        //Node *nodeHold;
        if (head == NULL || id < head->data.id) {
            //Node *newNode;
            // eventually replace below with method nodeAllocate
            Node *newNode = new Node;
            newNode->data.id = id;
            newNode->data.data = *info;
            cout << "addHead initial test line " << endl;
            if(current == NULL){
                newNode->prev = NULL;
                newNode->next = NULL;
            }else
            {
                newNode->prev = NULL;
                newNode->next = current;
                current->prev = newNode;
            }
            head = newNode;
            flag = true;
        }else{
            //Node *current = head;
            while (id > current->data.id && current->next != NULL) {
                current = current->next;
            }
            if (id == current->data.id) {
                flag = false;
            } else if (id > current->data.id && current->next == NULL) {
                //addTail(id, info, current, *nodeHold);
                cout << "addTail test line " << endl;
                flag = true;
            } else {
                //addMiddle(id, info, current, *nodeHold);
                cout << "addMiddle test line " << endl;
                flag = true;
            }
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
