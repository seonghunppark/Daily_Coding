from collections import deque

N = int(input())  # 카드 수 입력
cards = deque(range(1, N + 1))  # 1부터 N까지 카드 생성

while len(cards) > 1:
    cards.popleft()        # 제일 위 카드 버림
    cards.append(cards.popleft())  # 그 다음 카드를 맨 아래로 이동

print(cards[0])  # 마지막으로 남은 카드 출력