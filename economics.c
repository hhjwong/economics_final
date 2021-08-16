#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int player=0;
    int com=0;
    int AP,BP,AC,BC;
    char command;
    for(int i=0;i<10;i++){
        AP=rand()%10+1;
        BP=rand()%10+1;
        AC=rand()%10+1;
        BC=rand()%10+1;
        printf("\tYou\tUn\n");
        printf("cookie\t");
        printf("%d\t",AP);
        printf("%d\n",AC);
        printf("cake\t");
        printf("%d\t",BP);
        printf("%d\n",BC);
        printf("unit: amount/0.5hr\n");
        printf("Which one will you make for this hour?\n    a) cookie\tb) cake\n");
        do{
            command=getchar();
        }while(command!='a'&&command!='b');
        if(command=='a'){
            player=player+AP*2+BC*2;
        }
        else{
            player=player+BP*2+AC*2;
        }
        com=com+AC+BC+AP+BP;
    }
    if(player>com){
        printf("you win!!!!\n");
    }
    else{
        printf("You lose!!!!\n");
    }
    printf("You: %d\nCom: %d\n",player,com);
    return 0;
}