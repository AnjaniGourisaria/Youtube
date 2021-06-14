#include<stdio.h>
#include<string.h>
int fun(char *bt,char *bo,int v);
int main() {
  int value = 5;
  char buffer_one[8], buffer_two[8];
     strcpy(buffer_one, "one"); /* Put "one" into buffer_one. */
     strcpy(buffer_two, "two"); /* Put "two" into buffer_two. */
  printf("[BEFORE] buffer_two is at %p and contains \'%s\'\n", buffer_two, buffer_two);
  printf("[BEFORE] buffer_one is at %p and contains \'%s\'\n", buffer_one, buffer_one);
  printf("[BEFORE] value is at %p and is %d (0x%08x)\n", &value, value, value);
  printf("\n[STRCPY] copying %d bytes into buffer_two\n\n", strlen(buffer_two));
//strcpy(buffer_two, argv[1]); /* Copy first argument into buffer_two. */
gets(buffer_two);
fun(buffer_two,buffer_one,value);
 return 0;
}
int fun(char *bt,char *bo,int v) {
  printf("[AFTER] buffer_two is at %p and contains \'%s\'\n", bt, bt);
  printf("[AFTER] buffer_one is at %p and contains \'%s\'\n", bo, bo);
  printf("[AFTER] value is at %p and is %d (0x%08x)\n", &v, v, v);
return 0;
}
