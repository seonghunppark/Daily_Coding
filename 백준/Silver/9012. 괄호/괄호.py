class Stack:
    def __init__(self):
        self.stack = [] #문자열을 스택에 할당

    def push(self, value):
        self.stack.append(value) #value 변수를 stack에 추가

    def is_empty(self):
        return len(self.stack) == 0 # True 또는 False 반환 
    
    def pop(self):
        # temp = self.stack[-1] #stack의 마지막 요소를 temp에 할당
        # del self.stack[-1] # stack의 마지막 요소 삭제
        # return temp #return은 함수를 호출한 곳으로 결과값을 보내주는 거 
        #             # print는 결과값을 보여주는 거
        if self.is_empty():
            print("스택이 비어있어 pop 할 항목이 없습니다.")
            return None
        
        else:
            return self.stack.pop() # 리스트의 내장 pop() 사용

    def peek(self):
        if self.is_empty(): # true면 
            return None # None을 반환
        else:
            return self.stack[-1] # False면 마지막 요소 반환

    def __str__(self):
        return str(self.stack) # 스택을 문자열로 반환

    def __len__(self):
        return len(self.stack) # 몇 개 인지 확인
    
def is_valid(quiz: str) -> bool: # 유효성 검사인 거 타입 알려주기
    stack = Stack()

    for p in quiz: #quiz에서 요소 하나하나를 p에 할당하고
        if p == "(": # quiz[n]번째가 (이면
            stack.push("(") # stack에 할당하고
        elif p == ")": # )라면
            if stack.is_empty(): #is_empty method를 실행해서 true라면
                # 닫는 괄호가 나왔는데 스택이 비어있으면 짝이 없음
                return False
            else:
                # 닫는 괄호가 나왔고 스택이 비어있지 않으면 짝이 맞는 것으로 보고 pop
                stack.pop() #stack의 마지막 요소를 삭제한다.
                
                
        else: # p가 (,) 둘 다 아닌 경우에는
            return False
        # 다른 문자가 들어올 경우 (문제에서는 (와 )만 있다고 가정) 처리 없음

    # 모든 문자를 순회한 후 스택이 비어있어야 모든 괄호 짝이 맞음
    return stack.is_empty()

T = int(input()) # 테스트 케이스의 수 입력

for _ in range(T):
    quiz = input() 
    if is_valid(quiz):
        print("YES")
    else:
        print("NO")