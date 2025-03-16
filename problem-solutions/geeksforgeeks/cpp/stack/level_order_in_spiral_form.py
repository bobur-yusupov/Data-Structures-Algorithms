def findSpiral(root):
    result = []
    right_to_left = [root]
    left_to_right = []

    while right_to_left or left_to_right:
        while right_to_left:
            node = right_to_left.pop()
            result.append(node.data)

            if node.right:
                left_to_right.append(node.right)
            if node.left:
                left_to_right.append(node.left)

        while left_to_right:
            node = left_to_right.pop()
            result.append(node.data)

            if node.left:
                right_to_left.append(node.left)
            if node.right:
                right_to_left.append(node.right)

    return result
