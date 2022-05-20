//C++ Data Types

#include <iostream> 
using namespace std; 

int main()
{
//size of int data types
    cout <<"Size of int: "<< sizeof(int) <<endl; //using inbuild funct sizeof()
    cout <<"Size of long int: "<< sizeof(long) <<endl;
    cout <<"Size of short int"<< sizeof(short) <<endl;
    cout <<"Size of unsigned int"<< sizeof(unsigned) <<endl;
    cout <<"Size of signed int"<< sizeof(signed) <<endl;

//giving value
    cout <<"Size of directly int"<< sizeof(89) <<endl;

    int a = 80;
    cout <<"Size of after defining int"<< sizeof(a) <<endl;

    float b = 6.8f;  //write f at end known as reference variaable
    cout<<sizeof(b)<<endl;

    cout <<"Size of float"<< sizeof(6.8f) <<endl;

    long double d=567.8l;
    cout<<sizeof(d)<<endl;

    cout <<"Size of long double"<< sizeof(567.81) <<endl;
    cout <<"Size of long double"<< sizeof(567.8) <<endl;

//size of float data type
    cout <<"Size of float: "<< sizeof(float) <<endl;
    cout <<"Size of double"<< sizeof(double) <<endl;
    cout <<"Size of long double: "<< sizeof(long double) <<endl;

//size of char data type
    cout <<"Size of char"<< sizeof(char) <<endl;
    cout <<"Size of unsigned char"<< sizeof(unsigned char) <<endl;
    return 0;
}
