#include <iostream>
#include "Queue.h"
using namespace std;


int main() {
    Queue data;

    data.add("One");
    data.add("Two");
    data.add("Three");
    data.add("Four");
    data.add("Five");
    data.present();

    return 17;
}
