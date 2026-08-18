#include<bits/stdc++.h>
using namespace std;

/*
void pattern1(int n){
    for(int i=0 ; i < n ; i++){
        for(int j=0; j<=i ; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0; j < n-i ; j++){
            cout << "*";
        }
        cout << endl;
    }

}


int main () {
    int n;
    pattern1(4);
    pattern2(5);
}
*/
void pattern10 (int n){
for(int i=1; i<=2*n-1;i++) {
    int stars = i;
    if(i > n) stars = 2*n - i;
    for(int j =1 ; j<=stars;j++){
        cout << "*";
    }
    cout << endl;
}
}
int main() {
    int n;
    cin >> n;
    pattern10(n);
}