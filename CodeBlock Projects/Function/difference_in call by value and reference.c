
//date 29-12-2019
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, n1, n2;

    printf("\nEnter num1: ");
    scanf("%d", &a);

    printf("\nEnter num2: ");
    scanf("%d", &b);

    printf("\nNumber after swap: \n");

    swap_call_by_reference(&a, &b); // & is used to pass the address of variable a and b  (& is a format specifier for address)
    printf("\nNumber from main(): \t Num1: %d   Num2: %d \n\n", a, b);

    printf("\n\n* here the number swap using call by reference, \n  changes a value of main() local variable a and b as well \n\n");
    printf("\n* Swapping happen only in swap_by_reference() has effect on main() \n\n");


    printf("\n\nEnter other two number to swap by call by values: \n");
    printf("\nnum1: ");
    scanf("%d", &n1);
    printf("\nnum2: ");
    scanf("%d", &n2);

    printf("\nNumber after swap: \n");

    swap_call_by_values(n1, n2);

    printf("\nNumber from main(): \t num1: %d   num2: %d \n\n", n1, n2);

    printf("\n\n* here the number swap using call by value, \n  not changes the value of main() local variable a and b \n\n");
    printf("\n* Swapping happen only in swap_by_value() has no effect on main() \n\n");

    return 0;
}


  void swap_call_by_reference(int * c, int * d) // * specify that c and d are pointer (pointer specify the address of variable to which it is assign)
  {
      int temp;

      temp = *c;
      *c = *d;
      *d = temp;

      printf("\nNumber from swap_call_by_reference(): \t num1: %d    num2: %d \n\n", *c, *d);
  }

  void swap_call_by_values(c, d)
  {
      int temp;

      temp = c;
      c = d;
      d = temp;

      printf("\nNumber from swap_call_by_values(): \t num1: %d   num2: %d \n\n", c, d);
  }
