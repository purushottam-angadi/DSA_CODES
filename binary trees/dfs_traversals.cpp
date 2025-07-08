//preorder:-

// #include<iostream>
// #include<vector>
// using namespace std;

// struct Node{
//    int data;
//    Node* left;
//    Node* right;

//    Node(int val)
//    {
//     data=val;
//     left=right=NULL;

//    }
// };

// void inorder(Node* root, vector<int> &arr)
// {
//    if(root==nullptr){
//     return;
//    }

//    arr.push_back(root->data);
//    inorder(root->left,arr);
//    inorder(root->right,arr);

// }

// vector<int> inorder(Node* root)
// {
//     vector<int> arr;
//     inorder(root,arr);
//     return arr;
// }

// int main()
// {
//   Node* root= new Node(1);
//  root->left= new Node(2);
//  root->left->left= new Node(4);
//  root->left->right= new Node(5);
//  root->right= new Node(3);
//  root->right->left= new Node(6);
//  root->right->right= new Node(7);

//  vector<int> answer= inorder(root);
//  for(auto val:answer)
//  {
//     cout<<val<<" ";
//  }
// }










// post:-
// #include <iostream>
// #include <vector>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };

// void inorder(Node *root, vector<int> &arr)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     inorder(root->left, arr);
//     inorder(root->right, arr);

//     arr.push_back(root->data);
// }

// vector<int> postOrder(Node *root)
// {
//     vector<int> arr;
//     inorder(root, arr);
//     return arr;
// }

// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right = new Node(3);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<int> answer = postOrder(root);
//     for (auto val : answer)
//     {
//         cout << val << " ";
//     }
// }









//inorder:-

#include <iostream>
#include <vector>
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

void inorder(Node *root, vector<int> &arr)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left, arr);
      arr.push_back(root->data);
    inorder(root->right, arr);

  
}

vector<int> inOrder(Node *root)
{
    vector<int> arr;
    inorder(root, arr);
    return arr;
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

    vector<int> answer = inOrder(root);
    for (auto val : answer)
    {
        cout << val << " ";
    }
}