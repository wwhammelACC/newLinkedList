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
        Node *newNode = new Node;
        newNode->data.id = id;
        newNode->data.data = *info;
        if (head == NULL || id < head->data.id) {
            //Node *newNode;
            // eventually replace below with method nodeAllocate
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
                newNode->next = NULL;
                newNode->prev = current;
                current->next = newNode;
                flag = true;
            } else {
                //addMiddle(id, info, current, *nodeHold);
                cout << "addMiddle test line " << endl;
                newNode->next = current;
                newNode->prev = current->prev;
                current->prev->next = newNode;
                current->prev = newNode;
                flag = true;
            }
        }
    }
    return flag;
}

bool LinkedList::deleteNode(int id){
    bool flag = false;
    cout << "deleteNode Test Line " << endl;
    Node *current = head;
    // pass this method an id to delete. Return true or false to indicate success or failure.
    if(id > 0){ // id has to be greater than 0
        if(head == NULL){ // if head is NULL dont go forward
            flag = false;
        }else{
            while(id != current->data.id && current->next != NULL){
                current = current->next;
            }if(id != current->data.id){
                flag = false;
                // below setting up delete for last item
            }else if(id == current->data.id && current->next == NULL && current->prev == NULL){
                delete current;
                head = NULL;
                flag = true;
            }else if(current->prev == NULL){ // deleting head
                cout << "deleting head test line " << endl;
                current->next->prev = NULL;
                head = current->next;
                delete current; //Deallocate
                flag = true;
            }else if(current->next == NULL){ // deleting tail
                cout << "deleting tail test line " << endl;
                current->prev->next = NULL;
                delete current; //Deallocate
                flag = true;
            }else if(id == current->data.id){
                cout << "deleting middle test line " <<  endl;
                current->prev->next = current->next;
                current->next->prev = current->prev;
                delete current; //Deallocate
                flag = true;
            }
        }
    }
    cout << endl;
    return flag;
}

bool LinkedList::getNode(int id, Data *info){
    bool flag = false;
    cout << "getNode Test Line " << endl;
    if(head != NULL){
        Node *current = head;
        while(id != current->data.id && current->next != NULL){
            current = current->next;
        }
        if(id == current->data.id){
            // filling empty data struct
            cout << "getNode Test Line id found" << endl;
            info->data = current->data.data; // data is the string
            info->id = current->data.id; // this is the int id
            flag = true;
        }else{
            // if id is not found fill id w/ -1 and string with ""
            cout << "getNode Test Line id not found" << endl;
            info->id = -1;
            info->data = "";
            flag = false;
        }
    }
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
