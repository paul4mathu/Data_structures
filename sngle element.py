#quesion 4 
#each elements appears wice except for one 

def one_element(array):
    result =0
    for num in array:
       result ^=num
    return result

my_ints=[1,2,1,2,3,4,3,5,4]
single=one_element(my_ints)
print(f"The single elments is :{single}")