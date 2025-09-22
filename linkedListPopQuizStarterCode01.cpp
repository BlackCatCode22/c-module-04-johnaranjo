

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

    cout << "\n Linked List Data:" << head->data << endl;
    cout << "\n Linked List Data:" << head->next->data << endl;
    cout << "\n Linked List Data:" << head->next->next->data << endl;

    for (int i=0; i < 100; i++) {
        new node();

        head = new node();
        head->data = myStr[0];
        head->next = nullptr;
    }
    for (int i=0; i < 7; i++) {
    node* myNode = new node();
    myNode->data = myStr[i];
    cout << "Linked List Data:" << myNode->data << endl;
}
    cout << "\nLinked List Head Data:" << head->data << endl;
    cout << "\nLinked List Second Data:" << head->next->data << endl;

    int sizeOfList = 0;
    cout << "\nLinked List Size:" << sizeOfList << endl;
while (head != nullptr) {
    cout << head->data << endl;
    head = head->next;
}
    cout << "\nLinked List Size:" << sizeOfList << endl;

return 0;
}