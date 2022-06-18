#include<stdio.h>
//Node Stucture
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a Node
struct Node* newNode(int data){
    // dinamically create a Node
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root -> data = data;
    root -> left = NULL;
    root ->right = NULL;

    return root;
}

// take input from user
struct Node* takeInput(){
    int rootData,ans;
    printf("Enter root data : ");
    scanf("%d", &rootData);
    struct Node* root = newNode(rootData);
    printf("Do %d have any child (enter 1 for Yes n 0 for No) : ", rootData);
    scanf("%d", &ans);

    if(ans == 1){
        root -> left = takeInput();
        root -> right = takeInput();
    }
    return root;
}

void preOrder(struct Node* temp){
    if(temp != NULL){
        printf("%d -> ",temp -> data);
        preOrder(temp -> left);
        preOrder(temp -> right);
    }
}
void inOrder(struct Node* temp){
    if(temp != NULL){
        inOrder(temp -> left);
        printf("%d -> ",temp -> data);
        inOrder(temp -> right);
    }
}


void postOrder(struct Node* temp){
    if(temp != NULL){
        postOrder(temp -> left);
        postOrder(temp -> right);
        printf("%d -> ",temp -> data);
    }
}

int main()
{
    struct Node* root = takeInput();
    printf("\nPreorder traversal : ");
    preOrder(root);
    printf("\nInorder traversal : ");
    inOrder(root);
    printf("\nPostorder traversal : ");
    postOrder(root);



    return 0;
}

// 8 1 3 1 4 0 9 0 5 1 7 0 2 0




