//Jm 09/24/25
//linkedListPopQuiz.cpp

#include <iostream>
#include <string>
using namespace std;

struct node {
    char data;
    node* next;
};

int main() {

cout << "\nHello and welcome to my linked list pop quiz program!\n";

    string myStr = "abcDefg";
    cout << "\nmyStr =" << myStr << endl;
    cout << "\nmyStr[0] is: " << myStr[0] << endl;
    cout << "\nmyStr[1] is: " << myStr[1] << endl;
    cout << "\nmyStr[2] is: " << myStr[2] << endl;

node* head = nullptr;
node* second = nullptr;
    //Start of my linked list
    head = new node();
    head->data = myStr[0];
    head->next = nullptr;

    second = new node();
    second->data = myStr[1];
    second->next = head;
    head = second;

    second = new node();
    second->data = myStr[2];
    second->next = head;
    head = second;

    cout << "\nLinked List Data:" << head->data << endl;
    cout << "\nLinked List Data:" << head->next->data << endl;
    cout << "\nLinked List Data:" << head->next->next->data << endl;

    for (int i=0; i < 100; i++) {
        new node();

        head = new node();
        head->data = myStr[0];
        head->next = nullptr;
    }
    //Initiallize, check, change

    for (int i=0; i < 7; i++) {
        node* myNode = new node();
        myNode->data = myStr[i];
        cout << "\nLinked List Data:" << myNode->data << endl;
        delete myNode;
}
    cout << "\nLinked List Head Data:" << head->data << endl;
    cout << "\nLinked List Second Data:" << second->data << endl;

    int length = myStr.length();
    cout << "\nThe length of myStr is:" << length << endl;

    int sizeOfList = 0;
    cout << "\nThe size of my list is:" << sizeOfList << endl;
    while (second->next != nullptr) {
    sizeOfList++;
        second = second->next;
}
    cout << "\nLinked List Size:" << sizeOfList << endl;
second = head;
return 0;
}