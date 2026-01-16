def solution(a, b):
    combined1 = str(a) + str(b)
    combined2 = str(b) + str(a)
    
    if int(combined1) > int(combined2):
        return int(combined1)        
    else:
        return int(combined2)