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

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

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

    // OUTPUT
    cout << "\n===== Student List =====\n";
	cout << "ID\tNikname\tLineID\tPhone\n"; 
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...
		cout << students[i].ID << "\t" << students[i].Nikname << "\t" 
			<< students[i].LineID << "\ <<t" << students[i].Phone << endl; 
        cout << "----------------------\n";
    }

    return 0;
}
