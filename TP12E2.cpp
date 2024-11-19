#include<iostream>
#include<vector>
using namespace std;
class ClaseBase
{
	protected:
		int unaVar = 0;
		ClaseBase(){
			cout<<"Ingresar edad: ";
			cin>>unaVar;	
		}
	public:	
		void unMetodo()
		{
			if(unaVar>=18){
				cout<<"Es mayor de edad. Edad: "<<unaVar<<endl;	
			}else{
				cout<<"No es mayor de edad. Edad: "<<unaVar<<endl;
			}
		}
};
class ClaseDerivada : public ClaseBase
{
	public:
		ClaseDerivada(): ClaseBase(){};
};
class ClaseVector{
	private:
		vector<int> n;
	public:
		ClaseVector(){
			int x;
			for(int i=0;i<5;i++){
				cout<<"Ingresar entero del vector: ";
				cin>>x;
				n.push_back(x);
			}
			cout<<endl;
		}
		void imprimir(); //imprime todo el vector
		void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
		void imprimir(int desde,int hasta);//imprime un rango de valores del vector.
};
void ClaseVector::imprimir(){
	for(int i=0;i<5;i++){
		cout<<n[i]<<endl;;
	}
}
void ClaseVector::imprimir(int hasta){
	for(int i=0;i<hasta;i++){
		cout<<n[i]<<endl;;
	}
}
void ClaseVector::imprimir(int desde, int hasta){
	for(int i=desde-1;i<hasta;i++){
		cout<<n[i]<<endl;;
	}
}



int main()
{
	int op,a,b;
	ClaseDerivada obj1; 
	obj1.unMetodo();
	ClaseVector vect1;
	cout<<"Que deseas hacer con el vector?\nImprimir completo: 1\nImprimir hasta cierto numero: 2\nImprimir dentro de cierto rango: 3\n";
	cin>>op;
	switch(op){
		case 1:
			vect1.imprimir();
			break;
		case 2:
			cout<<"Cuantos numeros quieres ver?\n";
			cin>>b;
			if(b<1 || b>5){
				cout<<"ERROR";
				return 1;
			}
			vect1.imprimir(b);
			break;
		case 3:
			cout<<"Indicar el rango a ver. Numero inicial:\n";
			cin>>a;
			cout<<"Numero final:\n";
			cin>>b;
			if((b<1 || b>5) || (a<1 || a>5) || ((b-a))<0){
				cout<<"ERROR";
				return 1;
			}
			vect1.imprimir(a,b);
			break;
		default:
			cout<<"ERROR";
			return 1;
			
	}	
	return 0;
}
