#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"enter your array size >> ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
   
    cout<<"enter the array elements>> \n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
  
     cout<<"Array after reverse :\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}