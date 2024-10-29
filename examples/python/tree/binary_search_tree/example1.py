from collections import deque  # Import deque for efficient queue operations

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None


class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, value):
        if self.root is None:
            self.root = Node(value)
        else:
            self._insert_recursive(current_node=self.root, value=value)

    def _insert_recursive(self, current_node: Node, value):
        if value < current_node.value:
            if current_node.left is None:
                current_node.left = Node(value=value)
            else:
                self._insert_recursive(current_node=current_node.left, value=value)

        elif value > current_node.value:
            if current_node.right is None:
                current_node.right = Node(value=value)
            else:
                self._insert_recursive(current_node=current_node.right, value=value)

    def in_order_traversal(self):
        return self._inorder_recursive(self.root, [])
    
    def _inorder_recursive(self, node, traversal):
        if node is not None:
            self._inorder_recursive(node.left, traversal)
            traversal.append(node.value)
            self._inorder_recursive(node.right, traversal)

        return traversal
    
    def level_order_traversal(self):
        """Perform a level-order traversal of the BST."""
        if not self.root:
            return []
        
        levels = []  # This will hold the values at each level
        queue = deque([self.root])  # Use a queue to manage the nodes at each level
        
        while queue:
            level_size = len(queue)  # Number of nodes at the current level
            current_level = []  # List to hold the values of the current level
            
            for _ in range(level_size):
                node = queue.popleft()  # Get the next node in the queue
                current_level.append(node.value)  # Add its value to the current level
                
                # Add the left and right children to the queue
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            
            levels.append(current_level)  # Append the current level to levels

        return levels


# Create a new binary search tree
bst = BinarySearchTree()

# Insert values into the BST
values = [10, 5, 15, 2, 7, 12, 17]
for v in values:
    bst.insert(v)

# Print level-order traversal of the BST
print("Level-order Traversal:")
for level in bst.level_order_traversal():
    print(level)
