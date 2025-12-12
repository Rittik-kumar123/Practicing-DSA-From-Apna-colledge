//pointers are the special variable that store address of Other Variable

#include<iostream>

using namespace std;

void changeA(int &b)//->pointer Ke andar adress store kar rahe hai
{
    b=20;
}

int main()
{
   int a=10;
   changeA(a);//->adress pass kar arhe hai
   cout<<"Change in a : "<<a<<endl;
   return 0;
}