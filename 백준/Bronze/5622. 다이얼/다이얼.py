letter = input()
total_time = 0

alphabet = ""
for i in range(26):
    alphabet += chr(ord('A') + i)

for char in letter:
    char_index = alphabet.index(char)
    
    
    for group in range(8):
        
        if group == 0:  
            if 0 <= char_index <= 2:
                total_time += 3
                break
        elif group == 1:  
            if 3 <= char_index <= 5:
                total_time += 4
                break
        elif group == 2: 
            if 6 <= char_index <= 8:
                total_time += 5
                break
        elif group == 3:  
            if 9 <= char_index <= 11:
                total_time += 6
                break
        elif group == 4:  
            if 12 <= char_index <= 14:
                total_time += 7
                break
        elif group == 5:  
            if 15 <= char_index <= 18:
                total_time += 8
                break
        elif group == 6:  
            if 19 <= char_index <= 21:
                total_time += 9
                break
        elif group == 7:  
            if 22 <= char_index <= 25:
                total_time += 10
                break

print(total_time)