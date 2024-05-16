/****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****\
 |  Problems! Problems! Problems! I Don't Like It, I Avoid.             |
 |  But Problems Likes Me! I can't Avoid!                               |
 |                                                                      |
 |  * A.H.M. Fahim Morshed  *                                           |
 |  Github   - ahm-fahim                                                |
 |  Linkedin - https://www.linkedin.com/in/md-fahim-morshed-5b2126233/  |
 |  Gmail    - contactahmfahim@gmail.com                                |
\****~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~****/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define make_fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () { cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}


int fib(int n){
    dbg(n);
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    int res = fib(n - 1) + fib(n - 2);
    dbg(res);

    return res;
}

int main()
{
    make_fast();
    int n = 5;
    cout << fib(n);

    return 0;
}