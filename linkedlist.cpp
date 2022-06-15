/*
 * your comment header here
 */

#include "linkedlist.h"

/*
* ****************************************
* Constructors / Destructors
* ****************************************
*/

//Constructor
LinkedList::LinkedList(){
    head = NULL;
}

//Destructor
LinkedList::~LinkedList(){
    clearList();
}

// PUBLIC METHODS

bool LinkedList::addNode(int id){
    bool flag = false;
    cout << "addNode Test Line " << endl;
    cout << endl;
    return flag;
}

bool LinkedList::deleteNode(int id, string* info){
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
    cout << "getCount Test Line " << endl;
       cout << endl;
}

bool LinkedList::clearList(){
    cout << "clearList Test Line " << endl;
    cout << endl;
    return flag;
}

bool LinkedList::exists(int id){
    flag = false;
    cout << "exists Test Line " << endl;
    cout << endl;
    return flag;
}

// PRIVATE METHODS
