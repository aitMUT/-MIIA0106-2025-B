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
    Student s1; // ตัวแปรเดี่ยวของ struct

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.ID;   

	cout << "Enter Nikname: "; 
	cin >> s1.Nikname;  

	cout << "Enter LineID: ";
	cin >> s1.LineID;   

	cout << "Enter Phone: ";	
	cin >> s1.Phone;


    cout << "\n=== Output Student 1 ===\n";
    // TODO: cout << ...
	cout << "ID: " << s1.ID << endl;
	cout << "Nikname: " << s1.Nikname << endl;
	cout << "LineID: " << s1.LineID << endl;
	cout << "Phone: " << s1.Phone << endl;


    return 0;
}
