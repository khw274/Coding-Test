def solution(a, b):
    str1 = ''
    str1 = str(a)+str(b)
    
    if int(str1) > 2*a*b:
        return int(str1)
    else:
        return 2*a*b
