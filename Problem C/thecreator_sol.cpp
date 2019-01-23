#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("outp.txt","w",stdout);
  long  t;
  cin>>t;
  while(t--)
{
  long n,k,c=0;
  cin>>n>>k;
 long  a[n];
 for(long i=0;i<n;i++)
 {
    cin>>a[i];
 }
 bool f=false;
 for(long i=0;i<n-1;i++)
 {
    if(a[i]+a[i+1]>=k)
    {
        c+=(a[i]+a[i+1])/k;
        a[i+1]=(a[i]+a[i+1])%k;
    }
    else if(a[i]!=0)
    {
        a[i]=0;
        a[i+1]=0;
        c++;
    }
 }
 if(a[n-1]%k==0)
    c+=a[n-1]/k;
 else
    c+=(a[n-1]/k)+1;
  cout<<c<<endl;
  }
}
