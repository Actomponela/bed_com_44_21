#pragma once
using namespace std;


class rectangel
{

    private:
    
    float length;
    float widith;
    


public:
   rectangel();
       void display(); 
    
    void  Setlength(float newlength);
    void Setwidith(float newwidith);
    float Getlength();
    float Getwidith();
    float area();
    
    
    

};