#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    // constructor
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// function for build tree--->dfs(recursive way)
node *buildTree(node *root)
{
    cout << "enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for insert in left of" << data << endl;
    root->left = buildTree(root->left);
    cout << "enter data for inserting right of" << data << endl;
    root->right = buildTree(root->left);
    return root;
}

// function for build tree by level order (bfs)
//level by level se binary tree bnaaye  
void buildFromLevelorder(node *&root)
{
    int x;
    cout << "enter root element: ";
    cin >> x;
    int first, second;
    queue<node *> q;
    node *root = new node(x);
    q.push(root); // rrot ek pointer hai

    // build binary tree  -->level by level ban rha hai
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "ENter left child of " << temp->data << ": ";
        cin >> first; // left node value
        // left node(if -1 means no left child)
        if (first != -1)
        {
            temp->left = new node(first);
            q.push(temp->left);
        }
        // right node(if -1 means no right child)
        cout << "Enter right child of " << temp->data << " : ";
        cin >> second;
        if (second != -1)
        {
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}
int main()
{

    return 0;
}