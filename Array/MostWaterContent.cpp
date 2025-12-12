#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int num=height.size();
    int i=0;
    int j=num-1;
    int max_vol=(j-i)*(min(height[i],height[j]));
    while(i<j)
    {
        int vol1=((j-1)-i)*(min(height[i],height[j-1]));
        int vol2=(j-(i+1))*(min(height[i+1],height[j]));
        if(vol1>vol2)
        {
            max_vol=max(vol1,max_vol);
            j--;
        }
        else{
            max_vol=max(vol2,max_vol);
            i++;
        }
    }
    cout<<"Maximum Volume of Water Contained By Container is : "<<max_vol<<endl;
    return 0;
}