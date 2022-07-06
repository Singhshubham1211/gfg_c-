#include <bits/stdc++.h>

using namespace std;

int maxOccurance(int l[],int r[],int n){
	int v[1000]={0};
	for (int i = 0; i < n; i++)
	{
		v[l[i]]++;
		v[r[i]+1]--;
	}
	int maxi=v[0],res=0;
	for (int i = 1; i < 1000; i++)
	{
		v[i]+=v[i-1];
		if (maxi<v[i])
		{
			maxi=v[i];
			res=i;
		}
	}
	return res;
}


int main()
{
	int l[]={1,2,5,15};
	int r[]={5,8,7,18};
	cout<<maxOccurance(l,r,4);
	return 0;
}