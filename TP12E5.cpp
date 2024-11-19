#include<iostream>
#include<vector>
using namespace std;
class Person{
	protected:
		string name;
		int age;
	public:
		void setAtt(string nombre, int edad){
			name = nombre;
			age = edad;
		}
		string getName() { return name; }
		int getAge() { return age; }
};
class Empleado : public Person{
	private:
		int sueldo;
	public:
		void setSueldo(int a){
			sueldo = a;
		}
		int getSueldo() { return sueldo; }
};
int main(){
	Person person1;
	Empleado empleado1;
	string name;
	int sueldo, edad;
	cout<<"Ingresar nombre persona: ";
	cin>>name;
	cout<<"Ingresar edad persona: ";
	cin>>edad;
	cout<<endl;
	person1.setAtt(name,edad);
	cout<<"Ingresar nombre empleado: ";
	cin>>name;
	cout<<"Ingresar edad empleado: ";
	cin>>edad;
	cout<<"Ingresar sueldo empleado: ";
	cin>>sueldo;
	empleado1.setAtt(name,edad);
	empleado1.setSueldo(sueldo);
	cout<<"\nPersona:\n"<<person1.getName()<<endl<<person1.getAge()<<endl<<"\nEmpleado:\n"<<empleado1.getName()<<endl<<empleado1.getAge()<<endl<<empleado1.getSueldo();
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
