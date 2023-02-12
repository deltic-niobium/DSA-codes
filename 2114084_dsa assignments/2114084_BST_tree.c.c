#include <stdio.h>
#include <stdlib.h>
struct node {
  int key;
  struct node *left, *right;
};
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;return current;
}
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}
int main() {
  struct node *root = NULL;
  root = insert(root, 8);
  printf("\nthe new inserted node after insertion of 8 is:\n ");
  inorder(root);
  root = insert(root, 3);
  printf("\nthe new inserted node after insertion of 4 is:\n ");
  
  inorder(root);
 
  root = insert(root, 1);
  printf("\nthe new inserted node after insertion of 1 is:\n ");
  inorder(root);
  root = insert(root, 6);
  printf("\nthe new inserted nodeafter insertion of 6 is:\n ");
  inorder(root);
  root = insert(root, 7);
  printf("\nthe new inserted node after insertion of 7 is:\n ");
  inorder(root);
  root = insert(root, 10);
  printf("\nthe new inserted node after insertion of 10 is:\n ");
  inorder(root);
  root = insert(root, 14);
  printf("\nthe new inserted node  after insertion of 14 is:\n ");
  inorder(root);
  root = insert(root, 4);
printf("\nInorder traversal after insertion of 4:\n ");
  inorder(root);
printf("\nAfter deleting 10\n");
  root = deleteNode(root, 10);
  printf("\nInorder traversal:\n ");
  inorder(root);
}