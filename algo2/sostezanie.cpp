#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int a[100][100];
    int n, m  ; 
    cin >> n >> m ;
    for  ( int i = 0; i < n ; i++){
       for ( int j = 0 ; j < m ; j++){
           cin >> a[i][j];
       }
    }
    int max = 0; 
    int k ;
    for  ( int i = 0; i < n ; i++){
    int sum = 0 ;
       for ( int j = 0 ; j < m ; j++){
           sum = sum + a[i][j];
           if(sum > max){
               max = sum;
               k = i;
           }
       }    
    }
    cout << max << " " << k;   
    return 0 ; 
}