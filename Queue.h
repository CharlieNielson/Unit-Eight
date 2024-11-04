#include <iostream>
#include <ostream>
using namespace std;

class Queue {
    public:
        Queue(); //Constructs an empty queue
        ~Queue(); //Destructor to free up memory
        bool isEmpty(); //Returns true if the stack is empty
        void add(string data); //Adds an item to the end of the queue
        void remove(); // Removes the item at the front of the queue
        string peek(string); // Returns the value in the front of the queue (without removing)
        //ostream &operator << (ostream &out, const Queue &s); //Overloads the extraction operator to display the queue
        void present();//My own little function to display the entirety of the data stored.
    private:
        //Hello!
        string thing[0];
        int length;
};

Queue::Queue() {
    length = 0;
}

bool Queue::isEmpty() {
    if (length > 0) {
        return false;
    } else {
        return true;
    }
}

void Queue::add(string data) {
    thing[length] = data;
    length++;
}

void Queue::remove() {
    for (int i = 0; i < length; i++) {
        thing[i] = thing[i + 1];
    };
    length--;
}

string Queue::peek(string useless) {
    return thing[0];
}

void Queue::present() {
    cout << "(";
    for (int i = 0; i < length; i++) {
        cout << thing[i];
        if (i < length - 1) {
            cout << ", ";
        }
    }
    cout << ")" << endl;
}
