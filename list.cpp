#include<list>
#include<iostream>

using namespace std;

void print_list(list<int> &a){
	list<int>::iterator iter;
	for(iter = a.begin(); iter != a.end(); iter++){
		cout << *iter << " ";
	}
	cout << endl;
}

int main(){
	list<int> a(5, 4); // 5 integer	with value 4
	list<int> b(a); // copy of a
	list<int> c(a.begin(), a.end()); // iterating through a
	
	print_list(a);
	print_list(b);
	print_list(c);
	list<int*>::iterator it;
	
	return 0;
}