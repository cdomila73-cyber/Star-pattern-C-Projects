#include<stdio.h>
int left();
int right();
int center();
int cross();
int Lpyra();
int Rpyra();
int main(){
int b;
do{
printf("Hello welcome to star pattern genarator...\n");
printf("Which patter do you want:\n"); //From this part the user will allow to Select the pattern they need
printf("1.left alligned pattern\n2.Right alligned pattern\n3.Center alligned pattern.\n4.Cross sign\n5.Left Pyramid\n6.Right Pyramid\n");
printf("Enter the relavent number: ");
scanf("%d",&b);
switch (b){ //This switch function will choose the pattern's function
case 1:
    left();
    break;
case 2:
    right();
    break;
case 3:
    center();
    break;
case 4:
    cross();
    break;
case 5:
    Lpyra();
    break;
case 6:
    Rpyra();
    break;
}
}while(b==1||b==2||b==3||b==4||b==5||b==6);
}
int left(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<=a;i++){
      for(j=1;j<=i;j++){
        printf("*");
      }
      printf("\n");
}
return 0;
}
int right(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<=a;i++){
    for(j=1;j<=a;j++){
        if(i+j>a){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
int center(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<=a;i++){
    for(j=1;j<=a-i;j++){
        printf(" ");
    }
    for(j=1;j<=(2*i-1);j++){
        printf("*");
    }
    printf("\n");
}
return 0;
}
int cross(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<=a;i++){
    for(j=1;j<=a;j++){
        if(i==j||i+j==1+a){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
int Lpyra(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<a;i++){
    for(j=1;j<=i;j++){
            printf("*");
        }
     printf("\n");
    }
for(i=a;i>0;i--){
    for(j=0;j<i;j++){
        printf("*");
    }
printf("\n");
}

return 0;
}
int Rpyra(){
int a,i,j;
printf("Enter the number of lines you want:");
scanf("%d",&a);
for(i=1;i<=a;i++){
    for(j=1;j<=a;j++){
        if(j==a||i+j>a){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
for(i=(a-1);i>0;i--){
    for(j=1;j<=a;j++){
        if(j==a||i+j>a){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
