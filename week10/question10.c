#include <stdio.h> 
#include <stdlib.h> 
#define MAX_Q_SIZE 500 
  
struct node 
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 

struct node** createQueue(int *, int *); 
void enQueue(struct node **, int *, struct node *); 
struct node *deQueue(struct node **, int *); 
  
void printLevelOrder(struct node* root) 
{ 
    int rear, front; 
    struct node **queue = createQueue(&front, &rear); 
    struct node *temp_node = root; 
  
    while (temp_node) 
    { 
        printf("%d ", temp_node->data); 
  
        if (temp_node->left) 
            enQueue(queue, &rear, temp_node->left); 
  
        if (temp_node->right) 
            enQueue(queue, &rear, temp_node->right); 
  
        temp_node = deQueue(queue, &front); 
    } 
} 
  
struct node** createQueue(int *front, int *rear) 
{ 
    struct node **queue = 
        (struct node **)malloc(sizeof(struct node*)*MAX_Q_SIZE); 
  
    *front = *rear = 0; 
    return queue; 
} 
  
void enQueue(struct node **queue, int *rear, struct node *new_node) 
{ 
    queue[*rear] = new_node; 
    (*rear)++; 
} 
  
struct node *deQueue(struct node **queue, int *front) 
{ 
    (*front)++; 
    return queue[*front - 1]; 
} 
  
struct node* newNode(int data) 
{ 
    struct node* node = (struct node*) 
                        malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL; 
  
    return(node); 
} 
  
int main() 
{ 
    struct Node *root=newNode(0);
	root->left=newNode(1);
	root->right=newNode(2);
	root->left->left=newNode(3);
	root->left->left->left=newNode(5);
	root->left->left->left->left=newNode(6);
	root->left->left->left->left->right=newNode(7);
	root->left->right=newNode(4);
	root->left->right->right=newNode(8);
	root->left->right->right->right=newNode(9);
	root->left->right->right->right->left=newNode(10);
	root->left->right->right->right->right=newNode(11);
	root->right->left=newNode(12);
	root->right->right=newNode(13);
	root->right->left->right=newNode(14);
	root->right->right->right=newNode(15);
	root->right->right->right->left=newNode(16);
	root->right->right->right->left->right=newNode(17);
	root->right->right->right->left->right->left=newNode(18);
	root->right->right->right->left->right->right=newNode(19);
  
    printf("Level Order traversal of binary tree is \n"); 
    printLevelOrder(root); 
  
    return 0; 
} 
