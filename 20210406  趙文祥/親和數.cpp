#include<iostream>
#include <string>
using namespace std;

int main(){
    int n, i, j, m, y, z,a,b,c,d;
    cin >> n;
    cin >> m;
    i = 1;
    j = 1;
    while( i <= n ){
        if( n%i == 0 ){
            y += i;
        }
        i = i+1;
        d =i-1;
    }
    while( j <= m ){
        if( m%j == 0 ){
            z += j;
        }
        j = j+1;
        c = j-1;
    }
    if(c == m&&d==n){
        cout << "親和數";    
    }
    else if(c == m&&d==n){
        cout << "親和數";
    }
    else{
        cout << "不為";
    }
    cout << endl;
    return 0;
}