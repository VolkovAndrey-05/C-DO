#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *add_node(struct Node *root, int value){
	if (root == NULL) {
		root = (struct Node*)malloc(sizeof(struct Node));
		root->data = value;
		root->left = NULL;
		root->right = NULL;
}
	if (value < root->data) root->left = add_node(root->left, value);
	else if (value > root->data) root->right = add_node(root->right, value);
	return root;
}

void print_tree(struct Node *root){
	if(root==NULL) return;
	print_tree(root->left);
	printf("%d\n", root->data);
	print_tree(root->right);
}

int main(){
	int arr[] = {1, 2, 3, 4, 9, 6};
	struct Node *tree = NULL;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i<size; i++){
		tree = add_node(tree, arr[i]);
}
	print_tree(tree);
	return 0;
}
