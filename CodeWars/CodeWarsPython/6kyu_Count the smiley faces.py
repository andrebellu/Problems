def count_smileys(arr):
    eyes = [':',';']
    nose = ['-','~']
    mouth = [')', 'D']
    
    c = 0
    
    
    for i, item in enumerate(arr):
        if len(item)==2:
            if item[0] in eyes and item[1] in mouth:
                c += 1     
        elif len(item)==3:
            if item[0] in eyes and item[1] in nose and item[2] in mouth:
                c += 1
            
    return c