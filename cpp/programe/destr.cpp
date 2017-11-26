#include <iostream>
using namespace std;
class A {
 public:
  A() {
    cout << "AA constructing..." << '\n';
    val = new int;
  }
    int fun(){
    	cout<<"fun --gg ";
    	
	}
  ~A() {
    cout << " AA destructing..." << '\n';
    delete val;
  }

 private:
  int* val;
};
class B{
	public:
		B()
		{
			A op;
			
			cout<<"this is B constructor"<<'\n';
		}
		~B()
		{
			cout<<" this is B Desturc"<<'\n';
		}
		int fun()
		{cout<<" fun B"<<'\n';
		
		}
};
int f()
{


}
int main() {
  
  B obj;
  
  f();
  obj.fun();
  cout<<" yhtb ";
  
  
  return 0;
}
