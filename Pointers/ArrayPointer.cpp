//pointers are the special variable that store address of Other Variable

#include<iostream>
#include<vector>

using namespace std;


int main()
{
   int arr[]={1,2,3,4,5};

    int a=10;
    // arr=&a; // This cant be done as array is contant pointer
    

//This Can be done
//    int a=10,b=20;
//    int* ptr=&a;
//    ptr=&b;
  
   return 0;
}