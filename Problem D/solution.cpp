#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void)
{
    freopen("in.txt","r",stdin);
    ll t;
    cin>>t;
    while(t--)
    {
        ll i,j,k,n,m;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll sum=0;
        for(i=0;i<n;i++)
        {
            if((sum+a[i])>=m)
            {
                sum+=a[i];
                cout<<sum/m<<" ";
                sum=sum%m;
            }
            else
            {
            sum+=a[i];
            cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}

