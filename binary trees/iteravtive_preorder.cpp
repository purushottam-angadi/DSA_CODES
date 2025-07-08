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


vector<int> preorder(Node* root)
{
    vector<int> ans;
    stack<Node*> st;
    st.push(root);
    while(!st.empty())
    {
        Node* temp= st.top();
        st.pop();
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
        ans.push_back(temp->data);
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


    vector<int> answer= preorder(root);
    for(auto i : answer)
    {
        cout<<i<<" ";
    }
}
