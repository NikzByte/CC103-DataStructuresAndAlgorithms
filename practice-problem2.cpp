#include <iostream>
using namespace std;

struct PERSON {
    char name[50];
    int age;
};

int main () {

    int n;
    int totalAge = 0;
    PERSON person[100];

    cout << "Enter the number of people: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter name of person " << i + 1 << ": ";
        cin.getline(person[i].name, 50);
    
        cout << "Enter age of person " << i + 1 << ": ";
        cin >> person[i].age;
        cin.ignore();
        totalAge += person[i].age;
    }

    float average = totalAge / n;

    cout << "The average age of the people is " << average;

    return 0;
}