#include <math.h>
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int i = 0;
    int N=10;
    
  
    int randomizer = 0;
  
    srand((unsigned int)(time(NULL)));
  
    char numbers[] = "0123456789";
  
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
  
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
  
    char symbols[] = "!@#$^&*?";
  
    char password[N];
  
    randomizer = rand() % 4;
  
    for (i = 0; i < N; i++) {
  
        if (randomizer == 1) {
            password[i] = numbers[rand() % 10];
            printf("%c", password[i]);
        }
        else if (randomizer == 2) {
            password[i] = symbols[rand() % 8];
            printf("%c", password[i]);
        }
        else if (randomizer == 3) {
            password[i] = LETTER[rand() % 26];
            printf("%c", password[i]);
        }
        else {
            password[i] = letter[rand() % 26];
            printf("%c", password[i]);
        }
    }
}
  

