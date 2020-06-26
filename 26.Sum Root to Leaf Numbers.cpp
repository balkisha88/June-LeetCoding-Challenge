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
    int value(TreeNode* root,string num)
    {
        if(root==NULL)
            return 0;
        num+=to_string(root->val);
        //cout<<num<<" ";
        if(root->left==NULL && root->right==NULL )
        {
            int sum=stoi(num);
          //  cout<<"sum"<<sum<<":";
            return sum;
        }
        
        
        int left=value(root->left,num);
        int right=value(root->right,num);
        
        return left+right;
    }
    
    
    int sumNumbers(TreeNode* root) {
        
        string num="";
    
        
        if(root==NULL)
            return 0;
        int sum=value(root,num);   
       
        return sum;
     
        
        
    }
};
