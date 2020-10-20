#include<iostream>
using namespace std;
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
void swapit(int *a,int i,int j)
{
    cout<<"Swapping index "<<i<< " and index "<<j<<endl;
    swap(a[i],a[j]);
}
void sort012(int *a,int n)
{
    int i=0;
    int j=0;
    int k=n-1;
    while(i<=k)
    {
        if(a[i]==0)
        {
            swapit(a,i,j);
            i++;
            j++;
        }
        else if(a[i]==1)
        {
            i++;
        }
        else
        {
            swapit(a,i,k);
            k--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort012(a,n);
    print(a,n);
    return 0;
}
