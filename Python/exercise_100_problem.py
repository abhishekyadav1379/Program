# All code written by "ABHISHEK YADAV ;)"

# # 1. area of circle:
# r = float(input("Enter radius of circle : "))
# area = 3.14*r*r
# print(f"area : {area}")

# # 2. Write a Python program which accepts 
# #   the user's first and last name and print them in reverse order with a space between them.
# first_name = input("Enter first name : ")
# last_name = input("Enter last name : ")
# print(f"{last_name} {first_name}")

# # 3.Write a Python program which accepts a sequence of comma-separated numbers from 
# # user and generate a list and a tuple with those numbers.  
# # Sample data : 3, 5, 7, 23
# # Output :
# # List : ['3', ' 5', ' 7', ' 23']
# # Tuple : ('3', ' 5', ' 7', ' 23')
# values = input("Enter no's separted by comma : ")
# list = values.split(",")  
# tuple1 = tuple(list)
# print(list)
# print(tuple1)

# # 4. Write a Python program to display the first and last colors from the following list.  
# # color_list = ["Red","Green","White" ,"Black"]
# color_list = ["Red","Green","White" ,"Black"]
# print(f"{color_list[0]}\n{color_list[-1]}")

# # 5. Write a Python program to display the examination schedule. (extract the date from exam_st_date).  
# # exam_st_date = (11, 12, 2014)
# # Sample Output : The examination will start from : 11 / 12 / 2014
# exam_st_date = (20, 6, 2020)
# print(f"{exam_st_date[0]}/{exam_st_date[1]}/{exam_st_date[2]}")

# # 6. Write a Python program that accepts an integer (n) and computes the value of n+nn+nnn.  
# # Sample value of n is 5
# # Expected Result : 615
# n = int(input("Enter no. : "))
# soln = n + (n*10 + n)  + (n*100 + n*10 + n)
# print(f"result : {soln}")

# # 7. print  calender of given month and year:
# import calendar
# y = int(input("Input the year : "))
# m = int(input("Input the month : "))
# print(calendar.month(y, m))

# # 8. Write a Python program to print the following here document.  
# # Sample string :
# # a string that you "don't" have to escape
# # This
# # is a ....... multi-line
# # heredoc string --------> example
# string = ''' a string that you "don't" have to escape
# This 
# is a  .......multi -line 
# heredoc string ---------> examle'''
# print(string)

# # 9. compare date
# from datetime import date
# f_date = date(2014, 7, 2)
# l_date = date(2014, 7, 11)
# delta = l_date - f_date
# print(delta.days)

# # 10. Write a Python program to get a new string from a given string where "is" has been added to the front.
# #  If the given string already begins with "Is" then return the string unchanged.
# def new_string(a):
#     if a[:2]=="is":
#         print(f"{a}")
#     else:
#         print(f"is {a}")
# new_string("is my name")

# # 11. Write a Python program to find whether a given number (accept from the user)
# #  is even or odd, print out an appropriate message to the user.
# string = input("Enter a string : ")
# n = int(input("Enter no. how many times will it print : "))
# for i in range(n):
#     print(string,end=" ")

# # 12. Write a Python program to count the number 4 in a given list.
# list1 = [1,2,5,9,3,7,4,5,6]
# print(list1.__contains__(4))

# # 13. Write a Python program to test whether a passed letter is a vowel or not.
# def vowel_or_not(x):
#     vowels = ["a","e","i","o","u"]
#     if vowels.__contains__(x):
#         print(f"{x} is a vowel")
#     else:
#         print(f"{x} is not vowel")
# vowel_or_not("i")

# # 14. Write a Python program to create a histogram from a given list of integers.
# # e.g. [2,4,5,8]
# # Result :- 
# # @@
# # @@@@
# # @@@@@
# # @@@@@@@@
# def histogram(list1):
#     for i in range(len(list1)):
#         for j in range(list1[i]):
#             print("@",end="")
#         print()
# histogram([2,4,5,6])

# # 15. Write a Python program to concatenate all elements in a list into a string and return it.
# def concatenate_element(list1):
#     temp = ""
#     for i in range(len(list1)):
#          temp = temp + list1[i] + " "
#     return temp
# string = concatenate_element(["my","name","is","abhishek"])
# print(string)

# # 16. Write a Python program to print all even numbers from a given numbers
# # list in the same order and stop the printing if any numbers that come after 237 in the sequence.  
# # Sample numbers list :
# # numbers = [    
# #     386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345, 
# #     399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217, 
# #     815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717, 
# #     958,743, 527
# #     ]
# numbers = [    
#     386, 462, 47, 418, 907, 344, 236, 375, 823, 566, 597, 978, 328, 615, 953, 345, 
#     399, 162, 758, 219, 918, 237, 412, 566, 826, 248, 866, 950, 626, 949, 687, 217, 
#     815, 67, 104, 58, 512, 24, 892, 894, 767, 553, 81, 379, 843, 831, 445, 742, 717, 
#     958,743, 527
#     ]
# for i in range(len(numbers)):
#     if numbers[i]==237:
#         break
#     elif number[i]%2==0:
#         print(numbers[i])

# # 17.  Write a Python program to print out a set containing all the colors
# #  from color_list_1 which are not present in color_list_2.  
# # Test Data :
# # color_list_1 = set(["White", "Black", "Red"])
# # color_list_2 = set(["Red", "Green"])
# # Expected Output :
# # {'Black', 'White'}
# color_list_1 = set(["White", "Black", "Red"])
# color_list_2 = set(["Red", "Green"])
# print(color_list_1.difference(color_list_2)

# # 18. Write a Python program to compute the greatest common divisor (GCD) of two positive integers.
# def gcd(a,b):
#     list1 = set() 
#     list2 = set()
#     for i in range(1,a):
# if a%i==0:                          #This is not best way of GCD
#             list1.add(i)
#     for j in range(1,b):
#         if b%j==0:
#             list2.add(j)
#     uni = list1.intersection(list2)
#     print("GCD is : " + str(max(uni)))
# gcd(724,88)

# # 19. Write a Python program to get the least common multiple (LCM) of two positive integers.
# def lcm(a,b):
#     list1 = set()
#     list2 = set()
#     for i in range(1,a):
#         if a%i==0:
#             list1.add(i)
#     for j in range(1,b):                      #This is not best way of  LCM
#         if b%j==0:
#             list2.add(j)
#     uni = list1.intersection(list2)
#     gcd = max(uni)
#     lcm1 = (a*b)/gcd
#     print("LCM is : " + str(lcm1) )
# lcm(724,88)

# # 20. Write a Python function that takes a sequence of numbers
# #     and determines whether all the numbers are different from each other.
# def test_distinct(data):
#   if len(data) == len(set(data)):
#     return True
#   else:
#     return False
# print(test_distinct([1,5,7,9]))
# print(test_distinct([2,4,5,5,7,9]))           

# # 21. Write a Python program to create all possible strings 
# #     by using 'a', 'e', 'i', 'o', 'u'. Use the characters exactly once.
# list1 = ['a', 'e', 'i', 'o', 'u']
# n=0
# for a in range(len(list1)):
    # for b in range(len(list1)):                 #Incomplete
#         for c in range(len(list1)):             # you will try import itertools and use permutation
#             for d in range(len(list1)):
#                 for e in range(len(list1)):
#                     print(list1[a],list1[b],list1[c],list1[d],list1[e],)
#                     n += 1
# print(n)

# # 22. Write a Python program to get a string from a given string 
# #     where all occurrences of its first char have been changed to '$', except the first char itself.
# # Sample String : 'restart'
# # Expected Result : 'resta$t'
# def change_char(str1):
#   char = str1[0]
#   str1 = str1.replace(char, '$')
#   str1 = char + str1[1:]

#   return str1

# print(change_char('restart'))

# # 23. Write a Python program to get a single string from two given strings,
# #     separated by a space and swap the first two characters of each string.  
# # Sample String : 'abc', 'xyz'
# # Expected Result : 'xyc abz'
# def separate_string(str1,str2):
#     str3 = str2[:2] + str1[2:]
#     str4 = str1[:2] + str2[2:]
#     print(f"{str3} {str4}")
# separate_string("abc","xyz")

# # 24. Write a Python program to add 'ing' at the end of a given string (length should be at least 3).
# #     If the given string already ends with 'ing' then add 'ly' instead. 
# #     If the string length of the given string is less than 3, leave it unchanged.  
# # Sample String : 'abc'
# # Expected Result : 'abcing'
# # Sample String : 'string'
# # Expected Result : 'stringly'
# def ing(str1):
#     if len(str1)>=3:
#         if str1[-3:]=="ing":
#             return (str1+"ly")
#         else:
#             return (str1 + "ing")
#     else:
#         return str1
# print(ing("abc"))
# print(ing("string"))

# # 25. Write a Python program to find the first appearance of the substring 'not' and 'poor'
# #  from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring 
# # with 'good'. Return the resulting string.  
# # Sample String : 'The lyrics is not that poor!'
# # 'The lyrics is poor!'
# # Expected Result : 'The lyrics is good!'
# # 'The lyrics is poor!'
# def poor(str1):
#     if str1.__contains__("not" and "poor"):
#         x = str1.find("not")
#         y = str1.find("poor")
#         print(str1[:x]+str1[y:])
#     elif str1.__contains__("good"):
#          x = str1.find("good")
#          str2 = str1.replace(str1[x:x+4],'poor')
#          print(str2)
# poor("this lyrics is not that poor")
# poor("the lyrics is good")
    
# # 26. Write a Python function that takes a list of words and returns the length of the longest one.
# def longest(list1):
#     list2 = []
#     for i in range(len(list1)):
#         list2.append(len(list1[i]))
#         maximum = max(list2)
#         find1 = list2.index(maximum)
#     print(list1[find1])
# longest(["ram","shyam","mohan","abhishek"])

# # 27. Write a Python program to remove the nth index character from a nonempty string.
# str1 = "abhishek"
# n=5
# print(f"{str1[:n]}{str1[n+1:]}")

# 28. Write a Python program to count the occurrences of each word in a given sentence.
# def count_word(str1):

#     list1 = list(str1.split(" "))
#     print(list1)
#     for i in range(len(list1)):
#         a=0
#         for j in range(len(list1)):
#             if list1[i]==list1[j]:
#                 a += 1
            
#         print(f"{list1[i]} : {a} ")
# count_word("the is the is hello abhishek yadav is")

# # 
# def word_count(str):
#     counts = dict()
#     words = str.split()

#     for word in words:
#         if word in counts:
            # counts[word] += 1         #I can't understand how it's work!
#         else:
#             counts[word] = 1

#     return counts

# print( word_count('the quick brown fox jumps over the lazy dog.'))

# # 29. Write a Python program that accepts a comma separated sequence of words 
# #    as input and prints the unique words in sorted form (alphanumerically).
# # Sample Words : red, white, black, red, green, black
# # Expected Result : black, green, red, white,red
# colour = input("enter colours name separted by comma : ")
# list1 = list(colour.split(","))
# print(list1[::-1])

# # 30.Write a Python function to create the HTML string with tags around the word(s).
# # Sample function and result :
# # add_tags('i', 'Python') -> '<i>Python</i>'
# # add_tags('b', 'Python Tutorial') -> '<b>Python Tutorial </b>'
# def tag(a,b):
#     x = f"<{a}>{b}</{a}>"
#     return x
# print(tag("i","hello"))

# # 31.Write a Python program to get the last part of a string before a specified character.
# str1= "https://www.python.org/downloads/release/python-383"
# print(str1.rsplit("/",1)[0])

# # 32. Write a Python program to sort a string lexicographically.
# str1 = "dkghsldkbg"
# print(sorted(str1))

# # 33. Write a Python program to create a Caesar encryption.
# def encryption(str1,y):
#     str2 = str1.lower()
#     print(str2)
#     lowecase = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
#     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
#     list1 = list(str2)
#     for i in range(len(list1)):
#         x = lowecase.index(list1[i])
#         print(lowecase[x-y],end="")
# encryption("aBhishek",3)

# # 34. Write a Python program to count occurrences of a substring in a string.
# str1 = 'my name is abhishek and my father name is shri krishna'
# print(str1.count(" is "))
# print(str1.count("is"))

# # 35. Write a Python program to reverse words in a string. 
# str1 = "my name is abhishek"
# str1 = input("Enter name : ")
# str2 = str1.split(" ")
# list1 = list(str2)
# list1.reverse()
# print(" ".join(list1))


# # 36. Write a Python program to strip a set of characters from a string.
# def strip(str1,str2):
#     for i in range(len(str2)):
#         str1 = str1.replace(str2[i],"")
#     return str1
# print(strip("my name is abhishek","aeiou"))\

# # 37. Write a Python program to count repeated characters in a string.
# def str_count(str1):
#     list1 = []
#     for i in range(len(str1)):
#         if str1.count( str1[i] )>1:
#             x=f"{str1[i]} : {str1.count( str1[i] )}"
#             list1.append(x)
#     set1 =set(list1)
#     return "\n".join(set1)
# print(str_count("My name is abhishek yadav"))

# # 38. Write a Python program to print the index of the character in a string.
# str1 = "abhishek"
# for i in range(len(str1)):
#     print(f"{str1[i]} : {i}")

# # Write a Python program to check if a string contains all letters of the alphabet.
#               1st Type
# str1 = "my name is abhishek abcdefghijklmnopqrstuvwxyz"
# str1 = str1.replace(" ","")
# set1 = set(str1)
# sorted(set1)
# str1="".join(set1)
# print(str1)
# str2 = "abcdefghijklmnopqrstuvwxyz"          # when I don't know string library and it's functon 😒
# set2 = set(str2)
# sorted(set2)
# str2 = "".join(set2)
# print(str2)
# if str1==str2:
#     print("all alphabet contains")
# else:
#     print("not all alphabet contains")

# #                 2nd Type
# import string
# alphabet  = set(string.ascii_lowercase)
# print(alphabet)
# input_string = 'The quick brown fox jumps over the lazy dog'          #That's so easy 😃
# print(set(input_string.lower()) >= alphabet)
# input_string = 'The quick brown fox jumps over the lazy cat'
# print(set(input_string.lower()) >= alphabet)

# # 39. Write a Python program to count and display the vowels of a given text.
# def vowel(text):
#     vowels = "aeiuoAEIOU"
#     print(len([letter for letter in text if letter in vowels]))           # Beja-fry 🥴 
#     print([letter for letter in text if letter in vowels])
# vowel('w3resource')

# # 40. Write a Python program to find the first non-repeating character in given string.
# def str_count(str1):
#     list1 = []
#     for i in range(len(str1)):
#         if str1.count( str1[i] )==1:
#             x=f"{str1[i]} : {str1.count( str1[i] )}"
#             list1.append(x)
#     set1 =set(list1)
#     return "\n".join(set1)
# print(str_count("My name is abhishek"))

# # 41. Write a Python program to sum all the items in a list.
# list1 = [1,2,3,4,6,7,88,7]
# sum=0
# for i in list1:
#     sum += i
# print(sum)

# 42. Write a Python program to get a list, sorted in increasing order by the 
#     last element in each tuple from a given list of non-empty tuples.
# def last(n): return n[-1]

# def sort_list_last(tuples):
#   return sorted(tuples, key=last)           #I can't understand this code 😒

# print(sort_list_last([(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]))

# #  43. Write a Python program to remove duplicates from a list.
# list1 = [1,2,3,4,5,6,7,81,2,32,3,42,21,1,2]
# set1 = set(list1)
# list1 = list(set1)
# for value in list1:
#     print(value,end=" ")

# # 43. Write a Python program to check a list is empty or not.
# list1 = [8]
# if len(list1)==0:
#     print("list is empty")
# else:
#     print("list is not empty")

# # 44. Write a Python program to clone or copy a list.
# list1 = [1,5,2,6,3,6,43,5646,4,1,8]
# list2 = list1.copy()
# print(list1)
# print(list2)

# # 45. Write a Python program to find the list of words that are longer than n from a given list of words. 
# n = int(input("enter no. : "))
# list1 = ["ram","shyam","mohan","sita","geeta","tom"]
# for i in range(len(list1)):
#     if len(list1[i])>n:
#         print(list1[i])

# # 46.  Write a Python function that takes two lists and returns True if they have at least one common member. 
# def comman_list(list1,list2):
#     for i in range(len(list1)):
#         for j in range(len(list2)):
#             if list1[i]==list2[j]:
#                 print("true there is a comman word in lists")
# comman_list([1,2,3,4],[5,6,7])
# comman_list([1,2,3,4],[4,5,6])

# # 47. Write a Python program to print a specified list after removing the 0th, 4th and 5th elements.
# color = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
# color = [color[i] for i in range(len(color)) if i not in (0,4,5)]
# print(color)

# # 48. Write a Python program to print the numbers of a specified list after removing even numbers from it.
# list1 = [2,4,65,87,89,544,3,43543,65,568,34,3235]
# list1 = [index for index in list1 if index%2==0]
# print(list1)

# # 49. Write a Python program to shuffle and print a specified list.
# from random import shuffle
# color = ['Red', 'Green', 'White', 'Black', 'Pink', 'Yellow']
# shuffle(color)
# print(color)

# # 50. Write a Python program to generate and print a list of first and last 5 elements
# #     where the values are square of numbers between 1 and 30 (both included).
# list1 = [i**2 for i in range(1,31)]
# print("first five no. : ",list1[:5])
# print("last five no. is : ",list1[-5:])

# # 51. Write a Python program to generate all permutations of a list in Python.
# import itertools
# print(list(itertools.permutations([1,2,3])))
# print(list(itertools.combinations([1,2,3],2)))

# # 52. Write a Python program to get the difference between the two lists.
# list1 = [1, 3, 5, 7, 9]
# list2=[1, 2, 4, 6, 7, 8]
# diff_list1_list2 = list(set(list1) - set(list2))
# diff_list2_list1 = list(set(list2) - set(list1))
# total_diff = diff_list1_list2 + diff_list2_list1
# print(total_diff)

# # 53. Write a Python program to convert a list of characters into a string.
# char = ['a','b','t','o']
# print("".join(char))

# # 54. Write a Python program to flatten a shallow list.
# import itertools
# list1 = [1,2,3,4]
# list2 = [2,4,68,2]
# list3 = [43,456,2342,31]
# list4=[list1,list2,list3]
# print(list(itertools.chain(*list4)))     #via itertools
# print(list(list1 + list2 + list3))       #via "+""

# # 55. Write a Python program to select an item randomly from a list.
# import random
# list1 = [2,4,56,54,34,345,3454356,346,3]
# x = random.choice(list1)
# print(x)

# # 56. Write a Python program to select an item randomly from a list.
# list1 = [10, 10, 0, 0, 10]
# list2 = [10, 10, 10, 0, 0]
# list3 = [1, 10, 10, 0, 0]
# print(sorted(list1) == sorted(list2))
# print(sorted(list1) == sorted(list3))

# # 57. Write a Python program to find the second smallest and laegest number in a list. 
# list1 = [3,5,3,34,3235,43,43643,3,63,643,634,6,346,4656,756,8]
# set1 = set(list1)
# set1 = sorted(set1)
# print("2nd smarllest no. in the list is ",set1[1])
# print("2nd largest no. in the lsit is ",set1[-2])

# # 58.Write a Python program to get the frequency of the elements in a list.
# def count_range_in_list(li, min, max):
#     print(li)
#     n=0
#     for i in li:
#         if min<= i <=max:
#             n += 1
#     print(n)
# count_range_in_list([12,45,546,36,3,5,65,34,78,65,23,44],35,100)

# # 59. Write a Python program to check whether a list contains a sublist.
# def is_Sublist(l, s):
#     x=True
#     for i in s:
#         x=l.__contains__(i)
#         if x==False:
#             print("list can't contain sublist") 
#             break
#     if x==True: print("list contains sublist")
# a = [3,8,6,7,5]
# b = [4,3,99]
# c = [3,7]
# is_Sublist(a, b)
# is_Sublist(a, c)

# # 60. Write a Python program to generate all sublists of a list.
# import itertools
# list1 = [1,2,3]
# list2 = []
# for i in list1:
#     list2 += list(itertools.combinations(list1,i))
# print(list2)

# # 61. prime no. by eratosthenes method :
# def prime_eratosthenes(n):
#     prime_list = []
#     for i in range(2, n+1):
#         if i not in prime_list:               # I love that method 😃 😃 
#             print(i)
#             for j in range(i*i, n+1, i):
#                 prime_list.append(j)
# print(prime_eratosthenes(100))

# # 62. Write a Python program to create a list by concatenating a given list which range goes from 1 to n.
# list1 = ["p","q"]
# n=5
# x = [f'{i}{j}' for i in list1 for j in range(1,n+1)]
# print(x)

# # 63. Write a Python program to change the position of every n-th value with the (n+1)th in a list.
# list1 = [3,5,2,8,1,0,4,5,7,3,67,53]
# list2 = list1
# print(list2)
# n=2 
# x=0 
# y=0
# for i in range(0,len(list1)-1,2):
#     x = list2[i+1]
#     y = list2[i]
#     list1[i] = x 
#     list1[i+1] = y
# print(list1)

# # 64. Write a Python program to split a list into different variables.

# color = [("Black", "#000000", "rgb(0, 0, 0)"), ("Red", "#FF0000", "rgb(255, 0, 0)"),
#          ("Yellow", "#FFFF00", "rgb(255, 255, 0)")]
# var1, var2, var3 = color
# print(var1)
# print(var2)
# print(var3)

# # 65. Write a Python program to generate groups of five consecutive numbers in a list.
# x = [[5*j+i for i in range(1,6)] for j in range(5)]
# print(x)

# # 66. Write a Python program to convert a pair of values into a sorted unique array.
# L = [(1, 2), (3, 4), (1, 2), (5, 6), (7, 8), (1, 2), (3, 4), (3, 4),(7, 8), (9, 10)]
# print(sorted(set().union(*L)))

# # 67. Write a Python program to insert an element before each element of a list.
# list1 = ["ram","shayam","mohan"]
# x = ["list1.append()" for i in range(0,len(list1),2) ]
# print(x)

# # 68.Write a Python program to insert an element before each element of a list.
# color = ['Red', 'Green', 'Black']
# print("Original List: ",color)
# color = [v for elt in color for v in ('c', elt)]
# print("Original List: ",color)

# # 69. Write a Python program to print a nested lists (each list on a new line) using the print() function.
# colors = [['Red'], ['Green'], ['Black']]
# print("\n".join(str(item) for item in colors))

# # 70. Write a Python program to convert list to list of dictionaries. 
# color_name = ["Black", "Red", "Maroon", "Yellow"]
# color_code = ["#000000", "#FF0000", "#800000", "#FFFF00"]
# print([f"[\'{col_name}\' : \'{col_code}\']" for col_name,col_code in zip(color_name,color_code)])

# # 71.Write a Python program to split a list every Nth element.
# C = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n']
# def list_slice(S, step):
#     return [S[i::step] for i in range(step)]
# print(list_slice(C,3))

# #72. Write a Python program to check whether all items of a list is equal to a given string.
# color1 = ["green", "orange", "black", "white"]
# color2 = ["green", "green", "green", "green"]
# print(color1.__contains__("black"))
# print(color2.__contains__("yellow"))

# # 73. Write a Python program to replace the last element in a list with another list.
# num1 = [1, 3, 5, 7, 9, 10]
# num2 = [2, 4, 6, 8]
# print(num1[:-1]+num2)

# import random
# n1 = random.randint(1,6)
# n2 = random.randint(1,6)
# a=0
# b=0
# while a<100 or b<100:
#     a = a + random.randint(1,6)
#     print(a)
#     b = b + random.randint(1,6)             #not for you. It's ludo game 😃
#     print(b)
#     if a>=100:
#         print("a win")
#         break
#     if b>=100:
#         print("b win")
#         break

# # 74. Write a Python script to sort (ascending and descending) a dictionary by value. 
# import operator
# d = {1: 2, 3: 8, 4: 3, 2: 1, 0: 0}
# print('Original dictionary : ',d)
# sorted_d = dict(sorted(d.items(), key=operator.itemgetter(1)))
# print('Dictionary in ascending order by value : ',sorted_d)
# sorted_d = dict(sorted(d.items(), key=operator.itemgetter(1),reverse=True))
# print('Dictionary in descending order by value : ',sorted_d)

# # 75. Write a Python script to add a key to a dictionary.
# dict1 = {0:10 ,1:20}
# dict1.update({2:30})
# print(dict1)

# # 76.Write a Python script to concatenate following dictionaries to create a new one. 
# dic1={1:10, 2:20}
# dic2={3:30, 4:40}
# dic3={5:50, 6:60}
# dic4 = {}
# for i in (dic1,dic2,dic3):
#     dic4.update(i)
# print(dic4)

# #77. Write a Python script to check whether a given key already exists in a dictionary.
# dict1 = { 1:9689 ,9:697, 7:55 }
# x = 9
# if x in dict1:
#     print("key found in dict")
# else:
#     print("key not found in the dict")
    
# # 78. Write a Python program to iterate over dictionaries using for loops.
# d = {'x': 10, 'y': 20, 'z': 30} 
# for dict_key, dict_value in d.items():
#     print(dict_key,'->',dict_value)
	
# # 79. Write a Python script to generate and print a dictionary that contains
# #  a number (between 1 and n) in the form (x, x*x).
# dict1 = {}
# for i in range(1,6):
#     dict1.update({i:i*i})
# print(dict1)

# # 80.Write a Python program to sum all the items in a dictionary.
# dict1 = {1:5 ,5:4 ,2:65, 6:78}
# sum = 0
# for i in dict1.values():
#     sum += i
# print("sum = ",sum)

# #81.Write a Python program to map two lists into a dictionary.
# keys = ['red', 'green', 'blue']
# values = ['#FF0000','#008000', '#0000FF']
# dict1 = {}
# # color_dictionary = dict(zip(keys, values))      #Also use this function only
# for i,j in zip(keys,values):
#     dict1.update({i:j})
# print(dict1)

# # 82. Write a Python program to sort a dictionary by key.
# color_dict = {'red':'#FF0000',
#           'green':'#008000',
#           'black':'#000000',
#           'white':'#FFFFFF'}
# for i in sorted(color_dict):
#     print(i," : ",color_dict[i])

# # 83.Write a Python program to get the maximum and minimum value in a dictionary.
# dict1 = {1:5 ,5:4 ,2:65, 6:78}
# print("maximun value in dict1 is : ",max(dict1.values()))
# print("minimun value in dict1 is : ",min(dict1.values()))

# # 84. Write a Python program to remove duplicates from Dictionary.
# student_data = {'id1': 
#    {'name': ['Sara'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id2': 
#   {'name': ['David'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id3': 
#     {'name': ['Sara'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id4': 
#    {'name': ['Surya'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
# }

# student_data = {'id1': 
#    {'name': ['Sara'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id2': 
#   {'name': ['David'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id3': 
#     {'name': ['Sara'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
#  'id4': 
#    {'name': ['Surya'], 
#     'class': ['V'], 
#     'subject_integration': ['english, math, science']
#    },
# }
# result = {}
# for key,value in student_data.items():
#     if value not in result.values():
#         result[key] = value
# print(result)

# # 85. To check dictionary is empty or not.
# dict1 = {}
# if len(dict1)==0:
#     print("empty")

# # 86. Write a Python program to combine two dictionary adding values for common keys.
# from collections import Counter
# d1 = {'a': 100, 'b': 200, 'c':300}
# d2 = {'a': 300, 'b': 200, 'd':400}
# d3 = {}
# d = {}
# for i,j in zip(d1,d2):           # It's Algorithm😃
#     if i==j:
#         d3[i] = d1[i] + d2[j] 
#     else:
#         d3[i] = d1[i]
#         d3[j] = d2[j] 
# print(d3)
# d = Counter(d1) + Counter(d2)   # It's function 🥴
# print(d)

# # 87. Write a Python program to print all unique values in a dictionary.
# l = [{"V":"S001"}, {"V": "S002"}, {"VI": "S001"}, {"VI": "S005"}, {"VII":"S005"}, {"V":"S009"},{"VIII":"S007"}]
# set1 = set()
# for i in l:
#     for j in i.values():
#         set1.add(j)
# print(set1)

# # 88.Write a Python program to find the highest 3 values in a dictionary.
# from heapq import nlargest
# my_dict = {'a':500, 'b':5874, 'c': 560,'d':400, 'e':5874, 'f': 20}  
# three_largest = nlargest(3, my_dict, key=my_dict.get)
# print(three_largest) 

# #89.Write a Python program to combine values in python list of dictionaries.
# from collections import Counter
# item_list = [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount': 300}, {'item': 'item1', 'amount': 750}]
# result = Counter()
# for d in item_list:
#     result[d['item']] += d['amount']
# print(result) 

# #90. Write a Python program to create a dictionary from a string.
# from collections import defaultdict, Counter
# str1 = 'w3resource' 
# my_dict = {}
# for letter in str1:
#     my_dict[letter] = my_dict.get(letter, 0) + 1
# print(my_dict)

# # 91. Write a Python program to convert a list into a nested dictionary of keys.
# num_list = [1, 2, 3, 4]
# new_dict = current = {}
# for name in num_list:
#     current[name] = {}
#     current = current[name]
# print(new_dict)

# #92. Write a Python program to remove spaces from dictionary keys.
# student_list = {'S  001': ['Math', 'Science'], 'S    002': ['Math', 'English']}
# student_dict = {x.replace(" ",""): y for x, y in student_list.items()}
# print(student_dict)

# #  93. Write a Python program to get the top three items in a shop.
# from heapq import nlargest
# from operator import itemgetter
# items = {'item1': 45.50, 'item2':35, 'item3': 41.30, 'item4':55, 'item5': 24}
# for name, value in nlargest(3, items.items(), key=itemgetter(1)):
#     print(name, value)
	
# # 94. Write a Python program to get the key, value and item in a dictionary.
# dict_num = {1: 10, 2: 20, 3: 30, 43: 40, 5: 50, 6: 60}
# for a,i,j in zip(range(1,7),dict_num.keys(),dict_num.values()):
#     print(a,i,j)

# # 95.Write a Python program to convert a list of tuples into a dictionary.
# l = [("x", 1), ("x", 2), ("x", 3), ("y", 1), ("y", 2), ("z", 1)]
# d = {}
# for i,j in l:
#     d.setdefault(i,[]).append(j)
# print(d)

# # 96.Write a Python program which takes two digits m (row) and n (column)
# #  as input and generates a two-dimensional array. 
# # The element value in the i-th row and j-th column of the array should be i*j.
# row_num = int(input("Input number of rows: "))
# col_num = int(input("Input number of columns: "))
# multi_list = [[0 for col in range(col_num)] for row in range(row_num)]

# for row in range(row_num):
#     for col in range(col_num):
#         multi_list[row][col]= row*col
# for i in multi_list:
#     print(i)

# # 97. Write a Python program to sort a list of tuples using Lambda.
# subject_marks = [('English', 88), ('Science', 90), ('Maths', 97), ('Social sciences', 82)]
# subject_marks.sort(key = lambda x:x[1])
# print(subject_marks)

# 98. 
# import datetime
# print(datetime.datetime.now())
# print(datetime.date.today())
# a = datetime.date(2020,5,23)
# print(a)

a = [1,6,3,5]
print(a[-2])