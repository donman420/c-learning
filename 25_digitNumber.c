// Write a function digit(n, k) that returns the k digit (from the right) in n (a posi­tive integer). 
// If k is greater than the number of digits in n have the func­tion return 0.

int digit(unsigned n, int k)
{
    while(n > 0){
        k--;
        if(k == 0){
            return n % 10;
        }
        n = n / 10;
    }

    return 0;
}

int main()
{   
    unsigned inputn;
    int inputk;

    scanf("%u %d", &inputn, &inputk);
    printf("The %d digit in %u is %d", inputk, inputn, digit(inputn, inputk));


}