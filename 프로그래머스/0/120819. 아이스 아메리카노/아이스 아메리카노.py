def solution(money):
    sum = money // 5500
    ads = money % 5500
    answer = [sum, ads]
    return answer