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


vector<int> inorder(Node* root)
{
    vector<int> ans;
    stack<Node*> st;
   Node* node=root;
   while(true)
   {
      if(node!=NULL)
      {
        st.push(node);
        node=node->left;
      }
      else{
        if(st.empty()) break;
        node=st.top();
        st.pop();
        ans.push_back(node->data);
        node=node->right;

      }
   }
   return ans;
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


    vector<int> answer= inorder(root);
    for(auto i : answer)
    {
        cout<<i<<" ";
    }
}
