int main() { int x = 10; int *ptr = &x; *ptr = 20; printf("%d\n", x); //Correctly prints the modified value of x return 0; }