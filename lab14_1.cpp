#include <iostream>
#include <string>
using namespace std;


int main(){
	int a =5;
	char b = 'A';
	char &c = b,*y = &b;
	int *x = &a,*z = x;     
		
	cout << "a = " << a << "\t\t &a = " << &a <<"\n";
	cout << "b = " << b << "\t\t &b = " << (int *)&b <<"\n";
	cout << "c = " << c << "\t\t &c = " << (int *)&c <<"\n";
	cout << "x = " << x << "\t &x = " << &x <<"\n";
	cout << "y = " << (int *)y << "\t &y = " << &y <<"\n";
	cout << "z = " << z << "\t &z = " << &z <<"\n\n";
	
	c = 'F';
	b = c;
	 cout << "a = "<< a <<"\n";
	 cout << "b = "<< b <<"\n";
	 cout << "c = "<< c <<"\n";
	 cout << "x = "<< x <<"\n";
	 cout << "y = "<< (int *)y <<"\n";
	 cout << "z = "<< z <<"\n\n";
	
	*y = 'W';
	 b = *y;
	 cout << "a = "<< a <<"\n";
	 cout << "b = "<< b <<"\n";
	 cout << "c = "<< c <<"\n";
	 cout << "x = "<< x <<"\n";
	 cout << "y = "<< (int *)y <<"\n";
	 cout << "z = "<< z <<"\n\n";
	
	 *x = 6;
	 a = *x;
	 cout << "a = "<< a <<"\n";
	 cout << "b = "<< b <<"\n";
	 cout << "c = "<< c <<"\n";
	 cout << "x = "<< x <<"\n";
	 cout << "y = "<< (int *)y <<"\n";
	 cout << "z = "<< z <<"\n\n"; 
	 
	 *z = 7;
	 a = *z;
	 cout << "a = "<< a <<"\n";
	 cout << "b = "<< b <<"\n";
	 cout << "c = "<< c <<"\n";
	 cout << "x = "<< x <<"\n";
	 cout << "y = "<< (int *)y <<"\n";
	 cout << "z = "<< z <<"\n\n";
	
	
	return 0;
}
