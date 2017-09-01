#include <iostream>
using namespace std;

string upper(string s){
    string t = s;
    for(int i=0;i<t.size();i++){
        t[i]=toupper(t[i]);
    }
    return t;
}

int main() {

    int count=0;
    string w;
    string t;

    cin >> w;
    w = upper(w);
    while(true){
        cin >> t;
        if(t=="END_OF_TEXT")
            break;
        t = upper(t);

        if(w==t){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
