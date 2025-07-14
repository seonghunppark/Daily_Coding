def solve():
    N, M = map(int, input().split())

    baskets = [] 
    for num in range(N):
        baskets.append(num + 1) 

    for _ in range(M): 
        i, j = map(int, input().split()) 
        
        
        
       
        sub_list = baskets[i-1:j]
        
        
        sub_list.reverse() 
        
        
        baskets[i-1:j] = sub_list

    print(*(baskets)) 

solve()