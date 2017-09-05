#include <iostream>
using namespace std;

int main(){
    string d;
    int m, h;
    while(true){
        cin >> d >> m;
        if(d=="-")
            break;
        for (int i=0;i<m;++i){
            cin >> h;
            d = d.substr(h) + d.substr(0, h);
        }
        cout << d << endl;
    }
    return 0;
}
