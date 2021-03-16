/*
 reverse the array in cpp
 time complexity; O(n)
 space complexity : O(1)
*/
#include <iostream>
using namespace std;

void reverseArray(int arr[],int n){

    int start =0, end=n-1,temp;

    while(start<end)
    {
        temp = arr[start];
        arr[start]= arr[end];
        arr[end]=temp;
        start++;
        end--;
    } 
}


int main()
{
   int n;
   cout<<"Enter the number of elements need to store in array:";
   cin>>n;
   cout<<"please enter the numbers in space separated numbers:";
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   reverseArray(arr,n);
  
    for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;

  
}