# Question 1removing duplicates from sorted array

def sorted_array(my_arr):
    result=set(my_arr)
    return result

the_arr=[1,2,3,4,3,4,1]
without_duplicates=sorted_array(the_arr)
print(without_duplicates)
print(len(without_duplicates))



#question 3 checking for duplicates 

def check_duplicate(array):
    without_dup=set(array)
    return len(without_dup)<len(array)

first_arr=[1,2,3,2,3,4,5]
second_arr=[1,2,3,4.5]

contain_dup=check_duplicate(first_arr)
print("first array")
print(f"contains duplicate:{contain_dup}")

contain_dup=check_duplicate(second_arr)
print("second array")
print(f"conatains duplicate:{contain_dup}")
