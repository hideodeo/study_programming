#include <iostream>
using namespace std;

int main() {
    int x=0, y=0;
    while(1){
        cin>>x>>y;
        if (x == 0 && y == 0) break;

        if (x > y)
            cout<<y<<" "<<x<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
    return 0;
}
