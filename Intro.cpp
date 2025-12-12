//pointers are the special variable that store address of Other Variable

#include<iostream>

using namespace std;

int main()
{
    // int a=10;
    // int* ptr=&a;

    float a = 5.6f;
    float* ptr=&a;

    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;
}