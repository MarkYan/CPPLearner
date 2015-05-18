#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> a;
		a.push_back(1);
	int i;
		
	for(i = 0; i < 10; i++){
		vector<int> a;
		a.push_back(i);
	}
	
	for(i = 0; i < (int)a.size(); i++){
		cout << a[i];
	}
	
	return 0;
}