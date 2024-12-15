 #include <stdio.h>
 void foo();
 
 int main(void)
 {
     foo(-25);
 }
 void foo(int x)
 {
     printf("%d", x); /* ERROR */
 }


 // c++ segmentation fault 
 // c might accept this but c++ won't

 