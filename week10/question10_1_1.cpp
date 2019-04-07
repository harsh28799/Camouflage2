#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char val;
	struct Node *left;
	struct Node *right;
	Node(char ch)
	{
		this->val=ch;
		this->left=NULL;
		this->right=NULL;
	}
};

void levelTraverse(struct Node *node)
{
	cout<<"reached";
	
	if(node==NULL)
		return;
	queue <Node *> q;
	q.push(node);
	while(q.empty()==false)
	{
		struct Node *nnode=q.front();
		cout<<node->val<<" ";
		q.pop();
		if(node->left!=NULL)
			q.push(nnode->left);
		if(node->right!=NULL)
			q.push(nnode->right);
	}
}

int main()
{
	cout<<"reached";
	

	struct Node *root=new Node('A');
	root->left=new Node('B');
	root->right=new Node('C');
	root->left->left=new Node('D');
cout<<"reached";
	root->left->left->left=new Node('F');
	root->left->left->left->left=new Node('G');
	root->left->left->left->left->right=new Node('H');
	root->left->right=new Node('E');
	root->left->right->right=new Node('I');
cout<<"reached";
	root->left->right->right->right=new Node('J');
	root->left->right->right->right->left=new Node('K');
	root->left->right->right->right->right=new Node('L');
	root->right->left=new Node('M');
	root->right->right=new Node('N');
cout<<"reached";
	root->right->left->right=new Node('O');
	root->right->right->right=new Node('P');
	root->right->right->right->left=new Node('Q');
	root->right->right->right->left->right=new Node('R');
	root->right->right->right->left->right->left=new Node('S');
	root->right->right->right->left->right->right=new Node('T');

	cout<<"reached";

	cout<<"BREADTH FIRST SEARCH:	";
	levelTraverse(root);
	cout<<endl;

	return 0;
}
