#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string ID;
    string Nikname;
    string LineID;
    string Phone;

};

// TODO: swap เขียนเอง
void swapStudent(Student& a, Student& b) {
    // TODO
   Student temp = a;
   a = b;
   b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].ID > students[j + 1].ID) {
                swapStudent(students[j], students[j + 1]);
            }
        }
	}
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
        cout << students[i].ID << "\t" << students[i].Nikname << "\t"
            << students[i].LineID << "\t" << students[i].Phone << "\n";


        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter ID: ";
        cin >> students[i].ID;
        cout << "Enter Nikname: ";
        cin >> students[i].Nikname;
        cout << "Enter LineID: ";
        cin >> students[i].LineID;
        cout << "Enter Phone: ";
        cin >> students[i].Phone;

        cout << endl;
    }
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
