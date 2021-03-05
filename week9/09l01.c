// using functions
// isdigit for number(0,1,2,3,5,32...)
// isalpha for letter(a,b,c,d,f..)
// isalnum for number or letter(it doesn't matter which is digit or letter)
// isxdigit for base 16 different situation(we use 10 base) 
#include <stdio.h>
#include <ctype.h>
int main(){
    printf("%s\n%s%s\n%s%s\n\n",
        "According to isdigit:",
        isdigit('#') ?  "# is a" :"# is not a"," digit",
        isdigit('8') ?  "8 is a" :"8 is not a"," digit");
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to isalpha:",
        isalpha('A') ?  "A is a" :"A is not a"," letter", 
        isalpha('b') ?  "b is a" :"b is not a"," letter",
        isalpha('&') ?  "& is a" :"& is not a"," letter",
        isalpha('4') ?  "4 is a" :"4 is not a"," letter");
    printf("%s\n%s%s\n%s%s\n%s%s\n\n",
        "According to isalnum:",
        isalnum('A') ?  "A is a" :"A is not a"," digit or letter",
        isalnum('#') ?  "# is a" :"# is not a"," digit or letter",
        isalnum('8') ?  "8 is a" :"8 is not a"," digit or letter");
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
        "According to isxdigit:",
        isxdigit('F') ?  "F is a" :"F is not a"," hexadecimal digit",
        isxdigit('J') ?  "J is a" :"J is not a"," hexadecimal digit",
        isxdigit('7') ?  "7 is a" :"7 is not a"," hexadecimal digit",
        isxdigit('$') ?  "$ is a" :"$ is not a"," hexadecimal digit",
        isxdigit('f') ?  "f is a" :"f is not a"," hexadecimal digit");
    return 0;
}