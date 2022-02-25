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
    int n,num1,num2,rem,m1=0,m2=0,a,b;
    cin >> n;
    while(n--){
        cin >> num1 >> num2;
        a = num1;
        b = num2;
        while(num1 != 0){
            rem = num1%10;
            m1 = m1*10+rem;
            num1 /= 10;
        }
        while(num2 != 0){
            rem = num2%10;
            m2 = m2*10+rem;
            num2 /= 10;
        }
        if(m1 > m2) cout << a << " > " << b << endl;
        else if(m1 < m2) cout << a << " < " << b << endl;
        else cout << a << " = " << b << endl;
        m1=m2=0;
    }
    return 0;
}