#include <stdio.h>
int main() {
    int num;
    printf(" enter number : ");
    scanf("%d", &num);
    if ( num  >= 0)
    {
        if ( num > 0)
        { printf(" the number %d is positive", num);
    }
    else { printf(" the number %d is zero", num);
    }
    }
   else { printf(" number %d is negative", num);
   }
    return 0;
}
