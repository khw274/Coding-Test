def solution(num_list):
    sum1 = 0
    sum2 = 0
    for i in range(1, len(num_list),2):
        sum1 += num_list[i]
        
    for i in range(0, len(num_list),2):
        sum2 += num_list[i]
    return max(sum1, sum2)