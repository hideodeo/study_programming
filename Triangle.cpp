#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    double a,b,c,s,l,h;
    cin >> a >> b >> c;
    double PI = acos(-1);
    c = PI * c/180;
    s = a * b * sin(c) * 1/2 ;
    l = a + b + sqrt( (a*a + b*b - 2*a*b*cos(c)) );
    h = b * sin(c);

    printf("%.5f\n", s);
    printf("%.5f\n", l);
    printf("%.5f\n", h);

    return 0;
}
