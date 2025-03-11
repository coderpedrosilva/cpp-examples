// Description: Advanced C++ syntax examples

#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include <memory>
#include <chrono>
using namespace std;

mutex mtx; // Mutex for thread synchronization

// 1. Multithreading Example
void printMessage(string msg) {
    lock_guard<mutex> lock(mtx);
    cout << "Thread message: " << msg << endl;
}

void multithreadingExample() {
    thread t1(printMessage, "Hello from Thread 1");
    thread t2(printMessage, "Hello from Thread 2");
    t1.join();
    t2.join();
}

// 2. Async and Future Example
int asyncTask() {
    this_thread::sleep_for(chrono::seconds(2));
    return 42;
}

void asyncExample() {
    future<int> result = async(launch::async, asyncTask);
    cout << "Waiting for async task..." << endl;
    cout << "Async result: " << result.get() << endl;
}

// 3. Smart Pointers (Unique and Shared)
void smartPointerExample() {
    unique_ptr<int> uniquePtr = make_unique<int>(10);
    cout << "Unique Pointer Value: " << *uniquePtr << endl;
    
    shared_ptr<int> sharedPtr1 = make_shared<int>(20);
    shared_ptr<int> sharedPtr2 = sharedPtr1;
    cout << "Shared Pointer Value: " << *sharedPtr1 << ", Count: " << sharedPtr1.use_count() << endl;
}

// 4. Move Semantics and Rvalue References
class MoveExample {
public:
    int *data;
    MoveExample(int value) {
        data = new int(value);
        cout << "Constructor called" << endl;
    }
    MoveExample(MoveExample &&other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "Move constructor called" << endl;
    }
    ~MoveExample() {
        delete data;
        cout << "Destructor called" << endl;
    }
};

void moveExample() {
    MoveExample obj1(10);
    MoveExample obj2 = move(obj1);
}

// 5. Variadic Templates
template<typename... Args>
void printVariadic(Args... args) {
    (cout << ... << args) << endl;
}

void variadicTemplateExample() {
    printVariadic("C++ ", 17, " is powerful!\n");
}

// 6. CRTP (Curiously Recurring Template Pattern)
template <typename Derived>
class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

class DerivedClass : public Base<DerivedClass> {
public:
    void implementation() {
        cout << "CRTP Implementation" << endl;
    }
};

void crtpExample() {
    DerivedClass obj;
    obj.interface();
}

int main() {
    multithreadingExample();
    asyncExample();
    smartPointerExample();
    moveExample();
    variadicTemplateExample();
    crtpExample();
    return 0;
}
