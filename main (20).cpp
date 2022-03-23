#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string data;
    Node* left;
    Node* right;
    Node(string _data);
};

Node::Node(string _data)
{
    data = _data;
    left = NULL;
    right = NULL;
}

class BinaryTree
{
    public:
    void display(Node* root);
    
};


void BinaryTree::display(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<"-> ";
    display(root->left);
    display(root->right);
}

int main()
{
    Node* root;
     root = new Node("SE");
     Node* left = new Node("Presenhams");
     root->left = left;
     Node* right = new Node("Specifiaction");
     root->right = right;
    Node* left1 = new Node("Introduction to SE");
     left->left = left1;
     Node* right1 = new Node("Required management");
     right->right = right1;
    
     BinaryTree obj;
     obj.display(root);
   



    return 0;
}
