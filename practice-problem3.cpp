#include <iostream>
#include <cstring>
using namespace std;

struct Car {
    char brand[20];
    char model[20];
    int year;
    float mileage;
};

float calcDep(float mileage) {
    if (mileage < 10000)
        return 0.0;
    else if (mileage < 50000)
        return 0.10;
    else if (mileage < 100000)
        return 0.20;
    else
        return 0.30;
}

void displayCarDetails(Car car) {
    float depreciation = calcDep(car.mileage) * 100;
    
    cout << "Car Details:\n";
    cout << "Brand: " << car.brand << endl;
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Mileage: " << car.mileage << endl;
    cout << "Depreciation: " << depreciation << "%" << endl;
}

int main() {
    Car car;
    
    cout << "Enter the brand of the car: ";
    cin >> car.brand;
    cout << "Enter the model of the car: ";
    cin >> car.model;
    cout << "Enter the year of the car: ";
    cin >> car.year;
    cout << "Enter the mileage of the car: ";
    cin >> car.mileage;
    
    displayCarDetails(car);
    
   return 0; 
}