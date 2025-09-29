#include <iostream>
#include "StudentSystem.cpp"
using namespace std;

int main()
{
    StudentManager<int, string> sm;
    int choice, id;
    string name;

    do
    {
        cout << endl;
        cout << "===== Student Management Menu =====" << endl;
        cout << "1. Insert Student" << endl;
        cout << "2. Show All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter Student ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Student Name: ";
            getline(cin, name);
            sm.addStudent(id, name);
        }
        else if (choice == 2)
        {
            sm.displayStudents();
        }
        else if (choice == 3)
        {
            cout << "Enter ID to search: ";
            cin >> id;
            sm.searchStudent(id);
        }
        else if (choice == 4)
        {
            cout << "Enter ID to delete: ";
            cin >> id;
            sm.removeStudent(id);
        }
        else if (choice == 0)
        {
            cout << "Exiting program..." << endl;
        }
        else
        {
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 0);

    return 0;
}
