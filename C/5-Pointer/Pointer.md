To understand how pointers work in C, including the use of single pointers (`*p_num`) and double pointers (`**p_p_num`), I will modify the code to include various print statements. This will help you visualize the relationships between variables and their memory addresses.

### Code with Detailed Comments and Print Statements:

```c
#include<stdio.h>
#include<conio.h>

void main(){
    int num, *p_num, **p_p_num;
    clrscr();	
    
    // Input the number
    printf("Enter the Number: ");
    scanf("%d", &num);

    // Assign the address of num to p_num (single pointer)
    p_num = &num;

    // Assign the address of p_num to p_p_num (double pointer)
    p_p_num = &p_num;

    // Print statements to show the use of pointers
    printf("\n--- Pointer Demonstration ---\n");

    // Printing the value of num
    printf("Value of num: %d\n", num);

    // Printing the address of num
    printf("Address of num (&num): %p\n", (void*)&num);

    // Printing the value stored in the pointer p_num (address of num)
    printf("Value stored in p_num (address of num): %p\n", (void*)p_num);

    // Printing the value pointed by p_num (value of num)
    printf("Value pointed by p_num (*p_num): %d\n", *p_num);

    // Printing the address of the pointer p_num
    printf("Address of p_num (&p_num): %p\n", (void*)&p_num);

    // Printing the value stored in the pointer-to-pointer p_p_num (address of p_num)
    printf("Value stored in p_p_num (address of p_num): %p\n", (void*)p_p_num);

    // Printing the value pointed by p_p_num (value of p_num, which is the address of num)
    printf("Value pointed by p_p_num (*p_p_num): %p\n", (void*)*p_p_num);

    // Printing the value pointed by the pointer-to-pointer p_p_num (value of num)
    printf("Value pointed by the value stored in p_p_num (**p_p_num): %d\n", **p_p_num);

    getch();
}
```

### Explanation of Print Statements:
1. **`Value of num:`**: Prints the actual value stored in the `num` variable.
2. **`Address of num (&num):`**: Prints the memory address where the `num` variable is stored.
3. **`Value stored in p_num (address of num):`**: Prints the value stored in the pointer `p_num`, which is the address of `num`.
4. **`Value pointed by p_num (*p_num):`**: Dereferences the pointer `p_num` to print the value of `num`.
5. **`Address of p_num (&p_num):`**: Prints the memory address where the pointer `p_num` is stored.
6. **`Value stored in p_p_num (address of p_num):`**: Prints the value stored in `p_p_num`, which is the address of `p_num`.
7. **`Value pointed by p_p_num (*p_p_num):`**: Dereferences `p_p_num` to print the value stored in `p_num`, which is the address of `num`.
8. **`Value pointed by the value stored in p_p_num (**p_p_num):`**: Double dereferences `p_p_num` to print the value of `num`.

### Sample Output:

```
Enter the Number: 25

--- Pointer Demonstration ---
Value of num: 25
Address of num (&num): 0x7ffeefbff58c
Value stored in p_num (address of num): 0x7ffeefbff58c
Value pointed by p_num (*p_num): 25
Address of p_num (&p_num): 0x7ffeefbff590
Value stored in p_p_num (address of p_num): 0x7ffeefbff590
Value pointed by p_p_num (*p_p_num): 0x7ffeefbff58c
Value pointed by the value stored in p_p_num (**p_p_num): 25
```

### Explanation:
- The **address** of `num` is stored in `p_num`, and dereferencing `p_num` gives you the **value** of `num`.
- The **address** of `p_num` is stored in `p_p_num`, and dereferencing `p_p_num` gives you the **address** of `num`. Double dereferencing `p_p_num` gives the **value** of `num`.

This code helps in understanding the concept of pointers and double pointers in C.