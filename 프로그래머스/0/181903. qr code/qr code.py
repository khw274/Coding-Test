def solution(q, r, code):
    answer = ''
    for idx, cde in enumerate(code):
        if idx % q == r:
            answer += cde
    return answer
        