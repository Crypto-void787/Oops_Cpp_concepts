#include<iostream>
using namespace std;

class Laptop {
public:
    string Company_name;
    int price;
    int serial_no;

    void Data_collection();
    void Data_display();
};

void Laptop::Data_collection() {
    cout << "Enter the Company name: ";
    cin >> Company_name;
    cout << "Enter the price: ";
    cin >> price;
    cout << "Enter the serial number: ";
    cin >> serial_no;

    cout << "Laptop details collected successfully." << endl;
    cout << "----------------------------------------" << endl;
}

void Laptop::Data_display() {
    cout << "Laptop Details: " << endl;
    cout << "Laptop company name: " << Company_name << endl;
    cout << "Laptop price: " << price << endl;
    cout << "Laptop serial number: " << serial_no << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    Laptop L1; 
    L1.Company_name ;
    L1.price ;
    L1.serial_no ; 

    L1.Data_collection(); 
    L1.Data_display(); 
    return 0 ; 
}
