// Description: Basic C++ syntax examples

#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Variables and Data Types
    string name = "John";
    int age = 25;
    double height = 1.75;
    bool isActive = true;

    cout << "Name: " << name << ", Age: " << age << ", Height: " << height << ", Active: " << isActive << endl;

    // 2. Input and Output
    string userName;
    cout << "Enter your name: ";
    cin >> userName;
    cout << "Hello, " << userName << "!" << endl;

    // 3. Conditional Statements
    int userAge;
    cout << "Enter your age: ";
    cin >> userAge;
    
    if (userAge >= 18) {
        cout << "You are an adult." << endl;
    } else if (userAge >= 16) {
        cout << "You can vote but not drive." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    // 4. Loops
    // While loop
    int counter = 0;
    while (counter < 5) {
        cout << "Counter: " << counter << endl;
        counter++;
    }

    // For loop
    for (int i = 0; i < 5; i++) {
        cout << "Number: " << i << endl;
    }

    // 5. Arrays and Structs
    string fruits[] = {"Apple", "Banana", "Orange"};
    cout << "Second fruit: " << fruits[1] << endl;

    struct Person {
        string name;
        int age;
        string city;
    };

    Person person1 = {"Alice", 30, "New York"};
    cout << "Person's name: " << person1.name << endl;

    // 6. Functions
    auto sum = [](int a, int b) { return a + b; };
    cout << "Sum: " << sum(3, 5) << endl;

    // 7. File Handling
    ofstream file("data.txt");
    file << "Hello, world!";
    file.close();

    ifstream inputFile("data.txt");
    string content;
    getline(inputFile, content);
    cout << "File content: " << content << endl;
    inputFile.close();

    // 8. Error Handling
    try {
        int x;
        cout << "Enter a number: ";
        cin >> x;
        if (x == 0) throw runtime_error("Cannot divide by zero");
        cout << "Result: " << 10 / x << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    
    return 0;
}
