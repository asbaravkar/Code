/*
INPUT - Line 1: Test Case
		Line 2: Number of elements of array
		Line 3: Enter elemets space separated
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define in(ar,n) for(int i=0; i<n; i++) cin >> ar[i];
#define out(ar,n) for(int i=0; i<n; i++) cout << ar[i];

void solve()
{
	int n;
	cin >> n;
	int ar[n];
	in(ar,n);

	int XOR = 0;
	for (int i = 0; i < n; ++i)
	{
		XOR ^= ar[i];
	}

	cout << XOR;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}


