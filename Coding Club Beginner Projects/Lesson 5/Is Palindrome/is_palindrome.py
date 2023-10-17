#Rudimentary implementation: 
#Doesn't take into account spaces, special characters or anything like that, but for now we'll use it to sbow tbe students how to make an isPalindrome function
def reverse_string(string_to_reverse):
    reversed = ""
    i = len(string_to_reverse)
    while i >= 0:
        reversed += string_to_reverse[i]
        i -= 1
    return reversed

def is_palindrome(str):
    reversed_str = reverse_string(str)
    return str == reversed_str

print("Check if a string is a Palindrome!")
string_to_check = input("Please enter in the string: ")
print(is_palindrome(string_to_check))