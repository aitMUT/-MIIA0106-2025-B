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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    // TODO
	cout << "ID\tNikname\tLineID\tPhone\n";
    cout << s.ID << "\t" << s.Nikname << "\t" 
		<< s.LineID << "\t" << s.Phone << endl; 
}
// TODO: เขียนฟังก์ชันนี้ เพื่อรับค่าข้อมูลนักศึกษา
void inputStudent(Student &s) {
    // TODO
    cout << "Enter ID: ";
    cin >> s.ID;   

    cout << "Enter Nikname: "; 
    cin >> s.Nikname;  

    cout << "Enter LineID: ";
    cin >> s.LineID;   

    cout << "Enter Phone: ";	
    cin >> s.Phone;
}


int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	inputStudent(s1);



    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
	printStudent(s1);

    return 0;
}

