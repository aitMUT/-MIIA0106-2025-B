// TODO 1) àµÔÁ field ·Õè¢Ò´ã¹ Address áÅÐ Phone ãËé¤Ãº
// TODO 2) àµÔÁ field ã¹ Student: id, name, surname, addr, tel
// TODO 3) ÃÑº¤èÒ¢éÍÁÙÅ¹Ñ¡ÈÖ¡ÉÒ 1 ¤¹ (ÃÇÁ·ÕèÍÂÙè + â·ÃÈÑ¾·ì)
// TODO 4) áÊ´§¼Å¢éÍÁÙÅ·Ñé§ËÁ´

#include <iostream>
using namespace std;

struct Address {
    int number;
    char road[20];
    char district[20];
    char province[20];
    // TODO: (¶éÒµéÍ§¡ÒÃà¾ÔèÁ) àªè¹ postcode[6]
};

struct Phone {
    char home[10];
    char mobile[10];
};

struct Student {
    char id[9];
    char name[20];
    char surname[20];
    Address addr;
    Phone tel;
    // TODO:
};

int main() {
    Student s1;

    // TODO 3) ÃÑº¤èÒ¢éÍÁÙÅ¹Ñ¡ÈÖ¡ÉÒ 1 ¤¹ (ÃÇÁ·ÕèÍÂÙè + â·ÃÈÑ¾·ì)
    cout << "Enter Student Information:\n";
    cout << "ID: "; cin >> s1.id;
    cout << "Name: "; cin >> s1.name;
    cout << "Surname: "; cin >> s1.surname;

    cout << "Address - House Number: ";
    // TODO 3) cin >> 
    cin >> s1.addr.number;

    cout << "Address - Road: ";
    // TODO 3) cin >> 
    cin >> s1.addr.road;

    cout << "Address - District: ";
    // TODO 3) cin >> 
    cin >> s1.addr.district;
    cout << "Address - Province:";
    // TODO 3) cin >> 
    cin >> s1.addr.province;

    cout << "Phone - Home: ";
    // TODO 3) cin >> 
    cin >> s1.tel.home;

    cout << "Phone - Mobile: ";
    cin >> s1.tel.mobile;
    // TODO 3) cin >> 

    cout << "\n===== Output =====\n";
    //// TODO 4): áÊ´§¼Å¢éÍÁÙÅ·Ñé§ËÁ´ (ÃÇÁ address áÅÐ phone)

    return 0;
}
