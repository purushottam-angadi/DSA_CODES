#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

void postorder(Node *root)
{
    vector<int> ans;
    stack<Node *> st1;
    stack<Node *> st2;
    st1.push(root);
    while (!st1.empty())
    {
        Node *node = st1.top();
       
        st1.pop();
         st2.push(node);
          if (node->left != NULL)
            st1.push(node->left);
        if (node->right != NULL)
            st1.push(node->right);
       
    }
   while(!st2.empty())
   {
      cout<<st2.top()->data<<" ";
      st2.pop();
   }
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right = new Node(3);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    postorder(root);

}
