#include <iostream>
using namespace std;

int main() {
    double H,W;

    while(1){
        cin>>H>>W;
        if (H==0 && W==0)
            return 0;
        for (int i=0; i<H; i++){
            for (int j=0;j<W; j++){
                cout<<"#";
            }
            cout<<""<<endl;
        }
        cout<<""<<endl;
    }
    return 0;
}
