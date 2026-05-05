def solution(array):
    array.sort()
    
    center_index = len(array) // 2
    
    return array[center_index]