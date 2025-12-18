#include<iostream>
#include<vector>

using namespace std;

int maxColSum(vector<vector<int>> &arr , int row , int col)
{
    int maxSum=INT_MIN;
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum+=arr[j][i];
        }
        maxSum=max(maxSum,sum);
    }
    return maxSum;
}

// 1️⃣ Problem #1: This is NOT valid in standard C++
// int maxColSum(int arr[row][col], int row, int col)

// ❌ Why?

// row and col are variables

// Function parameters are compiled before runtime

// So the compiler does not know the size of arr

// 📌 Rule:
// In C++, array sizes in function parameters must be known at compile time.

// 2️⃣ Problem #2: You passed the array incorrectly
// maxColSum(arr[row][col], row, col);

// ❌ What this means

// arr[row][col] is:

// ONE integer (last element of array)

// ❌ NOT the array itself

// ✅ Correct way (conceptually)

// You pass:

// arr


// Not:

// arr[row][col]

// 3️⃣ Problem #3: Variable Length Arrays (VLA)
// int arr[row][col];

// ⚠️ Why this is risky

// VLAs are not part of standard C++

// GCC allows it, but:

// ❌ Not portable

// ❌ Interviewers dislike it

// 📌 Works in C, not in standard C++

// 4️⃣ Then why does array work sometimes in C++?
// ✔ This works:
// int arr[3][4];


// Because:

// Size is known at compile time

// ✔ Function parameter:
// int maxColSum(int arr[3][4])

// 5️⃣ Correct ways to use arrays in C++
// ✅ Option 1: Fixed-size array (rare in interviews)
// int maxColSum(int arr[][4], int row)

// ✅ Option 2: Pointer (low-level, interview friendly)
// int maxColSum(int (*arr)[col], int row, int col)


// ⚠️ Advanced, error-prone

// ✅ Option 3: vector (BEST & SAFE)
// vector<vector<int>>


// 📌 This is why everyone suggested vector.

int main()
{
    int row,col;
    cout<<"Enter The Value of row and col .. ";
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<"Enter The Value of 2D array .. "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Values of Your 2D array are as follows .. "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int ans=maxColSum(arr,row,col);
    cout<<"Maximum Sum Of columns element is .. "<<ans<<endl;
    return 0;
}