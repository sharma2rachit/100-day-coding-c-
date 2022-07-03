// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    pair<long long, long long> p;
    
    long long res2=INT_MAX, res1=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(a[i]>res1) res1=a[i];
        if(a[i]<res2) res2=a[i];
    }
    p.first=res2;
    p.second=res1;
    
    return p;
}