#include<iostream>
using namespace std ; 
int main(){
    int a[1000][1000];
    int n,m ;
    cin >> n >>m ; 
    for ( int i = 0; i <n; i ++){
        for( int j = 0 ; j <m ; j++){
            cin >> a[i][j];
        }
    }
    int k, l ; 
    int max = 0 ; 
    for ( int i = 0 ; i < n ; i++){
        for ( int j = 0 ; j < m ; j++){
            if(a[i][j] > max){
                max = a[i][j];
                 k = i ;
                 l = j ;
            }
        }
    }
    cout << max << endl << k << " " << l ; 
    return 0 ; 
}