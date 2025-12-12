#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> price = {7,1,5,3,6,4};
    int Global_min=price[0];
    int max_profit=0;
    int n=price.size();
    for(int i=1;i<n-1;i++)
    {
        max_profit=max(max_profit,price[i]-Global_min);
        if(price[i]<Global_min)
        {
            Global_min=price[i];
        }
    }
    cout<<"Maximum Profit That can be made by buying and selling a stock is : "<<max_profit<<endl;
    return 0;
}