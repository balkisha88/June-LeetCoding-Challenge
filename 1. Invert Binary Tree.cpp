//ITERATIVE SOLUTION

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swap(TreeNode *front)
    {
        TreeNode* a=front->left,*b=front->right;
        front->left=b;
        front->right=a;
    }
    TreeNode* invertTree(TreeNode* root) {
        
        if (root==NULL)
            return NULL;
        
        queue<TreeNode*> q;
        
      
        q.push(root);
        while(!q.empty())
        {
            TreeNode *front=q.front();
            q.pop();
            swap(front);
            if(front->left) q.push(front->left);
            if(front->right) q.push(front->right); 
                
                
            
           
        }
        
        
        return root;
    }
};


//RECURSIVE SOLUTION

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
        
            if (root == NULL) {
            return root;
        }

        TreeNode* tempNode;
        invertTree(root->left);
        invertTree(root->right);

        tempNode = root->left;
        root->left = root->right;
        root->right = tempNode;
        return root;
    }
};
