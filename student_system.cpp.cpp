#include <iostream>
using namespace std;
int main() 
{
    const int MAX = 100;
    int ids[MAX];
    string names[MAX];
    float grades[MAX][10]; 
    int gradeCount[MAX];
    int studentCount = 0;
    int choice;
    do {
        cout << "\n===== Student Grade System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Add Grades\n";
        cout << "3. Display Grades\n";
        cout << "4. Calculate Average\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;      
        if (choice == 1) {
            cout << "Enter ID: ";
            cin >> ids[studentCount];

            cout << "Enter Name: ";
            cin >> names[studentCount];

            gradeCount[studentCount] = 0;
            studentCount++;

            cout << "Student added!\n";
        }
        else if (choice == 2)
        {
            int id;
            cout << "Enter Student ID: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < studentCount; i++) {
                if (ids[i] == id) {
                    int n;
                    cout << "How many grades? ";
                    cin >> n;

                    for (int j = 0; j < n; j++) {
                        cout << "Enter grade " << j + 1 << ": ";
                        cin >> grades[i][gradeCount[i]];
                        gradeCount[i]++;
                    }

                    cout << "Grades added!\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student not found!\n";
            }
        }

        else if (choice == 3) {
            for (int i = 0; i < studentCount; i++) {
                cout << "\nID: " << ids[i]
                     << ", Name: " << names[i] << endl;

                cout << "Grades: ";
                for (int j = 0; j < gradeCount[i]; j++) {
                    cout << grades[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (choice == 4) {
            for (int i = 0; i < studentCount; i++) {
                if (gradeCount[i] == 0) {
                    cout << names[i] << " has no grades.\n";
                    continue;
                }

                float sum = 0;
                for (int j = 0; j < gradeCount[i]; j++) {
                    sum += grades[i][j];
                }

                float avg = sum / gradeCount[i];

                cout << "Student: " << names[i]
                     << " | Average: " << avg << endl;
            }
        }

        else if (choice == 5) {
            cout << "Exiting...\n";
        }

        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
