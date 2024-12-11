class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for item in s:
            if item in ['(', '[', '{']:
                stack.append(item)
            elif item == ')' and len(stack) and stack[-1] == '(':
                stack.pop(-1)
            elif item == ']' and len(stack) and stack[-1] == '[':
                stack.pop(-1)
            elif item == '}' and len(stack) and stack[-1] == '{':
                stack.pop(-1)
            else:
                return False
        if len(stack) == 0:
            return True
        return False
            
        
        