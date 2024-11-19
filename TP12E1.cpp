#include<iostream>
using namespace std;
class ClaseBase
{
	protected:
		int unaVar = 0;
	public:
		ClaseBase(int x):unaVar(x){}
		void unMetodo(void)
		{
			cout<<"unaVar = "<<unaVar<<endl;
		}
};
class ClaseDerivada : public ClaseBase
{
	public:
		ClaseDerivada(int x):ClaseBase(x){} /* Ejecución del constructor de la clase base para
		inicializar a unaVar */
};
int main()
{
	ClaseDerivada obj1(50); /* Aquí el constructor de la clase derivada invoca el
	constructor de la clase base */
	obj1.unMetodo();
	return 0;
}
/*El código funciona, porque al crear el objeto, el constructor de la clase derivada llama al constructor de la clase padre. Luego de esto, como el método unMetodo de la clase ClaseBase es public
 este puede ser accedido desde cualquier lado.
 El código muestra unaVar = 50 */