def solution(todo_list, finished):
    answer = []
    
    for idx, todo in enumerate(finished):
        if todo == False:
            answer.append(todo_list[idx])
    return answer