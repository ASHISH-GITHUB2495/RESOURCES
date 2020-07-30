#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mp make_pair
#define mt make_tuple
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 50000
#define IOS ios_base:: sync_with_stdio(false);cin.tie(0);

//segmented Sieve Of Eratosthenes .......... finding prime between (1,n) in O(√n + s) time ;
vector <ll> primes;

void countPrimes(ll n)
{
	ll arr[n + 1];
	fill(arr, arr + n + 1, 1);

	for (ll i = 2; i * i < n ; i++)
	{
		if (arr[i] == 1)
		{

			for (ll j = i + i ; j < n; j = j + i)
				arr[j] = 0;


		}

	}

	for (ll i = 2; i < n; i++)
		if (arr[i] == 1)
		{
			primes.push_back(i);
			cout << i << endl;
		}

}





int main()
{

//////////////////////////////////////start...............
	ll n;
	cout << "Enter number upto which you have to find the prime numbers\n";
	cin >> n;
	ll limit = floor(sqrtl(n)) + 1;
	countPrimes(limit + 1);



	ll  low = limit ;
	ll high = limit * 2;

	while (low < n)
	{
		if (high >= n)
			high = n;

		ll arr[limit + 1];
		fill(arr, arr + limit + 1, 1);

		for (ll i = 0; i < primes.size(); i++)
		{
			ll lowlim = floor(low / primes[i]) * primes[i];
			if (lowlim < low)
				lowlim = lowlim + primes[i];

			for (ll j = primes[i] + primes[i]; j < high; j = j + primes[i])
				arr[j - low] = 0;



		}
		for (ll i = low; i < high; i++)
			if (arr[i - low] == 1)
			{
				cout << i << endl;
			}

		low = low + limit;
		high = high + limit;








	}







	// 1 means prime and 0 means not prime
	//memset(is_prime, 1, sizeof(is_prime));



/////////////////////////////end................................... ....

	return 0;

}

//c v a s selecting text or x for selecting cut
//ctrl+d after selecting text to select same type
//ctrl+shift+d for copy and paste the line below it
//ctrl+del to delete a text
//ctrl+left to jump left of line or vice versa
//ctrl+shift+"/"  to comment whole block and vice versa for undo
//ctrl+"/" for commenting a line
