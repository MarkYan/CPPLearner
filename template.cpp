#include <iostream>

using namespace std;

template <class T>
class vector{
	T x, y, z;
	public:
	vector(){};
	vector(T a, T b, T c){x = a; y = b; z = c;};
	~vector(){};	
	void print(){
		cout << "vector : x = " << x << " y = " << y << " z = " << z << endl;
	};
};

template <typename T>
inline const T& maximum(const T& x,const T& y)
{
   if(y > x){
      return y;
   }
   else{
      return x;
   }
}
 
int main(void)
{
   int a=3,b=7;
   float x=3.0,y=7.0;
   //Calling template function
   std::cout << maximum<int>(a,b) << std::endl;         //输出 7
   std::cout << maximum(a, b) << std::endl;             //自动补充类型声明
   std::cout << maximum<double>(x,y) << std::endl;  //输出 7

   vector<int> c(1.0, 2.3, 4.9);
   vector<double> d(1.0, 2.3, 4.9);
   c.print();
   d.print();
   return 0;
}