#include <iostream>
using namespace std;


//min: return the min value of two numbers
template<class Type> Type minimum(Type a, Type b){
if(a < b)
return a;
  	return b;
}

template<class T> T swapValues(T &a, T &b) {
	int end = b;
	b = a;
	a = end;
	return a;
}

template<class Type> double average(Type a, Type b) {
	double end = (a + b) / 2;
	return end;
}

int main() { 
 cout << "Enter two values: ";
 int first, second;
 cin >> first >> second;
 cout << "Min: " << minimum(first, second) << endl;
 
 cout << "Enter two values: \n";
 double x, y;
 cin >> x >> y;
 swapValues(x, y);
 cout << "Swapped: \nFirst: " << x << "\nSecond: " << y << endl;
 
 cout << "Enter two values: ";
 double m, n;
 cin >> m >> n;
 cout << "Average: " << average(m, n) << endl;



 return 0;
};
