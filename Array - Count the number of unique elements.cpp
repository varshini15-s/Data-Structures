//Count the no of unique elements in an araay of n elements
#include<iostream>
using namespace std;
int count(int arr[],int n)
{
    int count=1;
    for(int i=1;i<n;i++)
    {
        int j=0;
        for(int j=0;j<1;j++)
        {
            if(arr[i]==arr[j])
                break;
        }
        if(i==j)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"The number of distinct element in the array are : "<<count(arr,n);
    return 0;
}
