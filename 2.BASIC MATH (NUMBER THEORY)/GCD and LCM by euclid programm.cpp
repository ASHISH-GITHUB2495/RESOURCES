#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long int
#define mod 10000007
#define for1(k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define max 100000


ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
	return  a  / gcd(a, b) * b ;
}


int main()
{

//////////////////////////////////////start...............
	ll a, b;
	cout << "Enter two number to find GCD as well as LCM\n";
	cin >> a >> b;
	cout << "a=" << a << " b=" << b << endl;

	cout << "GCD or HCF is: " << gcd(a, b) << endl;
	cout << "LCM is: " << lcm(a, b) << endl;


/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//printf("\nRun Time -> %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
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
