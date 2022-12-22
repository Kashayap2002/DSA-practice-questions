//malloc   ptr = (int*) malloc(100 * sizeof(int));

/*#include <stdio.h>
#include <stdlib.h>

int main()
{

 // This pointer will hold the
 // base address of the block created
 int* ptr;
 int n, i;

 // Get the number of elements for the array
 printf("Enter number of elements:");
 scanf("%d",&n);
 printf("Entered number of elements: %d\n", n);

 // Dynamically allocate memory using malloc()
 ptr = (int*)malloc(n * sizeof(int));

 // Check if the memory has been successfully
 // allocated by malloc or not
 if (ptr == NULL) {
  printf("Memory not allocated.\n");
 // exit(0);
 }
 else {

  // Memory has been successfully allocated
  printf("Memory successfully allocated using malloc.\n");

  // Get the elements of the array
  for (i = 0; i < n; ++i) {
   ptr[i] = i + 1;
  }

  // Print the elements of the array
  printf("The elements of the array are: ");
  for (i = 0; i < n; ++i) {
   printf("%d, ", ptr[i]);
  }
 }

 return 0;
}
*/
/*-------------------------------------------------------------------------------------*/
//calloc  ptr = (float*) calloc(25, sizeof(float));

/*n#include <stdio.h>
#include <stdlib.h>

int main()
{

 // This pointer will hold the
 // base address of the block created
 int* ptr;
 int n, i;

 // Get the number of elements for the array
 n = 5;
 printf("Enter number of elements: %d\n", n);

 // Dynamically allocate memory using calloc()
 ptr = (int*)calloc(n, sizeof(int));

 // Check if the memory has been successfully
 // allocated by calloc or not
 
  // Get the elements of the array
  for (i = 0; i < n; ++i) {
   ptr[i] = i + 1;
  }

  // Print the elements of the array
  printf("The elements of the array are: ");
  for (i = 0; i < n; ++i) {
   printf("%d, ", ptr[i]);
  }
  return 0;
 }*/

/*-------------------------------------------------------------------------------------*/
//free  free(ptr);

/*#include <stdio.h>
#include <stdlib.h>

int main()
{

 // This pointer will hold the
 // base address of the block created
 int *ptr, *ptr1;
 int n, i;

 // Get the number of elements for the array
 n = 5;
 printf("Enter number of elements: %d\n", n);

 // Dynamically allocate memory using malloc()
 ptr = (int*)malloc(n * sizeof(int));

 // Dynamically allocate memory using calloc()
 ptr1 = (int*)calloc(n, sizeof(int));

 // Check if the memory has been successfully
 // allocated by malloc or not
 if (ptr == NULL || ptr1 == NULL) {
  printf("Memory not allocated.\n");
  exit(0);
 }
 else {

  // Memory has been successfully allocated
  printf("Memory successfully allocated using malloc.\n");

  // Free the memory
  free(ptr);
  printf("Malloc Memory successfully freed.\n");

  // Memory has been successfully allocated
  printf("\nMemory successfully allocated using calloc.\n");

  // Free the memory
  free(ptr1);
  printf("Calloc Memory successfully freed.\n");
 }

 return 0;
}
*/

/*-------------------------------------------------------------------------------------*/
//realloc()  ptr = realloc(ptr, newSize);
 

 /*#include <stdio.h>
#include <stdlib.h>

int main()
{

 // This pointer will hold the
 // base address of the block created
 int* ptr;
 int n, i;

 // Get the number of elements for the array
 n = 5;
 printf("Enter number of elements: %d\n", n);

 // Dynamically allocate memory using calloc()
 ptr = (int*)calloc(n, sizeof(int));

 // Check if the memory has been successfully
 // allocated by malloc or not
 if (ptr == NULL) {
  printf("Memory not allocated.\n");
  exit(0);
 }
 else {

  // Memory has been successfully allocated
  printf("Memory successfully allocated using calloc.\n");

  // Get the elements of the array
  for (i = 0; i < n; ++i) {
   ptr[i] = i + 1;
  }

  // Print the elements of the array
  printf("The elements of the array are: ");
  for (i = 0; i < n; ++i) {
   printf("%d, ", ptr[i]);
  }

  // Get the new size for the array
  n = 10;
  printf("\n\nEnter the new size of the array: %d\n", n);

  // Dynamically re-allocate memory using realloc()
  ptr = realloc(ptr, n * sizeof(int));

  // Memory has been successfully allocated
  printf("Memory successfully re-allocated using realloc.\n");

  // Get the new elements of the array
  for (i = 5; i < n; ++i) {
   ptr[i] = i + 1;
  }

  // Print the elements of the array
  printf("The elements of the array are: ");
  for (i = 0; i < n; ++i) {
   printf("%d, ", ptr[i]);
  }

  free(ptr);
 }

 return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
 int index = 0, i = 0, n,
  *marks; // this marks pointer hold the base address
    // of the block created
 int ans;
 marks = (int*)malloc(sizeof(
  int)); // dynamically allocate memory using malloc
 // check if the memory is successfully allocated by
 // malloc or not?
 if (marks == NULL) {
  printf("memory cannot be allocated");
 }
 else {
  // memory has successfully allocated
  printf("Memory has been successfully allocated by "
   "using malloc\n");
  printf("\n marks = %pc\n",
   marks); // print the base or beginning
     // address of allocated memory
  do {
   printf("\n Enter Marks\n");
   scanf("%d", &marks[index]); // Get the marks
   printf("would you like to add more(1/0): ");
   scanf("%d", &ans);

   if (ans == 1) {
    index++;
    marks = (int*)realloc(
     marks,
     (index + 1)
      * sizeof(
       int)); // Dynamically reallocate
        // memory by using realloc
    // check if the memory is successfully
    // allocated by realloc or not?
    if (marks == NULL) {
     printf("memory cannot be allocated");
    }
    else {
     printf("Memory has been successfully "
      "reallocated using realloc:\n");
     printf(
      "\n base address of marks are:%pc",
      marks); ////print the base or
        ///beginning address of
        ///allocated memory
    }
   }
  } while (ans == 1);
  // print the marks of the students
  for (i = 0; i <= index; i++) {
   printf("marks of students %d are: %d\n ", i,
    marks[i]);
  }
  free(marks);
 }
 return 0;
}





