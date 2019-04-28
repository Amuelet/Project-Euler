#include<bits/stdc++.h>
using namespace std;

#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

ll func(ll n);
int isprime(ll n);
ll fact(ll n);

int main(){
	
	ll n;
	sld(n);
	
	pld(func(n));


	return 0;
}

ll func(ll n){
	
	if(isprime(n)) return n;
	
	ll i= 2 , f = 1;
	while(i <= n){
		if(n % i ==(ll) 0){
			
			ll t = func(n/i);
			
			
			
			if(isprime(t) && f < t)f =t;
			
			printf(" fact = %d ,prime = %d\n",i , f);
			
			
			
			break; 	
		}
		i++;
		
	}
		
	return f;
}

int isprime(ll n){
	return ((fact(n-1))%n ==(n-1)) ? 1 : 0;
}

ll fact(ll n){
	ll f= 1;
	if(n==1)return 1;
	f *= fact(n-1);
	
	return f;
}

