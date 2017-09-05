#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main() {
    double x1,y1,x2,y2,result;
    cin >> x1 >> y1 >> x2 >> y2;
    result = sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));
    printf("%.4f\n", result);
    return 0;
}
