def solution(arr):
    idx = []
    
    for idx_, value_ in enumerate(arr):
        if value_ == 2:
            idx.append(idx_)
            
    if not idx:              
        return [-1]
    
    return arr[idx[0]:(idx[-1]+1)]
    