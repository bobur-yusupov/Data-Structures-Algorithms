class MyStack:

    def __init__(self):
        self.arr = []

    # Function to push an integer into the stack.
    def push(self, data) -> None:
        self.arr.append(data)

    # Function to remove an item from top of the stack.
    def pop(self):
        if not self.arr:
            return -1

        return self.arr.pop()

    def is_empty(self) -> bool:
        return len(self.arr) == 0
