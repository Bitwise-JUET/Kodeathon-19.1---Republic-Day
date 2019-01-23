#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;
int check(int a[], int i, int j);
int main() {
	int n, q, i, ans, temp, left, right, j, mid;
	scanf("%d", &n);
	int a[n+1];
	a[0]=0;
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++)
	{
		a[i]=a[i]+a[i-1];
	}
	scanf("%d", &q);
	while(q--)
	{
		scanf("%d", &j);
		left=0;
		right=n;
		while(left<=right)
		{
			mid=(left+right+1)/2;
			temp=check(a, mid, j);
			if(temp==0)
			{
				ans=mid;
				break;
			}
			else if(temp==1)
			{
				left=mid+1;
			}
			else if(temp==2)
			{
				right=mid-1;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
int check(int a[], int i, int j)
{
	if(a[i-1]<j && a[i]>=j)
	{
		return 0;
	}
	else if(a[i-1]<j && a[i]<j)
	{
		return 1;
	}
	else if(a[i-1]>=j)
	{
		return 2;
	}
}