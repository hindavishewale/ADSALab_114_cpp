#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high)
{
    int temp[40];
    int i=low,j=mid+1,k=0;//left and right
    while(i<=mid && j<=high)
    {
        if(a[i]>=a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }

    }

    while(i<=mid)
    {
     temp[k++]=a[i++];       
    }

    while(j<=high)
    {
            temp[k++]=a[j++];
    }

    for(int index=0;index<k;index++)
    {
        a[low+index]=temp[index];
    }
}

void mergesort(int a[],int low,int high)
{
        if(low<high)
        {
            int mid=(low +high)/2;
            mergesort(a,low,mid);
            mergesort(a,mid+1,high);
            merge(a,low,mid,high);
        }

}

int main()
{
    int a[40],n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter"<<n<<"elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);

    cout<<"sorted array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}