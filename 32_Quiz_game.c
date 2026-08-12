#include <stdio.h> 
#include <ctype.h>

int main(){

    char questions [][100] = {"Who is short in our group?",
                               "Who acts like a gay but is straight?"
                            };

    char options [][100] = {"A. Aravind\nB. Jimmy\nC. Malware\nD. Ronny",
                            "A. Aravind\nB. Jimmy\nC. Malware\nD. Ronny"
                            };
                            
    char answerKey[] = {'A','C'};

    int questioncount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;
    printf("***Quiz Game***\n");

    for (int i = 0 ; i <questioncount; i++){
        printf("\n%s\n",questions[i]);
        printf("\n%s\n",options[i]);
        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]){
            printf("CORRECT!!!\n");
            score++;
        }
        else{
            printf("WRONG!!!");
        }
    }
    printf("Your socre is %d" , score);
    return 0 ;
}