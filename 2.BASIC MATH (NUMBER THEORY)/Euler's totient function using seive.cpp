#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000



ll ETFseive(ll n)
{
	int arr[n + 1];
	for1(0, n + 1)          // initializing the same index as element
	arr[i] = i;

	int prev = 1;
	for (int i = 2; i < n + 1; i++ )
	{
		if (i == arr[i])
		{
			for (int j = i; j <= n; j = j + i)
			{
				arr[j] = arr[j] / i;
				arr[j] = arr[j] * (i - 1);
			}
		}
		prev = 2;
	}

	return arr[n];

}








int main()
{

//////////////////////////////////////start...............

	cout << "Enter no. upto 10^6 inclusive\n";
	int n;
	cin >> n;

	cout << "count of co-prime by ETF seive : " << ETFseive(n) << endl;


/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
