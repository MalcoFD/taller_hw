/*Escribe un programa en C++ que tome un entero impar n>=3 como entrada e imprima por consola 
un patrón en forma de "Z" utilizando el carácter asterisco ('*'). La altura y el ancho del "Z" 
deben estar determinados por el valor de n.*/
 
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
    	for(int i=0; i<n; i++){
    		for(int j=0; j<n; j++){
    			if(i==0 || i==n-1 || j==n-1-i){
    				cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
    
    return 0;
}
