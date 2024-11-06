#include <iostream>
#include <ostream>
using namespace std;

template<class type>
class Queue {
    public:
        Queue(); //Constructs an empty queue
        //~Queue(); //Destructor to free up memory
        type isEmpty(); //Returns true if the stack is empty
        void add(type data); //Adds an item to the end of the queue
        void remove(); // Removes the item at the front of the queue
        type peek(type); // Returns the value in the front of the queue (without removing)
        //ostream &operator << (ostream &out, const Queue &s); //Overloads the extraction operator to display the queue
        void present();//My own little function to display the entirety of the data stored.
    private:
        //Hello!
        type thing[100000];
        int length;
};

template<class type>
Queue<type>::Queue() {
    length = 0;
}

template<class type>
type Queue<type>::isEmpty() {
    if (length > 0) {
        return false;
    } else {
        return true;
    }
}

template<class type>
void Queue<type>::add(type data) {
    length++;
    thing[length - 1] = data;
}

template<class type>
void Queue<type>::remove() {
    for (int i = 0; i < length; i++) {
        thing[i] = thing[i + 1];
    };
    length--;
}

template<class type>
type Queue<type>::peek(type useless) {
    return thing[0];
}

template<class type>
void Queue<type>::present() {
    cout << "(";
    for (int i = 0; i < length; i++) {
        cout << thing[i];
        if (i < length - 1) {
            cout << ", ";
        }
    }
    cout << ")" << endl;
}
