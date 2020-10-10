/*
INPUT - Line 1: Test case
		Line 2: Number of elements
		Line 3: Elements of array

COMPLEXITY - O(n^2) [when sorted array]
			 O(n*logn) [pivot comes out to be median]
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define in(ar,n) for(int i=0; i<n; i++) cin >> ar[i]
#define out(ar,n) for(int i=0; i<n; i++) cout << ar[i] << " "


int partition(int ar[], int p, int q)
{
	int left = p, right = q;
	int pivot = p; // first element as PIVOT

	while(left < right)
	{
		while(ar[left] <= ar[pivot]) left++; // find element => pivot by left++

		while(ar[right] > ar[pivot]) right--; // find element <= pivot using right--

		if(left < right) swap(ar[left], ar[right]); // left and right not crossed
	}
	swap(ar[right],ar[pivot]); // left and right crossed
	return pivot;
}

void quickSort(int ar[], int p, int q)
{
	if(p < q)
	{
		int pivotPos = partition(ar,p,q); // correct position of pivot
		quickSort(ar,p,pivotPos-1); // quicksort on left side of pivot
		quickSort(ar,pivotPos+1,q); //pivot on right side of pivot
	}
}

void solve()
{
	int n;
	cin >> n;
	int ar[n];
	in(ar,n);
	quickSort(ar,0,n-1);
	out(ar,n);
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