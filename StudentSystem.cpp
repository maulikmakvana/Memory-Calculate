#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class ID, class NAME>
class StudentManager
{
    vector<ID> idList;
    vector<NAME> nameList;

public:
    // Add a new studen
    void addStudent(ID id, NAME nm)
    {
        
        for (int i = 0; i < idList.size(); i++)
        {
            if (idList[i] == id)
            {
                cout << "ID already exists!" << endl;
                return;
            }
        }
        idList.push_back(id);
        nameList.push_back(nm);
        cout << "Student inserted successfully!" << endl;
    }

    // Show all student
    void displayStudents()
    {
        if (idList.empty())
        {
            cout << "No student records found." << endl;
            return;
        }

        cout << endl;
        cout << "--- Student List ---" << endl;
        for (int i = 0; i < idList.size(); i++)
        {
            cout << "ID : " << idList[i] << " | Name : " << nameList[i] << endl;
        }
    }

    // search by ID
    void searchStudent(ID id)
    {
        for (int i = 0; i < idList.size(); i++)
        {
            if (idList[i] == id)
            {
                cout << "Found - ID: " << idList[i] << " | Name: " << nameList[i] << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }

    // delete by ID
    void removeStudent(ID id)
    {
        for (int i = 0; i < idList.size(); i++)
        {
            if (idList[i] == id)
            {
                idList.erase(idList.begin() + i);
                nameList.erase(nameList.begin() + i);
                cout << "Record deleted successfully!" << endl;
                return;
            }
        }
        cout << "Student not found!" << endl;
    }
};
