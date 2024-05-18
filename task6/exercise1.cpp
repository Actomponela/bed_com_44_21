#include <iostream>
using namespace std;

int main(){

    int* pPointer= nullptr;

    int integervar=5;

    pPointer = &integerVar;

    cout<< "integerVar:"<<integerVar<<endl;
    cout<<"adress of integerVar:"<<&integerVar<<endl;
    cout<< "pPointer:"<<pPointer<<endl;
    cout<<"Adress of the integerVar:"<<&pPointer<<endl;
    return 0;

}