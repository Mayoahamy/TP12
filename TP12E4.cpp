#include<iostream>
#include<vector>
using namespace std;
class Socio{
	private:
		string nombre;
		int antig;
	public:
		Socio(string name, int age_club){
			nombre=name;
			antig=age_club;
		}
		int get_antig(){
			return antig;
		}
		string get_name(){
			return nombre;
		}
};
class Club{
	private:
		Socio socio1;
		Socio socio2;
		Socio socio3;
	public:
		Club(Socio socio1, Socio socio2, Socio socio3) : socio1(socio1),socio2(socio2),socio3(socio3) {};
		void mas_antig(){
			int more_antig = socio1.get_antig();
			if(socio2.get_antig() > more_antig){
				more_antig = socio2.get_antig();
			}
			if(socio3.get_antig() > more_antig){
				more_antig = socio3.get_antig();
			}
			if(socio1.get_antig() == more_antig){
				cout<<"El socio "<<socio1.get_name()<<" es el mas antiguo";
			}
			else if(socio2.get_antig() == more_antig){
				cout<<"El socio "<<socio2.get_name()<<" es el mas antiguo";
			}
			else if(socio3.get_antig() == more_antig){
				cout<<"El socio "<<socio3.get_name()<<" es el mas antiguo";
			}
		}
};


int main(){
	string nombre;
	int antig;
	cout<<"Ingresar nombre socio 1: ";
	cin>>nombre;
	cout<<"Ingresar antiguedad socio 1: ";
	cin>>antig;
	Socio socio1(nombre, antig);
	cout<<"Ingresar nombre socio 2: ";
	cin>>nombre;
	cout<<"Ingresar antiguedad socio 2: ";
	cin>>antig;
	Socio socio2(nombre, antig);
	cout<<"Ingresar nombre socio 3: ";
	cin>>nombre;
	cout<<"Ingresar antiguedad socio 3: ";
	cin>>antig;
	Socio socio3(nombre, antig);
	Club club1(socio1,socio2,socio3);
	cout<<endl;
	club1.mas_antig();	
}
