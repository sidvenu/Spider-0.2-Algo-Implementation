#include<iostream>
using namespace std;

int main()
{
    int a[10],n;
    cout<<"\nEnter size of array : ";
    cin>>n;
    cout<<"\nEnter the array : ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    //sorting the array implementing selection sort
    for(int i=0;i<n-1;i++)
    {   
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
                min = j;
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    //the sorted array
    cout<<"\n The Sorted array : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<"  ";
    return 0;
}