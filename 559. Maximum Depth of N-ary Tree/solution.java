/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public int maxDepth(Node root) {
        int depth = 0;
        
        if(root == null){
            return depth;
        }
        
        depth = 1;
        for(Node node : root.children) {
            //track max height.
            depth = Math.max(depth, 1+maxDepth(node)); 
        }
        
        return depth;
        
    }
}
