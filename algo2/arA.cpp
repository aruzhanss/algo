#include<iostream>
using namespace std; 
int main(){
    int a[100] ; 
    int n ;
    cin >> n ;
    for ( int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for ( int i = 0 ; i < n; i += 2){
        cout << a[i] << " " ;
    }

    return 0 ; 
}