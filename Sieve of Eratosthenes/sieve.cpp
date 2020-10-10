/*
INPUT - Line 1: Test Case
		Line 2: Upper limit of number
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define in(ar,n) for(int i=0; i<n; i++) cin >> ar[i];
#define out(ar,n) for(int i=0; i<n; i++) cout << ar[i];

void solve(int n)
{
	bool ar[n];
	memset(ar,true,sizeof(ar)); // set all true
	ar[0] = false;
	ar[1] = false;
	for (int i = 2; i*i <= n; ++i) // 2 --> root(n)
	{
		if (ar[i] == true)
		{
			for (int j = i*i; j <= n; j+=i) // make multiples of i as false
			{
				ar[j] = false;
			}
		}
	}
	for (int i = 0; i <= n; ++i) // print which are true
	{
		if(ar[i]) cout << i << " ";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
	return 0;
}