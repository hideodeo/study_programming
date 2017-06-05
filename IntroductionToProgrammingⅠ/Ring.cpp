#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin>>a>>b;
    a += a;
    bool flag = false;
    for (int i=0; i<a.size(); ++i){
        if (a[i] == b[0]){
            int count=0;
            for (int j=1; j<b.size(); ++j){
                if (a[i+j] == b[j]){
                    count++;
                }
            }
            if(count==b.size()-1){
                cout<<"Yes"<<endl;
                flag=true;
                break;
            }
        }
    }
    if(!flag)
        cout<<"No"<<endl;
    return 0;
}
