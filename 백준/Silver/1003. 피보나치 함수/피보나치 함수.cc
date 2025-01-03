#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        if(n == 0) {
            cout << "1 0\n";
        } else if(n == 1) {
            cout << "0 1\n";
        } else {
            int a = 0, b = 1, c;
            for(int i = 2; i <= n; i++) {
                c = a + b;
                a = b;
                b = c;
            }
            cout << a << " " << b << '\n';
        }
    }
    return 0;
}