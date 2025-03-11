// Description: Intermediate C++ syntax examples

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <functional>
using namespace std;

// 1. Using Vectors (Dynamic Arrays)
void vectorExample() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

// 2. Using Maps (Key-Value Pairs)
void mapExample() {
    map<string, int> ages;
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    cout << "Age of Bob: " << ages["Bob"] << endl;
}

// 3. Lambda Functions
void lambdaExample() {
    auto multiply = [](int a, int b) { return a * b; };
    cout << "Multiplication: " << multiply(4, 5) << endl;
}

// 4. Working with Files
void fileExample() {
    ofstream file("data.txt");
    file << "C++ Intermediate Example";
    file.close();

    ifstream inputFile("data.txt");
    string content;
    getline(inputFile, content);
    cout << "File Content: " << content << endl;
    inputFile.close();
}

// 5. Class and Object Example
class Car {
public:
    string brand;
    int year;
    
    Car(string b, int y) {
        brand = b;
        year = y;
    }
    
    void display() {
        cout << "Car: " << brand << " (" << year << ")" << endl;
    }
};

// 6. Exception Handling Example
void exceptionExample() {
    try {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        if (x == 0) throw runtime_error("Cannot divide by zero");
        cout << "Result: " << 10 / x << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}

// 7. Function Pointers Example
void greet() {
    cout << "Hello from function pointer!" << endl;
}

void functionPointerExample() {
    void (*funcPtr)() = greet;
    funcPtr();
}

int main() {
    vectorExample();
    mapExample();
    lambdaExample();
    fileExample();
    
    Car car1("Toyota", 2020);
    car1.display();
    
    exceptionExample();
    functionPointerExample();
    
    return 0;
}
