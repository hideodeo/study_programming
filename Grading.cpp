#include <iostream>
using namespace std;

int main() {

    while(1){
        int m,f,r;
        cin>>m>>f>>r;
        int sum=m+f;

        if (m==-1 && f==-1 && r==-1)
            return 0;
        if (m==-1 || f==-1)
            cout<<"F"<<endl;
        else if (sum>=80)
            cout<<"A"<<endl;
        else if (sum>=65)
            cout<<"B"<<endl;
        else if (sum>=50 || r >=50)
            cout<<"C"<<endl;
        else if (sum>=30)
            cout<<"D"<<endl;
        else if (sum<30)
            cout<<"F"<<endl;
    }
    return 0;
}
