def solution(number):
    sum = 0
    for ele in range(number):
        if ele % 3 == 0 or ele % 5 == 0:
            sum += ele
            
    return sum