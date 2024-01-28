def right_rotation(array ,k):
    n=len(array)
    k=k % n 

    array_right= array[-k:] + array[:-k]

    return array_right

my_nums=[1,2,3,4,5,6]
steps=2

array_right=right_rotation(my_nums,steps)

print(f"Array rotated to the right:{array_right}")
