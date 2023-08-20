#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this -> data =d;
        this -> left =NULL;
        this -> right =NULL;
    }
    };
    node* buildtree(node* root)
    {
        int data;
        cout<<"enter the data :"<<endl;
        cin>>data;
        root=new node(data);
        if(data == -1)
        {
            return NULL;
        }
        cout<<"enter the data for inserting in left of "<<endl;
        root ->left=buildtree(root->left);
        cout<<"enter the data for inserting right "<<endl;
        root ->right=buildtree(root->right);
        return root;
    }
    int main()
    {
        node* root=NULL;
        //creating a tree
        root=buildtree(root);
        return 0;
    }
    


