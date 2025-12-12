#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> num;
    cout<<num.size()<<endl;//0

    //To insert values in vector
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(4);

    cout<<num.size()<<" "<<num.capacity()<<endl;//4 4
    num.push_back(5);
    cout<<num.size()<<" "<<num.capacity()<<endl;//5 8
    //To remove element from vector
    num.pop_back();
    cout<<num.size()<<endl;
    for(int val:num)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    // num.pop_back(2); this won't work it only remove elementfrom last index
    
    //Another way to insert element
    num.emplace_back(6);
    for(int val:num)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //How to fetch specific element from vector
    cout<<num[2]<< " or "<<num.at(2)<<endl;

    //Differnt way to initiate vector
    //1.
    vector<int> vec1={1,2,3,4};
    cout<<"Element from vector 1"<<endl;
    for(int val:vec1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //2.
    vector<int> vec2(3,1);
    cout<<"Element from vector 2"<<endl;
    for(int val:vec2)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    //3.
    vector<int> vec3(vec1);
    cout<<"Element from vector 3"<<endl;
    for(int val:vec3)
    {
        cout<<val<<" ";
    }
    cout<<endl;  

    //iterators
    //1.
    cout<<*(vec3.begin())<<endl;//here we are using derefrencing operator to get the value
    //2.
    cout<<*(vec3.end())<<endl;//gives garbage value -> points to nth index of a vector 
    //Using Iterator for loops
    //Forward Loop
    vector<int>::iterator it;//we have intialize iterator having scope vector and right now not pointing anywhere
    cout<<"Running Loop using iterator ... "<<endl;
    for(it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //0r
     cout<<"Running Loop using auto keyword iterator ... "<<endl;
    for(auto it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //Backward Loop
    //for this we use reverse iterator
    vector<int>::reverse_iterator i;
    cout<<"Running Loop using iterator ... in reverse order "<<endl;
    for(i=vec1.rbegin();i!=vec1.rend();i++)
    {
        cout<<*(i)<<" ";
    }
    cout<<endl;




    //Erase
    //To Erase Single element
    // vec3.erase(vec3.begin());//removes 1
    // vec3.erase(vec3.begin()+2);//removes 3

    
    //To erase range of elemnt
    vec3.erase(vec3.begin(),vec3.begin()+2);//start included not end
    cout<<"Element from vector 3"<<endl;
    for(int val:vec3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    //insert
    vec3.insert(vec3.begin()+1,5);//{3,5,4}
    cout<<endl;
    cout<<"Element from vector 3"<<endl;
    for(int val:vec3)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}