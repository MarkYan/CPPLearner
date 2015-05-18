#include <map>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

#define MAXN 5

using namespace std;

class Tree{
	public:
		int node;
		Tree* left;
		Tree* right;
		bool isLeaf(){
			return (left == NULL && right == NULL);
		}
};

void recursive(int *a, int i){
	if(i == MAXN){
		return;
	}else{
		for(int j = 0; j < i; j++){
			cout << ' ';
		}
		cout << a[i] << '\n';
		recursive(a, i+1);
	}
}

Tree* build_tree(int a[], int num){
	if(num >= MAXN){
		return NULL;
	}
	
	Tree* now;
	now = new Tree;
	now->node = *a;
	now->left = build_tree(a + 1, num + 1);
	now->right = build_tree(a + 1, num + 1);
	return now;
}

void printTree_infix(Tree* tree){
	if(tree == NULL){
		return;
	}
	printTree_infix(tree->left);
	cout << tree->node << " ";
	printTree_infix(tree->right);
	return;
}

void printTree_prefix(fstream &t, Tree* tree){
	if(tree == NULL){
		return;
	}
	
	cout << tree->node << " ";
	printTree_prefix(t, tree->left);
	printTree_prefix(t, tree->right);
	return;
}

void printspace(fstream &t, int level){
	for(int i = 0; i < level; i++){
		t << " ";
	}
}

void pareTree(fstream &t, Tree* tree, int level){
	if(tree == NULL){
		return;
	}
	
	if(tree->isLeaf()){
		printspace(t, level);
		t << tree->node << "\n";
		return;
	}
	
	printspace(t, level);
	t << tree->node << "{\n";
	pareTree(t, tree->right, level + 1);
	pareTree(t, tree->left, level + 1);
	printspace(t, level);
	t << "}\n"; 
}

int main(){
/*	string l;
	double d;
	stringstream ss;
	cin >> l;
	ss << l;
	ss >> d;
	cout << d;
*/
	int a[MAXN]; int i;
	for(i = 0; i < MAXN; i++){
		a[i] = i;
	}
	//recursive(a, 0);
/*
	for(i = 0; i < MAXN; i++){
		for(int j = 0; j < i; j++){
			cout << " ";
		}
		cout << a[i] << "\n";
	}
*/
	fstream t;
	t.open("test.txt",ios::out);

	Tree* root = build_tree(a, 0);
	
	printTree_infix(root);
	cout << "\n";
	printTree_prefix(t, root);
	cout << "\n";
	pareTree(t, root, 0);

	return 0;
}