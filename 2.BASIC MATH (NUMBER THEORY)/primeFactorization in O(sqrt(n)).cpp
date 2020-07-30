#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 90000000



void primefactorizeation(ll n)
{

	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			ll count = 0;

			while (n % i == 0)
			{
				count++;
				n = n / i;


			}

			cout << i << "^" << count << " ";



		}




	}


	if (n > 1)         //that it is prime number
		cout << n << "^1" << endl;





}


int main()
{

//////////////////////////////////////start...............
	//two find primefactorizeation in O(sqrt(n))
    cout<<"Enter a number to find its prime factorization\n";
	ll n;
	cin >> n;

	primefactorizeation(n);





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

/*
when N <= 10, then both O(N!) and O(2N) are ok (for 2N probably N <= 20 is ok too)
when N <= 100, then O(N3) is ok (I guess that N4 is also ok, but never tried)
when N <= 1.000, then N2 is also ok
when N <= 1.000.000, then O(N) is fine (I guess that 10.000.000 is fine too, but I never tried in contest)
finally when N = 1.000.000.000 then O(N) is NOT ok, you have to find something better…*/

