#include <stdio.h>

int main() {
    int N; 
    int num; 
    int min_val; 
    int max_val; 

   
    scanf("%d", &N);

   
    scanf("%d", &num);

   
    min_val = num;
    max_val = num;

   
    for (int i = 1; i < N; i++) {
        scanf("%d", &num); 

      
        if (num < min_val) {
            min_val = num;
        }

       
        if (num > max_val) {
            max_val = num;
        }
    }

    
    printf("%d %d\n", min_val, max_val);

    return 0;
}