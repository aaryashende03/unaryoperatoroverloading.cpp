#include<iostream>
using namespace std;
#include <stdbool.h>
class Demo
{
	private:
	          int i , j;
			  
	public:
            Demo(int x =10 , int y = 20)
			{
              i=x;
              j=y;
			}

void Display()
{
cout<<"\t"<<j<<"\n";
}

friend Demo operator -(Demo op);
friend Demo operator +(Demo op);

};

Demo operator +(Demo op)
{
	return Demo( op.i , op.j);
	
}
Demo operator -(Demo op)
{
	return Demo(- op.i , -op.j);
	
}

int main()
{
	Demo obj(11, -21);
	Demo ret(0,0);
	
	ret=+ obj;
	ret.Display();
	
	ret=- obj;
	ret.Display();
	
	return 0;
}
	
	
	