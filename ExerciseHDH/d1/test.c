#include <stdio.h>

void integerAnalysis(int n) {
    printf("%d = ", n);
    int i = 2;
    while (n > 1)
    {
        
        if (n % i == 0)
        {   
            n = n / i;
            if (n == 1)
            {
                printf("%d", i);
            } else printf("%d * ", i);

        } else
            {
                i++;
            } 
    }
}

int main() {
    integerAnalysis(97);

}

