//pointers are the special variable that store address of Other Variable

#include<iostream>

using namespace std;

int main()
{
    // int a=10;
    // int* ptr=&a; -> * is defrencing Operator = Value at address

    float a = 5.6f;
    float* ptr=&a;
    float** ptr1=&ptr;

    cout<<ptr<<endl;
    cout<<*(&a)<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr1<<endl;
}