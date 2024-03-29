#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;
typedef long double ld;
 
const ll mod = 1e9+7;
const ll mod1 = 998244353;
 
#define fill(a)  memset(a, 0, sizeof(a))
#define fst first
#define snd second
#define mp make_pair
#define pb push_back
 
void fastscan(ll &number)
{
	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c=='-') 
	{
		negative = true;
		c = getchar();
	}
	for (; (c>47 && c<58); c=getchar())
		number = number *10 + c - 48;
	if (negative)
		number *= -1;
}
 
bool isprime(ll n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
 
bool checkisTree(ll degree[],ll n) 
{
    ll deg_sum = 0; 
    for (ll i = 0; i < n; i++) 
        deg_sum += degree[i]; 
    return (2*(n-1) == deg_sum);
}
 
ll gcd(ll a, ll b) 
{
    
    if (b == 0)  return a;
    return gcd(b, a % b);
 
}
 
int main() 
{
	ll n,m;
	cin>>n>>m;
	ll arr[n];
	map <ll,ll> mp1;
	ll max1=0;
	ll val=0;
	for(ll i=0; i<n; i++) 
	{
		cin>>arr[i];
		if(mp1.find(arr[i])==mp1.end())
			mp1[arr[i]]=1;
		else
			mp1[arr[i]]++;
		if(i==0) 
		{
			cout<<arr[i]<<" "<<mp1[arr[i]]<<endl;
			val=arr[i];
			max1=mp1[arr[i]];
		}
		else 
		{
			if(max1==mp1[arr[i]] && arr[i]>val) 
				val=arr[i];
			else if(mp1[arr[i]]>max1) 
			{
				val=arr[i];
				max1=mp1[arr[i]];
			}
			cout<<val<<" "<<max1<<endl;
		}
	}
}
