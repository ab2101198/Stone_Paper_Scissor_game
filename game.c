#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int generateRandomNumber(int n){
     srand(time(NULL)) ;
     int s = rand()%n ;
     return s ;
    
}

int main(){
    printf("***Welcome in the world of gaming***\n") ;
    char name[40] ; int count1 = 0 ; int count2 = 0 , n, j ,i , m ,d;
    printf("**Enter your name**\n") ;
    scanf("%s", name);
    printf("\n") ;
    printf("Welcome %s\n", name) ;
    printf("||The name of game is stone , paper and scissors and the rules are as follows\n\n") ;
    printf("*press 0 to choose stone*\n") ;  printf("*press 1 to choose paper*\n") ;  printf("*press 2 to choose scissor*\n") ;
    printf("If you will win any turn then you will get 2 points , if you loose you will get 0 point , In any other case you will get 1 point and same is true for robotics boy\n ") ;
    printf("\nEnter how many turn do you want to play\n") ;
    scanf("%d", &n) ;
    printf("If you want that first turn is your, press 3\n") ;
    scanf("%d",&j) ;
    for(i=0 ; i<n ; i++){
        if(j==3){
            printf("\nEnter your turn as per the instructions\n") ;
            scanf("%d", &m) ;
            if(m==0)
                printf("Means you have selected stone\n") ;
            if(m==1 ){
                printf("Means you have selected paper\n") ;
            }
            if(m==2 ){
                printf("Means you have selected scissor\n") ;
            }
            printf("\n$@  Its time for computer turn  @$\n") ;
            d = generateRandomNumber(3) ;
            printf("Robotics has selected %d\n", d ) ;
            if(d==0)
                printf("Means robot have selected stone\n") ;
            if(d==1 ){
                printf("Means robot have selected paper\n") ;
            }
            if(d==2 ){
                printf("Means robot have selected scissor\n") ;
            }
            if(m==d) {count1+=1 ; count2+=1 ; printf("\n\nThe current score of ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            if(m==0 && d== 1)  {count2+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
        
            if(m==0 && d==2 ) { count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            if(m==1 && d==0 )  {count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            if(m==1 && d == 2) {count2+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            if(m==2 && d == 0) {count2+=2 ;  printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            if(m==2 && d== 1)  { count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ; }
            
        }
        else{
          
          d = generateRandomNumber(3) ;
          printf("\nRobotics has selected %d\n", d ) ;
            if(d==0)
                printf("Means robot have selected stone\n") ;
            if(d==1 )
                printf("Means robot have selected paper\n") ;
            if(d==2 )
                printf("Means robot have selected scissor\n") ;
            printf("\nNow its your turn\n") ;
            printf("Enter your turn as per the instructions\n") ;
            scanf("%d", &m) ;
            if(m==0)
                printf("Means you have selected stone\n") ;
            if(m==1 ){
                printf("Means you have selected paper\n") ;
            }
            if(m==2 ){
                printf("Means you have selected scissor\n") ;
            }
        if(m==d) {count1+=1 ; count2+=1 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
        if(m==0 && d== 1)  {count2+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
        
        if(m==0 && d==2 )  {count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            
        if(m==1 && d==0 )  {count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            
        if(m==1 && d == 2) {count2+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            
        if(m==2 && d == 0) {count2+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
            
        if(m==2 && d== 1)  {count1+=2 ; printf("\n\nThe current score is ") ; printf("%s", name) ; printf(" is %d ", count1) ; printf(" And that of Robotic boy ") ; printf(" %d\n ", count2) ;}
            
       }
    }
    printf("\n                # THE GAME IS OVER #             \n") ;
    printf("\n******** NOW ITS TIME TO ANNOUNCE WINNER OF THE GAME ********\n") ;
    if(count1>count2){
        printf("\n        * The Name Of The Winner Is %s *", name) ;
    }
    else if(count1<count2){
        printf("\n* The Name Of The Winner Is ROBOTICS BOY *\n") ;
    }
    else{
        printf("            THE GAME IS TIE          ") ;
    }
    return 0 ;
}


