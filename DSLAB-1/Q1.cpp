#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int n = 0;    
    int choice;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) { // CREATE
            cout << "Numbers total";
            cin >> n;
            cout << "Enter "  numbers: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
        }
        else if (choice == 2) { // DISPLAY
            cout << "Numbers entered";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else if (choice == 3) { // INSERT
            int p, val;
            cout << "Enter position between 0 and " << n;
            cin >> p;
            cout << "Enter number to insert: ";
            cin >> val;
            for (int i = n; i > p; i--) {
                arr[i] = arr[i - 1];
            }
            arr[p] = val;
            n++;
            cout << "Done\n";
        }
        else if (choice == 4) { // DELETE
            int p;
            cout << "Enter position to delete  ";
            cin >> p;
            for (int i = p; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
            cout << "Number deleted\n";
        }
        else if (choice == 5) { // LINEAR SEARCH
            int key, found = 0;
            cout << "Enter number to search: ";
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Number found at position " << i << endl;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                cout << "Number not found\n";
            }
        }
        else if (choice == 6) { // EXIT
            cout << "end\n";
        }
        else {
            cout << "Wrong choice! Try again\n";
        }
    } while (choice != 6);

    return 0;
}

