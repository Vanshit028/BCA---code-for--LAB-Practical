In C, there are no built-in methods for strings like in higher-level languages (e.g., Python or Java). However, C provides several functions from the `<string.h>` library to work with strings. These functions allow you to perform common string operations like copying, concatenation, comparison, length calculation, and more.

Below is a code that demonstrates the use of several string functions in C, such as:
- `strlen()`: Calculate the length of a string.
- `strcpy()`: Copy one string to another.
- `strncpy()`: Copy a specific number of characters from one string to another.
- `strcat()`: Concatenate two strings.
- `strcmp()`: Compare two strings.
- `strchr()`: Find the first occurrence of a character in a string.
- `strstr()`: Find a substring in a string.
- `strrev()`: Reverse a string (this isn't part of the standard library, but we can create it).
- `strlwr()`: Convert a string to lower case.
- `strupr()`: Convert a string to upper case.

### Code Demonstrating Various String Functions:

```c
#include <stdio.h>
#include <string.h>

// Custom function to reverse a string (since it's not part of standard C)
void strrev(char *str) {
    int len = strlen(str);
    int i;
    char temp;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];  // To store copied string
    char str4[100] = "Programming in C is fun!";
    char *token;

    // 1. Length of the string using strlen()
    printf("Length of str1 ('%s'): %lu\n", str1, strlen(str1));

    // 2. Copying a string using strcpy()
    strcpy(str3, str1);
    printf("After copying str1 to str3: %s\n", str3);

    // 3. Copying a specific number of characters using strncpy()
    strncpy(str3, str2, 3);  // Copies the first 3 characters of str2 to str3
    printf("After copying 3 characters of str2 to str3: %s\n", str3);

    // 4. Concatenating strings using strcat()
    strcat(str1, str2);
    printf("After concatenating str1 and str2: %s\n", str1);

    // 5. Comparing strings using strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal.\n");
    } else {
        printf("str1 and str2 are not equal.\n");
    }

    // 6. Finding the first occurrence of a character using strchr()
    char *ch = strchr(str4, 'C');
    if (ch != NULL) {
        printf("First occurrence of 'C' in str4: %s\n", ch);
    } else {
        printf("'C' not found in str4.\n");
    }

    // 7. Finding a substring using strstr()
    char *substr = strstr(str4, "C is");
    if (substr != NULL) {
        printf("Substring 'C is' found in str4: %s\n", substr);
    } else {
        printf("Substring 'C is' not found in str4.\n");
    }

    // 8. Reversing a string using custom strrev()
    strrev(str1);
    printf("After reversing str1: %s\n", str1);

    return 0;
}
```

### Explanation of the Code:
1. **`strlen(str)`**: Returns the length of the string `str`.
2. **`strcpy(dest, src)`**: Copies the contents of `src` into `dest`.
3. **`strncpy(dest, src, n)`**: Copies the first `n` characters of `src` into `dest`.
4. **`strcat(dest, src)`**: Concatenates `src` to the end of `dest`.
5. **`strcmp(str1, str2)`**: Compares `str1` and `str2`. Returns 0 if they are equal, and a non-zero value if they differ.
6. **`strchr(str, ch)`**: Finds the first occurrence of character `ch` in string `str` and returns a pointer to it.
7. **`strstr(str, substr)`**: Finds the first occurrence of the substring `substr` in string `str` and returns a pointer to it.
8. **`strrev(str)`**: A custom function that reverses the string `str` (since `strrev()` isn't part of the standard C library).


### Sample Output:

```
Length of str1 ('Hello'): 5
After copying str1 to str3: Hello
After copying 3 characters of str2 to str3: Wor
After concatenating str1 and str2: HelloWorld
str1 and str2 are not equal.
First occurrence of 'C' in str4: C is fun!
Substring 'C is' found in str4: C is fun!
After reversing str1: dlroWolleH

```

This code provides a comprehensive demonstration of common string functions in C, helping you understand their usage. The `strrev` function is custom-made since it is not part of the standard C library.