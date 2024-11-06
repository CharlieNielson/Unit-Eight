#include <iostream>
#include "Queue.h"
using namespace std;


int main() {
    Queue<string> data;

    cout << data.isEmpty() << endl;
    data.add("One");
    data.add("Two");
    data.add("Three");
    data.add("Four");
    data.add("Five");
    data.present();
    data.remove();
    data.present();


    return 17;
}
