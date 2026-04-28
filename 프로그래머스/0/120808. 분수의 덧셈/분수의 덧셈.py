import math

def solution(numer1, denom1, numer2, denom2):
    top = (numer1 * denom2) + (numer2 * denom1)
    bottom = denom1 * denom2
    
    gcd_value = math.gcd(top, bottom)

    answer = [top // gcd_value, bottom // gcd_value]
    
    return answer