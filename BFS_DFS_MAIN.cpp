#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class TreeNode 
{
public:
    char val;
    vector<TreeNode*> child;
    int noc;
    bool flag;
    TreeNode(char val, int N) 
    {
        this->val = val;
        this->noc = N;
        this->flag = false;
        for (int i = 0; i < this->noc; i++) 
        {
            cout << "Enter Child " << (i + 1) << " of " << this->val << " : ";
            char c;
            cin >> c;
            cout << "Enter Number of child of " << c << " : ";
            int n;
            cin >> n;
            this->child.push_back(new TreeNode(c, n));
        }
    }
};
bool searchFlag;
void searchDFS(TreeNode* root, char key) {
    if (root != nullptr && searchFlag == false) {
        cout << root->val << "  ";
        if (root->val == key) {
            searchFlag = true;
            return;
        }
        for (int i = 0; i < root->noc; i++) {
            searchDFS(root->child[i], key);
        }
    }
}
// DFS Preorder
void DFS(TreeNode* root) {
    if (root != nullptr) {
        cout << root->val << "  ";
        for (int i = 0; i < root->noc; i++) {
            DFS(root->child[i]);
        }
    }
}
void BFS(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    root->flag = true;
    while (!q.empty()) {
        TreeNode* curr = q.front();
        q.pop();
        cout << curr->val << "  ";
        for (int i = 0; i < curr->noc; i++) {
            if (curr->child[i]->flag == false) {
                q.push(curr->child[i]);
                curr->child[i]->flag = true;
            }
        }
    }
} 

// BFS search
void searchBFS(TreeNode* root, char key) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* current = q.front();
        q.pop();
        if (current->flag == false) 
        {
            current->flag = true;
            cout << current->val << "  ";
            if (current->val == key) 
            {
                cout << endl;
                return;
            }
            for (int i = 0; i < current->noc; i++) {
                q.push(current->child[i]);
            }
        }
    }
    cout << endl << "Key not found!" << endl;
}

int main() {
    cout << "Enter Root Node: ";
    char rootVal;
    cin >> rootVal;
    cout << "Enter Total Number Of Childs of root: ";
    int N;
    cin >> N;
    TreeNode* root = new TreeNode(rootVal, N);
    cout << "\nDFS Preorder: \n";
    DFS(root);
    cout << endl;

    cout << "\nBFS Preorder: \n";
  //5 BFS(root);
    cout << endl;

    cout << "Enter destination: ";
    cin >> rootVal;
    cout << endl;

    cout << "Path for DFS : " << rootVal << ": ";
    searchDFS(root, rootVal);
    cout << endl;

    cout << "Path for BFS : " << rootVal << ": ";
    searchBFS(root, rootVal);
    cout << endl;
    
    return 0;
}
