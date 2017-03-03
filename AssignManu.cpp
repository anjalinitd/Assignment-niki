#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define M 1000000007

map<ll,ll> mp;

// function to calculate no. of strings such that there are no consecutive 0's
ll total_no_of_strings(ll n)
{
	
    // Base cases
    if (mp.count(n)) return mp[n];
	ll k=n/2;
	if (n%2==0) { // n=2*k
		return mp[n] = (total_no_of_strings(k)*total_no_of_strings(k) + total_no_of_strings(k-1)*total_no_of_strings(k-1)) % M;
	} else { // n=2*k+1
		return mp[n] = (total_no_of_strings(k)*total_no_of_strings(k+1) + total_no_of_strings(k-1)*total_no_of_strings(k)) % M;
	}

}

//Main Function
int main()
{
int t;

	cin>>t;
   
   mp[0]=mp[1]=1;
	while(t--)
	{
		ll n;
		cin>>n;

		
		cout<<total_no_of_strings(n+1)<<endl;//no. of strings such that there are no consecutive 0's
	}
	return 0;
}