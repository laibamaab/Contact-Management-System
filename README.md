# Contact Management System

A basic console-based C++ application that allows a user to add, view, and delete contacts.  
The program runs in a loop until the user chooses to exit.

## Features
- **Add Contact** – Add a new contact to the in-memory list.
- **View Contacts** – Display all stored contacts.
- **Delete Contact** – Remove a contact from the in-memory list.
- **Exit** – End the program.

## Technologies Used
- C++
- Standard Template Library (STL) – `std::vector` for storing contacts
- `iostream` for input/output

## Prerequisites
Before running the program, make sure you have:
- A C++ compiler (e.g., `g++` from GCC or MSVC on Windows)

## File Structure
- `main.cpp` – Contains the program’s main function, menu, and choice handling.
- `contact.h` – Header file containing the `Contact` class and related function declarations.
- `contact.cpp` - Contains the implementation of `addContact`, `viewContacts`, and `deleteContact`.

## How to Compile and Run
1. Place all source files (`main.cpp`, `contact.h`, `contact.cpp`) in the same directory.
2. Open a terminal or command prompt in that directory.
3. Compile the program:
   ```bash
   g++ main.cpp contact.cpp -o contact_manager

4. Run the program:

   ```bash
   ./contact_manager
   ```

## Program Flow

1. The menu is displayed:

   ```
   Contact Management System

   1. Add Contact
   2. View Contacts
   3. Delete Contact
   4. Exit
   ```
2. The user enters a choice (1–4).
3. Depending on the choice:

   * **1:** Calls `addContact(contacts)`
   * **2:** Calls `viewContacts(contacts)`
   * **3:** Calls `deleteContact(contacts)`
   * **4:** Displays "Exiting" and ends the program
4. Any invalid choice displays an error message.

## Notes

* All contacts are stored **only in memory** for the current session.
* Closing the program will erase all stored contacts.

## License

This project is provided for educational purposes.
