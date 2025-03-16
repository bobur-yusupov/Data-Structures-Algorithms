def preorder(root):
    result = []
    stack = [root]

    while stack:
        root = stack.pop()

        if root.right:
            stack.append(root.right)

        if root.left:
            stack.append(root.left)

        result.append(root.data)

    return result
