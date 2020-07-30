#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 100000
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 10000000
int pre[max + 1];

void buildPrimeFactorSeive()
{
	fill(pre, pre + max + 1, -1); //filling all in starting with -1
	pre[0] = 0;
	pre[1] = 1;
	for (int i = 2; i <= max; i++)
	{
		if (pre[i] == -1)
		{
			for (int j = i; j <= max; j = j + i)
			{
				if (pre[j] == -1)
					pre[j] = i;
			}
		}
	}




}

void factorPrint(int n)
{
	vector <int> vec;
	while (n != 1)
	{
		vec.pb(pre[n]);
		n = n / pre[n];

	}

	int same = vec[0];
	int count = 1;
	int i;
	for ( i = 1; i < vec.size(); i++)
	{
		if (same == vec[i])
			count++;
		else
		{	cout << same << "^" << count << " ";
			count = 1;
			same = vec[i];
		}
	}
	cout << same << "^" << count << " ";
}





int main()
{
cout<<"Enter your number to find the prime factorisation  (below 10^7)\n";
	int n;
	cin >> n;
	buildPrimeFactorSeive();
	factorPrint(n);


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

