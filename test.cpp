/*
OM-TAT-SAT

Author: Dhrubo Roy Partho
        Information and Communication Engineering,
        University of Rajshahi.
*/

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

#define ll long long int
#define ft float
#define dl double
#define ch char
#define str string

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j,k,l;
    str num1,num2;
    cin >> n;
    while(n--){
        ch rev1[10500]={0},rev2[10500]={0};
        ll m1=0,m2=0;
        cin >> num1 >> num2;
        for(i=0;i<=num1[i];i++){}   // length calculating of num1
        for(j=0;j<=num2[j];j++){}   // length calculating of num2
        // cout << "i = " << i << "\n" << "j = " << j << endl;  //For debug
        l = i-1;
        for(k=0;k<i;k++){       //Reversing num1
            rev1[k] = num1[l];
            l--;
        }
        l = j-1;
        for(k=0;k<j;k++){       //Reversing num2
            rev2[k] = num2[l];
            l--;
        }
        // cout << rev1 << " " << rev2 << endl;   //For debug
        for(k=0;k<i;k++){
            m1 = m1*10+(rev1[k] - '0');
        }
        for(k=0;k<j;k++){
            m2 = m2*10+(rev2[k] - '0');
        }
        // cout << m1 << " " << m2 << endl;     //For debug
        if(m1 > m2) cout << num1 << " > " << num2 << endl;
        else if(m1 < m2) cout << num1 << " < " << num2 << endl;
        else cout << num1 << " = " << num2 << endl;
    }
    return 0;
}
