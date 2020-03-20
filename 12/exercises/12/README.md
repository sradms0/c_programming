### Exercise 12.12
Write the following function:
```c
void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest);
```
`a` points to an array of length `n`. The function searches the array for its largest and second largest elements, storing them in the variables pointed to by `largest` and `second_largest`, respectively. Use pointer arithmetic—not subscripting—to visit array elements,

### Solution
```c
void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest)
{
  const int *p; 

  *largest = *second_largest = *a;

  for (p = a+1; p < a+n; p++) {
    if (*p > *largest) {
      *second_largest = *largest;
      *largest = *p;
    } else if (*largest == *second_largest)
      *second_largest = *p;
  }
}
```