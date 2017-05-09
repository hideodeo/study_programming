#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    string st;
    cin>>a>>b>>c;

    if(a<b && b<c)
        st="Yes";
    else
        st="No";
    cout<<st<<endl;
    return 0;
}
