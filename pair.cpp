// make_pair example
#include <utility>      // std::pair
#include <iostream>     // std::cout

using namespace std;

int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (9,20);
  bar = std::make_pair (9,20); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  if(foo > bar){
	  cout << "foo > bar\n";
  }else if(foo < bar){
	  cout << "foo < bar\n";
  }else{
	  cout << "foo = bar\n";
  }
	
  return 0;
}