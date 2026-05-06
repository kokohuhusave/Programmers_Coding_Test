def solution(num_list):
    answer = []  
    num1 = 0     
    num2 = 0     
    
    for i in num_list:   
        if i % 2 == 0:   
            num1 += 1
        else:           
            num2 += 1
            
    answer.append(num1)
    answer.append(num2)
    
    return answer