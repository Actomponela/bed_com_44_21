#include<iostream>
#include "rectangelclass.h"
using namespace std;

float length;
float widith;
rectangel::rectangel(){
    length=0;
    widith=0;
}
void rectangel:: display(){
    cout<<"length: " <<length<<endl;
    cout<<"widith "<<widith<<endl;
}
void rectangel:: Setlength(float newlength){
    length=newlength;
}
void rectangel::Setwidith(float newwidith){
    widith=newwidith;
}
float rectangel::Getlength(){
    return length;
}
float rectangel::Getwidith(){
    return widith;
}
float rectangel::area()
{
    return length *widith;
}
 
