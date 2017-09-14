#include <iostream>  
using namespace std;  

void swap(char *a, int *b){
    char aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void permuta(char *a, int i, int f){
    if(i==f){
        cout << a;
	cout << "\n";
    }else{
	for(int j = i; j<=f; j++){
            swap((a+i),(a+j));
            permuta(a, i+1, f);
            swap((a+i),(a+j));
        }
    }
}
	
	
void main()  
{  
    char permutame = "123";
    cout << sizef(permutame); 
}  
