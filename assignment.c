# include <stdio.h>
int main(){
    char option;
    /*a-initialize an array,  b-prints the numbers in the array,
    c-calculates the sum of the numbers in the array, d-shows the minimum value in the array
    e-shows the minimum value in the array,  f-calculates the average
    g-displays a specific a number in a specific position,  h-prints end of program*/

    printf("Choose an option ['a','b','c','d','e','f','g','h']:");//The user chooses an option
    scanf("%c",&option);
    
    if (option=='a'){
        int x;
        int numbers[x];
         //enter a number between 0 and 50
        printf("How many numbers do you want to enter:");//User enters the size of the array
        scanf("%d",&x);
        printf("%d",x);
    }
    if (option=='b'){
        int x;
         printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        printf("\nEnter your numbers:");//User enters numbers to be stored in the array
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);//in the first interation the number in index 0 is printed then followed by the number in index 1 upto the last

        }
    }    
    if (option=='c'){
     int x;
         printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        //enter your numbers eg:1 2 3...
        printf("\nEnter your numbers:");
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);
        }
        //determine the maximum    
        int Max=numbers[0];//The initial maximum value is the one in index 0
        for(int r=1;r<x;r++){
            if(Max < numbers[r])//in the first interation the maximum value is compared with the value in index 1
               Max = numbers[r];//if the value in index 1 is greater then it becomes the new maximum value and it continues comparing          
        }
        printf("\ncThe maximum is %d",Max);
    }    
    if (option=='d'){
     int x;
         printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        //enter your numbers eg:1 2 3...
        printf("\nEnter your numbers:");
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);
        }
        //determine the minmum    
        int Min=numbers[0];//The initial maximum value is the one in index 0
        for(int r=1;r<x;r++){
            if(Min > numbers[r])//in the first interation the minimum value is compared with the value in index 1
               Min = numbers[r];//if the value in index 1 is greater then it becomes the new maximum value and it continues comparing                
        }
        printf("\ncThe minmum is %d",Min);
    }    
    if (option=='e'){
     int x;
         printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        //enter your numbers eg:1 2 3...
        printf("\nEnter your numbers:");
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);
        }

        int sum= numbers[0];//The initial value of sum is the number in index 0
        for (int r=1; r<x;r=r+1 ){
            sum = sum + numbers[r];//in the first interation the sum is added to the value in index 1 and the new sum is generated
        }
        printf("\nThe sum is %d",sum);
    }
    if (option=='f'){
        int x;
        printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        //enter your numbers eg:1 2 3...
        printf("\nEnter your numbers:");
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);
        }
        int sum = numbers[0];
        for (int r=1; r<x;r=r+1){
            sum = sum + numbers[r];
        }
        double average = sum/x;
        printf("\nThe average is %d",average);

    }
    if (option== 'g'){
        int x;
        printf("How many numbers do you want to enter:");
        scanf("%d",&x);
        printf("%d",x);
        
        int numbers[x];
        //enter your numbers eg:1 2 3...
        printf("\nEnter your numbers:");
        for (int i=0;i<x; i++){
            scanf("%d",&numbers[i]);
            printf("%d ",numbers[i]);
        }
        int j;
        printf("\nThe position of the number you want to: ");//user the index of the number he wants
        scanf("%d",&j);

        if (j>=0 && j<x)
        {
            int position = numbers[j];//the position variable is equitted the value in that position
            printf("\nThe number in that position is %d",position);
        }
        else{
            printf("\nThis value is not there");
        }

    }
    if (option=='h')
    {
        printf("END OF PROGRAME");
    }
    return 0;
}