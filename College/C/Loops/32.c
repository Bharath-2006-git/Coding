// To implement the following situation
// Users is playing a game having five levels 
// To cross each level, points should be more than 70
// If player crosses all five levels then display congrats you won the game
// If his points are less than 70 he can't continue the game and display
// Failed in 'level number' level 



#include <stdio.h>
int  main(){
    int i,p;
    for(i=1;i<=5;i++){
        printf("Enter score in level %d:",i);
        scanf("%d",&p);
        if(p<70)
        break;
    }
    if(i<=5)printf("Failed in %d Better luck next time",i);
    else printf("Congrats you won the game");
}


// Use continue to play failed level again and again

// #include <stdio.h>
// int  main(){
//     int i,p;
//     i=1;
//     while(i<=5){
//         printf("Enter score in level %d:",i);
//         scanf("%d",&p);
//         if(p<70)
//         continue;
//         i++;
//     }
//     printf("Congrats you won the game");
// }


// Write same code without continue



// #include <stdio.h>
// int  main(){
//     int i,p;
//     i=1;
//     while(i<=5){
//         printf("Enter score in level %d:",i);
//         scanf("%d",&p);
//         if(p>70)
        
//         i++;
//     }
//     printf("Congrats you won the game");
// }