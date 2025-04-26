/*Desarrolla un programa en C++ que tome un entero impar n>=5 como entrada e 
imprima por consola el siguiente patrón utilizando el carácter asterisco ('*'). 
Las dimensiones del patrón deben estar basadas en el valor de n.*/

#include <iostream>
using namespace std;

int main(){
	int n;
    cout<<"Ingrese un numero impar mayor o igual a 5: ";
    cin>>n;
    cout<<endl;
    
    int mit=n/2;
    
    if(n<5 || n%2==0){
        cout<<"El numero debe ser impar y mayor o igual a 5."<<endl;
    }
    else{
    	for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) {
            	
                if(i==0 && (j==0 || j>=mit)){
                    cout<<"*";
                }
                else if(i==mit){
                    cout<<"*";
                }
                else if(i==n-1 && (j<=mit || j==n-1)){
                    cout<<"*";
                }
                else if(j==0 && i<=mit){
                    cout<<"*";
                }
                else if (j==mit){
                    cout<<"*";
                }
                else if(j==n-1 && i>=mit){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout << endl;
        }
	}
	
	return 0;
}  
