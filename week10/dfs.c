struct xxx
{
	struct xxx *left;
	int i;
	struct xxx * right;
};
struct xxx *addEdge(int );
struct xxx *head=0;
main()
{
	head=addEdge(0);
	head->left=addEdge(1);
	head->left->left=addEdge(3);
	head->left->left->left=addEdge(5);
	head->left->left->left->left=addEdge(6);
	head->left->left->left->left->right=addEdge(7);

	head->left->right=addEdge(4);
	head->left->right->right=addEdge(8);
	head->left->right->right->right=addEdge(9);
	head->left->right->right->right->left=addEdge(10);
	head->left->right->right->right->right=addEdge(11);

	head->right=addEdge(2);
	head->right->left=addEdge(12);
	head->right->left->right=addEdge(13);
	head->right->left->right->left=addEdge(14);
	head->right->left->right->right=addEdge(15);
	head->right->left->right->right->left=addEdge(16);
	head->right->left->right->right->right=addEdge(17);
	head->right->left->right->right->right->left=addEdge(18);
	head->right->left->right->right->right->right=addEdge(19);
			
	printf("BREADTH FIRST SEARCH:	 ");
	bfs();	
	printf("\n");
}
struct xxx *addEdge(int i)
{
	struct xxx *p=malloc(sizeof(struct xxx));
	p->left=0;
	p->right=0;
	p->i=i;
	return p;
}
void display(struct xxx *p)
{
	if(p==0)
		return;
	else
	{
		printf("%c ",p->i+65);
		display(p->left);
		display(p->right);
	}
}
void bfs()
{
	struct xxx *que[30];
	struct xxx *p;
	int i=0,j=0;
	que[j]=head;
	while(i<=j)
	{
		p=que[i];
		i++;
		printf("%c ",p->i+65);
		
		if(p->left!=0)
		{
			j++;
			que[j]=p->left;
		}
		if(p->right!=0)
		{
			j++;
			que[j]=p->right;
		}
	}
}
