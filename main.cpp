#include "contact.h"
int main() {
    std::vector<Contact> contacts;
    int choice;

    do {
        std::cout << "\n\nContact Management System\n\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. View Contacts\n";
        std::cout << "3. Delete Contact\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addContact(contacts);
                break;
            case 2:
                viewContacts(contacts);
                break;
            case 3:
                deleteContact(contacts);
                break;
            case 4:
                std::cout << "Exiting\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}