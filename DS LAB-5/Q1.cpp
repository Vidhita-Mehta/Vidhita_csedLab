#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    node* head;
    node* tail;
public:
    list() {
        head = tail = NULL;
    }

    void pushfront(int val) {
        node* newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }

    void pushback(int val) {
        node* newnode = new node(val);
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pushmid(int val, int pos) {
        if (pos < 0) {
            cout << "Invalid position" << endl;
            return;
        } else if (pos == 0) {
            pushfront(val);
            return;
        } else {
            node* temp = head;
            for (int i = 0; i < pos - 1; i++) {
                if (temp == NULL) {
                    cout << "Invalid position" << endl;
                    return;
                }
                temp = temp->next;
            }
            node* newnode = new node(val);
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }

    void popfront() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        if (head == NULL) tail = NULL;
    }

    void popback() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void deletenode(int val) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        if (head->data == val) {
            popfront();
            return;
        }
        node* temp = head;
        while (temp->next != NULL && temp->next->data != val) {
            temp = temp->next;
        }
        if (temp->next == NULL) {
            cout << "Node " << val << " not found" << endl;
            return;
        }
        if (temp->next == tail) {
            popback();
            return;
        }
        node* del = temp->next;
        temp->next = del->next;
        del->next = NULL;
        delete del;
    }

    int search(int key) {
        node* temp = head;
        int idx = 0;
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "The position of this element from head is: " << idx << endl;
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        cout << "Element not found" << endl;
        return -1;
    }

    void display() {
        node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    list ll;
    int choice = 1;
    while (choice != 0) {
        cout << "1 Push Front" << endl;
        cout << "2 Push Back" << endl;
        cout << "3 Push Middle" << endl;
        cout << "4 Pop Front" << endl;
        cout << "5 Pop Back" << endl;
        cout << "6 Delete Node" << endl;
        cout << "7 Display" << endl;
        cout << "8 Search" << endl;
        cout << "9 Exit" << endl;

        cout <<"Enter your choice: ";
        cin >>choice;

        if (choice == 1) {
            int val;
            cout << "Enter value to push front: ";
            cin >> val;
            ll.pushfront(val);
        } else if (choice == 2) {
            int val;
            cout << "Enter value to push back: ";
            cin >> val;
            ll.pushback(val);
        } else if (choice == 3) {
            int val, pos;
            cout << "Enter value and position: ";
            cin >> val >> pos;
            ll.pushmid(val, pos);
        } else if (choice == 4) {
            ll.popfront();
        } else if (choice == 5) {
            ll.popback();
        } else if (choice == 6) {
            int val;
            cout << "Enter node value to delete: ";
            cin >> val;
            ll.deletenode(val);
        } else if (choice == 7) {
            ll.display();
        } else if (choice == 8) {
            int val;
            cout << "Enter element to search: ";
            cin >> val;
            ll.search(val);
        } else if (choice==9) {
            cout << "exit" << endl;
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }
    }
