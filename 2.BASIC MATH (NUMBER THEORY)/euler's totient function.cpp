#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000


ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;

	return gcd(b , a % b);

}


ll naiveApproach(ll n)
{
	ll count = 0;

	for (ll i = 1; i <= n; i++)
		if (gcd(i, n) == 1)
			count++;

	return count;

}

ll eulersTotientFunction(ll n)
{
	ll res = n;


	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			res = res / i;
			res = res * (i - 1);

			while (n % i == 0)
				n = n / i;




		}
	}

	if (n > 1)
	{	res = res / n; res = res * (n - 1);
	}
	return res;
}








int main()
{

	ios_base:: sync_with_stdio(false);
	cin.tie(0);
//////////////////////////////////////start...............


	int n;
	cin >> n;


	//Naive approach to find the co-prime upto n with n; Compelxity O(nlogn);-
	//cout << setprecision(10);
    cout << "count of co-prime by Navive approach : " << naiveApproach(n) << endl;
	//double time= (double)clock()  / CLOCKS_PER_SEC;
    // printf("\ntime taken by naive aproach-> %.10fs\n",time);
	cout << "count of co-prime by ETF approch : " << eulersTotientFunction(n) << endl;
    //6printf("Time taken by ETF -> %.10fs\n", ((double)clock()  / CLOCKS_PER_SEC) -time);



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
