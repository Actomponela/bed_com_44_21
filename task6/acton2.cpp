 // Listing 8.1 Demonstrates address-of operator
 // and addresses of local variables 
 #include <iostream>
  using namespace std;
 int main(){

 unsigned short shortVar=5;
 unsigned long longVar=65535;
 long sVar = -65535;

 cout <<"shortVar\t"  << shortVar;
 cout <<"\tAddress of shortVar";
 cout << &shortVar << endl;

 cout <<" longVar\t"<< longVar;
 cout <<"\tAddress of longVar";
 cout << &longVar << endl;

 cout << "sVar \t\t" << sVar;
 cout << "\tAddress of sVar:\t" ;
cout << &sVar << endl;
 return 0;
 }