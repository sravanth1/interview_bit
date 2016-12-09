#include <bits/stdc++.h>
using namespace std;

//input only circularly sorted array
int search(int *a,int n)
{
	int start=0;int end=n-1;
	int mid=start+end / 2;
	while(start<=end)
	{
		if(a[start]<=a[end])
			return start;
		int prev=(mid+n-1)%n;
		int next=(mid+1)%n;
		if(a[mid]<a[prev] && a[mid]<=a[next])
			return mid;
		else if(a[mid] <=a[end])
			end=mid-1;
		else if(a[mid] > a[start])
			start=mid+1;
	}
	return -1;
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
	search(a,n);
}