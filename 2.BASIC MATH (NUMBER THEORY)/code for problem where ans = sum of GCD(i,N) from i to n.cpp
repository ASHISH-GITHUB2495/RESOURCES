#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define rep(i,k,n) for(ll i=k;i<n;i++)
#define E cout<<endl
#define MAX  1000002
#define u_m  unordered_map        //hashing container

int phi[1000001];



int32_t main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............

	/* Here we gonna write the code for problem where ans = sum of GCD(i,N) from i to n

	     what we gonna do --

	        we will first create atmost 10^6 phi function using seive

	        then we will get the divisor count upto n  using loop efficiently*/
	///////


	for (int i = 0; i < 1000001; i++)
		phi[i] = i;


	for (int i = 2; i < 1000001; i++)
	{
		if (phi[i] == i)
		{
			for (int j = i; j < 1000001; j = j + i)
				phi[j] = phi[j] / i  , phi[j] = phi[j] * (i - 1) ;

		}

	}

// seive calculated


	ll q; //  now we have to count devisor and their count
	cin >> q;

	while (q--)
	{	ll n;
		cin >> n;

		ll res = 0;
		for (ll i = 1; i * i <= n; i++)
		{
			if (n % i == 0)
			{
				ll d1 = i , d2 = n / i;

				res = res + (d1 * phi[n / d1]);

				if (d1 != d2)
					res = res + (d2 * phi[n / d2]);
			}

		}




		cout << res << endl;



	}




















////////////////////////////////////////end-.........................

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+" / "  to comment whole block and vice versa for undo
//ctrl+" / " for commenting a line

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/
