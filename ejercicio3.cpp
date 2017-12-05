#include <stdlib.h>
#include<stdio.h>
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
	int acuPosi =0, acuNega = 0, acuImpar =0, acuPar =0;
	srand((int) time(0)); // inicializar los números aleatorios 
	int m =0; 
	printf("ingrese numero: ");
	cin>>m;
	
	int matriz [m][m];
	for (int i =0; i<m; i++){
		for(int j =0; j<m; j++){
			matriz [i][j]= (rand() % 15) +-5; // aqui se rellena el arreglo con el metodo ramdon
		}
	}
	cout<<"\n\n";
	for (int i =0; i<m; i++){
		cout<<"\n";
		for(int j =0; j<m; j++){
			cout<< matriz [i][j];
			cout<<" ";			
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] <0 ){			
			acuNega++;
			 cout<<"\n", cout<<"los numeros negativos son: ";
			cout<< matriz[i][j];
			cout<<"\t";
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] >0 ){
			acuPosi++;
            cout<<"los numeros positivos son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2== 0 ){
			acuPar++;
			cout<<"los numeros pares son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			}
		}
	}
	cout<<"\n\n";
	for(int i =0; i<m; i++){
		for(int j =0;j<m; j++){
			if(matriz[i][j] %2!= 0 ){
			acuImpar++;
			cout<<"los  numeros impares son: ";
			cout<< matriz[i][j];
			cout<<"\n";
			}
		}
	}
	cout<<"\n\t";
	cout<<"la cantidad de numeros negativos son: ";
	cout<<"\n\t";
	cout<< acuNega;
	cout<<"\n\t";
	cout<<"la cantidad de numeros positivos son: ";
	cout<<"\n\t";
	cout<< acuPosi;	
	cout<<"\n\t";
	cout<<"La cantidad de numeros pares:";
	cout<< "\n\t";
	cout<< acuPar;
	cout<< "\n\t";
	cout<< "La cantidad de numeros impares: ";
	cout<< "\n\t";
	cout<< acuImpar;
}
	
		
		
		
		

