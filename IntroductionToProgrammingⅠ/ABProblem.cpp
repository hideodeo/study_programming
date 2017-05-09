#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a,b, d=0,r=0;
    double f=0;
    cin>>a>>b;

    d= a/b;
    r= a%b;
    f= 1.0*a/b;

    cout<<d<<" "<<r<<" ";
    printf("%.8lf\n", f);
    return 0;
}
