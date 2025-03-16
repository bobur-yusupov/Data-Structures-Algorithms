def isBalanced(s: str) -> bool:
    stack = [] # space: n

    closing = {
        ')': '(',
        ']': '[',
        '}': '{',
    }

    for char in s: # n interations
        if char in closing: # 1
            if not stack or closing[char] != stack.pop(): # 1
                return False # 1
        
        else: # 1
            stack.append(char) # 1

    return not stack

print(isBalanced('()[](}'))