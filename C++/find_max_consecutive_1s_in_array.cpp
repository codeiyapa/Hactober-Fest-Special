// find_max_consecutive_1s_in_array c++ code

// Q) Given a binary array, find the maximum number of consecutive 1s in this array.

// Example 1:
// Input: [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s.
//    The maximum number of consecutive 1s is 3.
// Note:

// The input array will only contain 0 and 1.
// The length of input array is a positive integer and will not exceed 10,000


#include<bits/stdc++.h>
using namespace std;

//function for computing maximum number of consecutive 1s
int findConsecutive1s(int a[], int l)
{
    // two counter variabes
    int count = 0, updatedCount=0;
    
    for(int i=0; i<l; i++)
    {
        // if a[i] is 0 then re-assigining count variable to 0
        if(a[i]==0)
        {
            count = 0;
        }
        // if a[i] == 1 then checking the greatest among count and updatedCount using max() pre-defined function and re-assigining the greater one to updatedCount variable
        else if(a[i]==1){
            ++count;
            updatedCount=max(updatedCount,count);
        }
    }
    return updatedCount;
}

int main()
{
    int arr[]={0,1,0,1,1,0,0,1,1,1,0,1};
    // finding the length of the array by dividing the total size of the array with the size of integer datatype
    int len=sizeof(arr)/sizeof(int);
    
    cout<<"The maximum number of consecutive 1s present in the array -> "<<findConsecutive1s(arr, len);

    return 0;
}