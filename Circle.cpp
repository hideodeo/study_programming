#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
    double r, area=0, circ=0;
    cin>>r;

    area= 1.0*r*r*M_PI;
    circ= 1.0*2*r*M_PI;
    printf("%f %f\n", area, circ);

    return 0;
}
