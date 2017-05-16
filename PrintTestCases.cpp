#include <iostream>
using namespace std;

int main() {
    int x=0, count=0;
    while(1){
        cin>>x;
        if (x == 0) break;
        count++;
        cout<<"Case "<<count<<": "<<x<<endl;
    }
    return 0;
}
