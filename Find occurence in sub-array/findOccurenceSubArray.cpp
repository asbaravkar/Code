/*
PROBLEM - You are given an array of integers of size n and a integer k. 
		  You are asked to answer Q queries.
		  Each query is represented by two numbers L and R and it asks you to compute 
		  how many numbers are there equal to k in subarray arr[L...R].

INPUT - Line 1: Test case
		Line 2: Length of array(N), Element(K)
		Line 3: Array elements
		Line 4: Number of queries(Q)
				Followed by Q number of queries
				Each query have left(L), right(R) index
OUTPUT - Number of elements equal to K in subarray from index L --> R

SAMPLE INP - 
			1
			5 2
			1 2 2 1 2
			3
			0 2
			1 2
			2 3

SAMPLE OP - 2
			2
			1
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define in(ar,n) for(int i=0; i<n; i++) cin >> ar[i]
#define out(ar,n) for(int i=0; i<n; i++) cout << ar[i] << " "

void solve()
{
	ll N,K,Q;
	cin >> N >> K;
	ll ar[N];
	in(ar,N);
	cin >> Q;

	ll preComputation[N];
	ll previous = 0;

	for (ll i = 0; i < N; ++i) // at particular index upto 'i' how many occurence
	{
		if(ar[i] == K)
		{
			preComputation[i] = previous + 1; // if equal to 'K' increment previous
			previous = preComputation[i];
		}
		else{
			preComputation[i] = previous; // if not found keep same as previous
		}	
	}

 // out(preComputation,N); // Uncomment to see preComputation

	while(Q--){
		ll L,R;
		cin >> L >> R;
		if(L > 0)
			cout << preComputation[R] - preComputation[L-1] << endl;
		else
			cout << preComputation[R] - preComputation[0] << endl;
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
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