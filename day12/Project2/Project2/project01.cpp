#include <iostream>
#include <string>
using namespace std;

class Product {
protected:
    string id;
    double price;
    string producer;

public:
    Product(string id, double price, string producer)
        : id(id), price(price), producer(producer) {}

    virtual void printDetails() = 0;
};

class Book : public Product {
private:
    string ISBN;
    string author;
    string title;

public:
    Book(string id, double price, string producer, string ISBN, string author, string title)
        : Product(id, price, producer), ISBN(ISBN), author(author), title(title) {}

    void printDetails() {
        cout << "Book Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Producer: " << producer << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
    }
};

class Handphone : public Product {
private:
    string model;
    int RAM;

public:
    Handphone(string id, double price, string producer, string model, int RAM)
        : Product(id, price, producer), model(model), RAM(RAM) {}

    void printDetails() {
        cout << "Handphone Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Producer: " << producer << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << RAM << endl;
    }
};

class Computer : public Product {
private:
    string model;
    string cpu;
    int RAM;

public:
    Computer(string id, double price, string producer, string model, string cpu, int RAM)
        : Product(id, price, producer), model(model), cpu(cpu), RAM(RAM) {}

    void printDetails() {
        cout << "Computer Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Producer: " << producer << endl;
        cout << "Model: " << model << endl;
        cout << "CPU: " << cpu << endl;
        cout << "RAM: " << RAM << "GB" << endl;
    }
};

void main() { // main �Լ��� void�� ����
    Product* products[100];
    int productCount = 0;

    while (true) {
        cout << "��ǰ���� ���α׷�" << endl;
        cout << "1. ��ǰ�߰� 2. ��ǰ��� 3. ��ǰ�˻� 0. ����" << endl;

        int choice;
        cin >> choice;

        if (choice == 0)
            break;
        else if (choice == 1) {
            int subChoice;
            cout << "1. å 2. �ڵ��� 3. ��ǻ��" << endl;
            cin >> subChoice;

            if (subChoice == 1) {
                string id, ISBN, author, title, producer;
                double price;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Price: ";
                cin >> price;
                cout << "Enter Producer: ";
                cin >> producer;
                cout << "Enter ISBN: ";
                cin >> ISBN;
                cout << "Enter Author: ";
                cin >> author;
                cout << "Enter Title: ";
                cin >> title;
                products[productCount] = new Book(id, price, producer, ISBN, author, title);
            }
            else if (subChoice == 2) {
                string id, model, producer;
                int RAM;
                double price;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Price: ";
                cin >> price;
                cout << "Enter Producer: ";
                cin >> producer;
                cout << "Enter Model: ";
                cin >> model;
                cout << "Enter RAM (in GB): ";
                cin >> RAM;
                products[productCount] = new Handphone(id, price, producer, model, RAM);
            }
            else if (subChoice == 3) {
                string id, model, cpu, producer;
                int RAM;
                double price;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Price: ";
                cin >> price;
                cout << "Enter Producer: ";
                cin >> producer;
                cout << "Enter Model: ";
                cin >> model;
                cout << "Enter CPU: ";
                cin >> cpu;
                cout << "Enter RAM (in GB): ";
                cin >> RAM;
                products[productCount] = new Computer(id, price, producer, model, cpu, RAM);
            }
            productCount++;
        }
        else if (choice == 2) {
            cout << "��ϵ� ��ǰ ���:" << endl;
            for (int i = 0; i < productCount; i++) {
                products[i]->printDetails();
                cout << endl;
            }
        }
        else {
            cout << "�߸��� �����Դϴ�. �ٽ� �����ϼ���." << endl;
        }
    }

    // �޸� ����
    for (int i = 0; i < productCount; i++) {
        delete products[i];
    }
}