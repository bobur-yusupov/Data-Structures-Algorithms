from typing import Optional
from collections import deque

class TreeNode:
    def __init__(self, data):
        self.data = data
        self.left: Optional[TreeNode] = None
        self.right: Optional[TreeNode] = None

def inorderTraversal(root: Optional[TreeNode]):

    if root is None:
        return
    
    inorderTraversal(root.left)

    print(root.data, end=" ")

    inorderTraversal(root.right)

def preorderTraversal(root: Optional[TreeNode]):

    if root is None:
        return
    
    print(root.data, end=" ")

    preorderTraversal(root=root.left)

    preorderTraversal(root=root.right)

def postorderTraversal(root: Optional[TreeNode]):

    if root is None:
        return
    
    postorderTraversal(root=root.left)

    postorderTraversal(root=root.right)

    print(root.data, end=" ")

def levelOrderTraversal(root: Optional[TreeNode]):
    if not root:
        return
    
    queue = deque([root])

    while queue:
        node = queue.popleft()
        print(node.data, end=" ")

        if node.left:
            queue.append(node.left)

        if node.right:
            queue.append(node.right)

def isValidBst(root: Optional[TreeNode]):
    def helper(node: TreeNode, min_val, max_val):
        if not node:
            return True
        
        if not (min_val < node.data < max_val):
            return False
        
        return (helper(node.left, min_val, node.data) and helper(node.right, node.data, max_val))
    
    return helper(root, float('-inf'), float('inf'))


root = TreeNode(1)

root.left = TreeNode(2)
root.right = TreeNode(3)

root.left.left = TreeNode(4)
root.left.right = TreeNode(5)

root.right.left = TreeNode(6)
root.right.right = TreeNode(7)

root.left.left.left = TreeNode(8)
root.right.right.right = TreeNode(9)

inorderTraversal(root=root)
print("")

preorderTraversal(root=root)
print("")

postorderTraversal(root=root)
print("")

levelOrderTraversal(root=root)
print("")

print(isValidBst(root=root))