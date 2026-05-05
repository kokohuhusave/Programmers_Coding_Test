def solution(array):
    counts = {}
    
    for num in array:
        if num in counts:
            counts[num] += 1
        else:
            counts[num] = 1
            
    max_count = max(counts.values())
    
    modes = []
    
    for num, count in counts.items():
        if count == max_count:
            modes.append(num)
    
    if len(modes) > 1:
        return -1
    else:
        return modes[0]