from collections import deque

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def buildTree(preorder, inorder):
    if not preorder or not inorder:
        return None
    
    # The first element in preorder is the root
    root_val = preorder[0]
    root = TreeNode(root_val)
    
    # Find the index of the root in inorder list
    root_index_in_inorder = inorder.index(root_val)
    
    # Elements before the root_index_in_inorder are part of the left subtree
    # Elements after the root_index_in_inorder are part of the right subtree
    left_inorder = inorder[:root_index_in_inorder]
    right_inorder = inorder[root_index_in_inorder+1:]
    
    # Preorder for left subtree is the next len(left_inorder) elements after the root
    left_preorder = preorder[1:1+len(left_inorder)]
    # Preorder for right subtree is the remaining elements
    right_preorder = preorder[1+len(left_inorder):]
    
    # Recursively build the left and right subtrees
    root.left = buildTree(left_preorder, left_inorder)
    root.right = buildTree(right_preorder, right_inorder)
    
    return root

# Example usage:
n = int(input())
preorder = list(map(int, input().split(" ")))
inorder = list(map(int, input().split(" ")))


def printLevelOrder(root):
    if not root:
        print("null")
        return
    
    # Create a queue to hold nodes at each level, including None for missing children
    queue = deque([root])
    result = []

    while queue:
        current_node = queue.popleft()
        
        if current_node:
            result.append(str(current_node.val))
            queue.append(current_node.left)
            queue.append(current_node.right)
        else:
            result.append("null")
    
    # Remove trailing "null" entries
    while result and result[-1] == "null":
        result.pop()
    
    # Print the final result
    print(" ".join(result))


root = buildTree(preorder, inorder)

printLevelOrder(root)