#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <queue>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
#include <future>
#define FOR(m) for(int i=0;i<m;i++)
#define ll long long int
#define scl1(a)             scanf("%lld", &a)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define foritpnt for(auto it=datos->begin(); it != datos->end(); it++)
#define forit for(auto it=datos.begin(); it != datos.end(); it++)
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
#define fastcin std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int main(){
    fastcin


    int cases, n;
    cin>>cases;

    for (int i = 0; i < cases; ++i) {
        cin>>n;
        int altos = 0, bajos = 0;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin>>arr[j];

        }


        for (int k = 0; k < n-1; ++k) {
            if (arr[k+1] < arr[k]){
                bajos++;
            }
            if (arr[k+1] > arr[k]){
                altos++;
            }
            else continue;
        }

        cout<<"Case "<<i+1<<": "<<altos<<" "<<bajos<<"\n";
    }



    return 0;
}
