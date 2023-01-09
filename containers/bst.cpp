#include<iostream>
using namespace std;

typedef struct BstNode{
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* createNode(int data){
	BstNode* newnode = new BstNode();
	newnode->data=data;
	newnode->left=newnode->right=NULL;
	return newnode;
}

BstNode* insert(BstNode* root, int data){
	if(root==NULL){
		root = createNode(data);
	}
	else if(data<=(root->data)){
		root->left = insert(root->left,data);
	}
	else
		root->right = insert(root->right,data);

	return root;

}

void dfs(BstNode* root){
	queue<int> q;
	

}

bool search(BstNode* root,int data){

	if(root==NULL){
		return false;
	}
	else if(root->data == data){
		return true;
	}
	else if(root->data < data){
		return search(root->right,data);
	}
	else 
		return search(root->left,data);

}

int max(BstNode* root){

	BstNode* cn=root;
	if(root==NULL)
			return 0;
	while(cn->right!=NULL){
		cn=cn->right;
	}
	return cn->data;

}
int min(BstNode* root){
	BstNode* cn=root;
	if(root==NULL)
		return 0;
	while(cn->left!=NULL){
		cn=cn->left;
	}
	return cn->data;
	}


int height(BstNode *root){

	if(root==NULL){
		return -1;
	}
	return max(height(root->left),height(root->right))+1;
}

int main(){

	BstNode* root =NULL;
	root=insert(root,15);
	root=insert(root,11);
	root=insert(root,16);
	root=insert(root,14);
	root=insert(root,17);
	root=insert(root,10);
	root=insert(root,13);
	root=insert(root,12);
	root=insert(root,11);

	 cout << "MAX " << max(root) << "\n";
	cout << "MIN " << min(root) << "\n";
	if(search(root,10))
		cout << "FOUND" << "\n";
	else
		cout << "NOT FOUND" << "\n";
	cout << "Height " << height(root) << "\n";
	dfs(root);
	return 0;
}