#include<iostream>
using namespace std ; 
int main(){
    int n, m ; 
    cin >> n >> m; 
    int a[100][100]; 
    for ( int i = 0 ; i < n ; i ++){
        for ( int j = 0 ; j < m; j++){
            cin >> a[i][j];
        }
    }
    int k ; 
    int max = 0 ; 
    for ( int i = 0 ; i < n ; i++){ 
        int sum = 0 ;
        for ( int j = 0 ; j < m  ; j++){
            if(a[i][j]>max){
                max = a[i][j];
                k = i ; 
            }  
             //int max2 = 0 ; 
                //sum = sum + a[i][j] ; 
                //if(sum > max2){
               //     max2 = sum ; 
               // }
               // cout << sum ; 
            }
    }
    cout << k << " "  ; 
    return 0 ; 
}