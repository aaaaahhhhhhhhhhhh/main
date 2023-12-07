#include <iostream>
#include <string>

using namespace std;

class Vehicule {
private:
    string wheels;
    string name;

public:

    Vehicule() {
        wheels = "";
        name = "";
    }


    Vehicule(string w, string n) {
        wheels = w;
        name = n;
    }


    void setWheels(string w) {
        wheels = w;
    }


    void setName(string n) {
        name = n;
    }


    string getWheels() {
        return wheels;
    }


    string getName() {
        return name;
    }
};
class CarAccessory {
public:
    virtual void install() = 0;
    virtual void getDescription() const = 0;
};
int main() {

    Vehicule vehicle1("Astro-CSX", "Octane");

    cout << "Vehicle 1 Wheels: " << vehicle1.getWheels() << endl;
    cout << "Vehicle 1 Name: " << vehicle1.getName() << endl;

    Vehicule vehicle2;
    vehicle2.setWheels("Custom-Wheels");
    vehicle2.setName("Speedster");

    cout << "Vehicle 2 Wheels: " << vehicle2.getWheels() << endl;
    cout << "Vehicle 2 Name: " << vehicle2.getName() << endl;

    return 0;
}