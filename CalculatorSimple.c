#include<stdio.h>

void add(){
    int i,n;
    float sum=0,num;
    printf("\nEnter no of elements you need to add: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number %d: ",i);
        scanf("%f",&num);
        sum +=num;
    }
    printf("\nThe Sum is %.2f\n\n",sum);
}

void subtract(){
    int i,n;
    float sub=0,num;
    printf("\nEnter no of elements you need to subtract: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number %d: ",i);
        scanf("%f",&num);
        sub -=num;
    }
    printf("\nThe Difference is %.2f\n\n",sub);
}
void multiply(){
    int i,n;
    float product=1,num;
    printf("\nEnter no of elements you need to multiply: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number %d: ",i);
        scanf("%f",&num);
        product *=num;
    }
    printf("\nThe Product is %.2f\n\n",product);
}
void divide(){
    int i,n;
    float divide=1,num;
    printf("\nEnter no of elements you need to divide: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number %d: ",i);
        scanf("%f",&num);
        divide /=num;
    }
    printf("\nThe divided value is %.4f\n\n",divide);
}

void mean(){
    int i,n;
    float mean=0,sum=0,num;
    printf("\nEnter the no of elements that you need to find mean: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Enter the number %d: ",i);
        scanf("%f",&num);
        sum +=num;
    }
    mean=sum/n;
    printf("\nThe mean is %.2f\n\n",mean);
}

void power(){
    double base,result=1;
    int exp;
    printf("\nEnter the base: ");
    scanf("%lf",&base);
    printf("Enter the power or the exponent: ");
    scanf("%d",&exp);
    for (int i=1;i<=exp;i++){
        result*=base;
    }
    printf("The result is %.2f",result);
    
}


int main(){
    int choice;
    do{ 
    printf("\n\n----The Calculator----\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Mean\n6.Find power of an element\n0.Exit\n");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice);
    switch (choice){
        case 1: add();break;
        case 2: subtract();break;
        case 3: multiply();break;
        case 4: divide();break;
        case 5: mean();break;
        case 6: power();break;
        case 0: printf("Exit...\n\n\n");break;
        default: printf("Invalid Choice...\n\n\n");

    
} 
}
while(choice !=0);
    return 0;

}