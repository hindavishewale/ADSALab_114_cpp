#include<iostream>
using namespace std;
int main()
{
    int a[30],n,cnt=0;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

   // for(int i=0;i<n;i++)
    //{
      //  if(a[i]==0)
        //{
         //   cnt+=1;
        //}
    //}

    int low=0,high=n-1,mid,firstzero=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==0)
        {
            firstzero=mid;
            cnt=n-firstzero;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}