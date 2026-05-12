def solution(angle):
    if angle < 90:
        answer = 1
    elif angle == 90:    # else if 가 아니라 elif!
        answer = 2
    elif 90 < angle < 180:
        answer = 3
    else:                # 여기 콜론(:) 추가!
        answer = 4
    return answer