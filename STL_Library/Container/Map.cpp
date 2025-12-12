#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<string,int> m;
    m["TV"]=50;
    m["Laptop"]=100;
    m["Headset"]=100;
    m["Handset"]=55;
    m["Desktop"]=60;

    //insert property
    m.insert({"Camera",10});

    //emplace property
    m.emplace("Watch",200);

    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    //erase property
    m.erase("Watch");//Erase value having key == watch
    cout<<"After Erasing We Get ... "<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    //count property
    cout<<"count .. "<<m.count("TV")<<endl;


    //Find Property
    if(m.find("TV")!=m.end())
    {
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n"<<endl;
    }
    return 0;
}