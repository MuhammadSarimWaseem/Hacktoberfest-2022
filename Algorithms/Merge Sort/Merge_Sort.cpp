#include<bits/stdc++.h>
using namespace std;
void mergesort(int [],int ,int);
void merge(int [],int,int,int);
int main()
{
    int n;
    cout<<"Enter No. of Elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    {
         cout<<arr[i]<<" ";
    }
}
void mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=low;
    while(i<n1&&j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            i++;
        }
        else
        {
            arr[k]=b[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=a[i];
        k++,i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
        k++,j++;
    }
}