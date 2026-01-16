def solution(my_string, is_suffix):
    answer = []
    
    list(my_string)
    
    for i in range(len(my_string)):
        answer.append(my_string[i:])
        
    if is_suffix in answer:
        return 1
    else:
        return 0
    