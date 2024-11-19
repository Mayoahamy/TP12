#include<iostream>
#include<vector>
using namespace std;
class punto{
	private:
		int x;
		int y;
	public:
		punto(){
			x=0;
			y=0;
			cout<<x<<endl<<y;
		}
		punto(int a, int b){
			x=a;
			y=b;
			cout<<x<<endl<<y;
		}
};
int main(){
	punto punto1;
	cout<<endl<<endl;
	punto punto2(3,4);
	return 0;
}
