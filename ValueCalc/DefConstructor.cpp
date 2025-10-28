#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Worker {
private:
    string name;
    int priceRs;
    string taskDescription;
    bool causesExplosion;

public:
    Worker(const string &name_, int price, const string &task, bool explosion)
        : name(name_), priceRs(price), taskDescription(task), causesExplosion(explosion) {}

    void printName() const {
        cout << "Name: " << name << endl;
    }

    void printPrice() const {
        cout << "Price: " << priceRs << " Rs." << endl;
    }

    void doTask() const {
        cout << "Task: " << taskDescription << endl;
    }

    void reportStatus() const {
        if (causesExplosion) {
            cout << "Status: Causes explosion" << endl;
        } else {
            cout << "Status: Peaceful" << endl;
        }
    }
};

int main() {
    Worker sayan("Sayan", 10, "Encourages people to gather at Mani square.", false);
    sayan.printName();
    sayan.printPrice();
    sayan.doTask();
    sayan.reportStatus();

    cout << endl;

    Worker kasif("Kasif", 5001, "Eats frequently.", true);
    kasif.printName();
    kasif.printPrice();
    kasif.doTask();
    kasif.reportStatus();

    return 0;
}
