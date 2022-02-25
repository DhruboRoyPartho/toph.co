/*
OM-TAT-SAT

Author: Dhrubo Roy Partho
        Information and Communication Engineering,
        University of Rajshahi.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ft float
#define dl double

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,n[1000],m[1000],count=0;
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> n[i];
    }
    cin >> b;
    for(int i = 0;i < b;i++){
        cin >> m[i];
    }

    while(a--){
        for(int i = 0;i < b;i++){
            if(n[a] == m[i]){
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}