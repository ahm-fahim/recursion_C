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
#define make_fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define br '\n';

int fact(int n){
    if(n==0) // base condition
        return 1; 
    return fact(n - 1) * n;  

    /*
    !5 = 5*4*3*2*1 = 120
    */
}

void func(int n)
{
    //base condition
    if(n==0)
        return;
    func(n - 1); // call func() into func()
    //cout << n << br; // return
}

int main()
{
    make_fast();

    func(10); // recursive func into main func();

    cout<< fact(5)<< " ";
    return 0;
}