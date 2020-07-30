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

//Sieve Of Eratosthenes (till root) 
//.......... finding prime between (1,n) in O(n log log (under root n)) time ;






int main()
{

//////////////////////////////////////start...............
	int n;
	cout << "Enter number upto which you have to find the prime numbers\n";
	cin >> n;

	int is_prime[n + 1] ; // 1 means prime and 0 means not prime
	//memset(is_prime, 1, sizeof(is_prime));
	fill(is_prime, is_prime + n + 1, 1);
	is_prime[0] = 0;
	is_prime[1] = 0;

	for (int i = 2; i <= n; i++)
	{
		if (is_prime[i] == 1)
		{
			for (int j = i + i; j <= n; j = j + i)
			{	is_prime[j] = 0;

			}
		}
	}
	cout << "The primes between 1 to " << n << "are :" << endl;
	for (int i = 0; i <= n; i++)
		if (is_prime[i] == 1)
			cout << i << endl;


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

