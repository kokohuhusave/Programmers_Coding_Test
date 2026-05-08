def solution(my_string, letter):
    answer = ''
    for char in my_string:
        if char != letter:
            answer += char
            
    return answer