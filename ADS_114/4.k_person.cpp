
#include<iostream>
using namespace std;

class shop
{
    public:
        int start;
        int end;
};

void bubbleosrt(shop s[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j].end>s[j+1].end)
            {
                shop temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }

    }

}
void maxshop(int start[],int end[],int n,int k)
{
    shop s[n];
    for(int i=0;i<n;i++)
    {
        s[i].start=start[i];
        s[i].end=end[i];
    }
    bubbleosrt(s,n);
    int available[100];
    for(int i=0;i<k;i++)
    {
        available[i]=0;
    }

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int p=0;p<k;p++)
        {
            if(available[p]<=s[i].start)
            {
                available[p]=s[i].end;
                count++;
                break;
            }
        }

    }

     cout<<"Maximum shops visited: "<<count<<endl;

}
int main()
{
    int n,k;
    cout<<"Enter number of shops: ";
    cin>>n;
    cout<<"Enter number of people: ";
    cin>>k; 
    int start[n],end[n];
    cout<<"enter start time of "<<n<<" shops: ";
    for(int i=0;i<n;i++)
    {
        cin>>start[i];
    }
    cout<<"enter end time of "<<n<<" shops: ";
    for(int i=0;i<n;i++)
    {
        cin>>end[i];
    }
    maxshop(start,end,n,k);
    return 0;
}
