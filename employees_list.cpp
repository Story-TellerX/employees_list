/* This is simple console application for create, edit, read, delete employee record
from the employees list*/

#include <iostream>
#include <cstring>

using namespace std;

int menu();
void enter_empl_data(), report_for_empl(), delete_empl_record();

    char name[10][80]; // md arr for employee name
    char phone[10][80]; // md arr for employee phone number
    float hours[10]; // arr for the work time of employee for the week
    float wage[10]; // arr for the salary wage of employee

int main () {
    int choice;
    
    // logic of app working
    do {
        choice = menu (); // get the menu and choise of user
        switch(choice) {
            case 0:
            break;

            case 1:
            enter_empl_data();
            break;

            case 2:
            report_for_empl();
            break;

            case 3:
            delete_empl_record();
            break;

            default:
            cout << "Please try again...\n\n";

        }
    } while (choice != 0);
    
    return 0;

}

int menu() {
    int choice;
    // menu of selecting option
    cout << "0. To exit from app\n";
    cout << "1. To enter employee info\n";
    cout << "2. To get report about emplyees\n";
    cout << "3. To delete employee record\n";
    cout << "PLease make the choise: ";
    cin >> choice; // get user choice

    return choice; // return the user choice
}

void enter_empl_data() {
    int i;
    char temp[80];

    // cycle for creting employees list data

    for (i = 0; i <10; i++) {
        cout << "Enter the first last name of employee: ";
            cin >> name[i];
        cout << "Enter the phone number of employee: ";
            cin >> phone[i];
        cout << "Enter the work time of employee for the week: ";
            cin >> hours[i];
        cout << "Enter the salary: ";
            cin >> wage[i];
    }
}

void report_for_empl() {
    int i;

    // cycle to read and display data from employees list
    for (i = 0; i < 10; i++) {
        cout << name[i] << " " << phone[i] << " work time: " << hours[i] << " Salary: " << wage[i] << "\n";
        cout << "Salary for week: " << wage[i] * hours[i]; 
        cout << "\n";
    }
}

void delete_empl_record() {
    int i, num_rec;

    // get number of record that must be deleted
    cout << "Please enter the number of the record that must be deleted: ";
        cin >> num_rec;
    
    // cycle is find and replace the record
    for (i = 0; i < 10; i++) {
        if(i == num_rec) {
            strcpy(name[i], "");
            strcpy(phone[i], "");
            hours[i] = 0;
            wage[i] = 0; 
        }
    }
    cout << "There is no employee record with this number: " << num_rec << '\n';
    cout << "Please try another number\n\n";
}