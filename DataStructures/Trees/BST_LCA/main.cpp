/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * lca(node * root, int v1,int v2)
{
    int small = (v1 <= v2) ? v1 : v2;
    int large = (v2 >= v1) ? v2 : v1;
    node* curr_node = root;
    if (small < curr_node->data && large < curr_node->data) {
       return lca(root->left, small, large);
    }
    else if (small > curr_node->data && large > curr_node->data) {
       return lca(root->right, small, large);
    }
    return root;
}
