/*Escribe un programa en C++ que tome un entero impar n>=3 
como entrada e imprima por consola un patrón triangular 
utilizando el carácter asterisco ('*'). */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese un numero impar mayor o igual a 3: ";
    cin>>n;
    cout<<endl;
    
    if(n<3 || n%2==0){
        cout<<"El numero debe ser impar y mayor o igual a 3."<<endl;
    }
    else{
	    for(int i=1; i<=n; i++){
	        cout<<"* ";
	    }
	    cout<<endl;
	
	    for(int i=1; i<n-1; i++){
	        for(int j=1; j<=i; j++){
	            cout<<" ";
	        }
	        cout<<"*";
	
	        for(int j=1; j<=(2*n-5)-2*(i-1); j++){
	            cout<<" ";
	        }
	        cout<<"*";
	
	        for(int j=1; j<=1+2*(i-1); j++){
	            cout<<" ";
	        }
	
	        cout<<"*\n";
	    }
	
	    for(int i=1; i<n; i++){
	        cout<<" ";
	    }
	
	    for(int i=1; i<=n; i++){
	        cout<<"* ";
	    }
	    cout << endl;
	}
    
    return 0;
}
