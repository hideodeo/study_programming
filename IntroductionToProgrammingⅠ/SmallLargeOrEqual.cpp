#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    string sig;
    cin>>a>>b;

    if(a<b)
        sig=" < ";
    else if(b<a)
        sig=" > ";
    else if(a==b)
        sig=" == ";
    cout<<"a"<<sig<<"b"<<endl;
    return 0;
}
