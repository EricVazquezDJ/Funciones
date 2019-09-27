#include <iostream>

using namespace std;

void pasoValor(int, int);
void pasoReferencia(int&, int&);
int factorial(int n){
	if (n==0){
		n=1;
	}else{
		n= n*factorial(n-1);
	}
	return n;
}


int main(){
	int num1, num2;
	int n;
	cout<<"Ingrese dos numeros: ";
	cin>>num1>>num2;
	cout<<endl;
	cout<<"\nSuma usando paso por valor: "<<endl;
	pasoValor(num1, num2);
	cout<<"\nSuma usando paso por referencia: "<<endl;
	pasoReferencia(num1, num2);

	cout<<"\n..::: Recursividad ::::.."<<endl;
    cout<<"Ingresa un numero: ";
    cin>>n;
	cout<<"El factorial de "<<n<<" es: "<<factorial(n)<<endl;
	
	return 0;
}

void pasoReferencia(int& Num1, int& Num2){
	cout<<"El numero 1 es: "<<Num1<<endl;
	cout<<"El numero 2 es: "<<Num2<<endl;
	
	cout<<"La suma de los numeros es: "<<Num1+Num2<<endl;
}

void pasoValor(int x, int y){
	cout<<"El numero 1 es: "<<x<<endl;
	cout<<"El numero 2 es: "<<y<<endl;
	
	cout<<"La suma de los numeros es: "<<x+y<<endl;
}


