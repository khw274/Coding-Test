def solution(n, slicer, num_list):
    a, b, c = slicer[0], slicer[1], slicer[2]
    if n == 1:
        # 0번 인덱스부터 b번 인덱스까지
        return num_list[:b+1]
    elif n == 2:
        # a번 인덱스부터 마지막 인덱스까지
        return num_list[a:]
    elif n == 3:
        # a번 인덱스부터 b번 인덱스까지
        return num_list[a:b+1]
    elif n == 4:
        # a번 인덱스부터 b번 인덱스까지 c 간격으로
        return num_list[a:b+1:c]
