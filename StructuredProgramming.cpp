#include <iostream>
using namespace std;

void call(int n){
    int i = 1;

    while(++i <= n){
        int x = i;
        if (x % 3 == 0 || x % 10 == 3){
          cout << " " << i;
          continue;
        }
        x /= 10;
        while (x){
            if (x % 10 == 3){
              cout << " " << i;
              break;
            }
            x /= 10;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin>>n;
    call(n);
    return 0;
}
