#include <iostream>
using namespace std;

void showMenu() {
    cout << "=== Inventory Menu ===\n";
    cout << "1. Add Item\n";
    cout << "2. View Items\n";
    cout << "3. Exit\n";
    cout << "Choose an option: ";
}

void handleChoice(int choice) {
    if (choice == 1) {
        cout << "Item added!\n";
    } else if (choice == 2) {
        cout << "Displaying items...\n";
    } else if (choice == 3) {
        cout << "Exiting...\n";
    } else {
        cout << "Invalid option. Please try again.\n";
    }
}

int main() {
    int option;
    do {
        showMenu();
        cin >> option;
        handleChoice(option);
        cout << endl;
    } while (option != 3);

    return 0;
}
