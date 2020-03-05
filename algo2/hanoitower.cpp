#include<iostream>

using namespace std ; 
    void ht( int n , char x1, char x2, char x3){
        if(n == 1 ){
            cout << x1 << "->" << x3 << endl ; 
            return ; 
        }
    }
    int main(){
        int n ; 
        char x1 = '1' ;
        char x2 = '2' ;
        char x3 = '3' ; 
        cin >> n ; 
        ht(n , x1, x3, x2) ;
        cout << x1 << "->" << x3 << endl ; 
        
        ht(n-1, x2, x1, x3) ; 
    
    return 0;     
    }