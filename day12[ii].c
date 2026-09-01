#include<stdio.h>
int main()
{
    /*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/
   int units, rate;
   printf("enter units:");
   scanf("%d", &units);

   if(units<=100){
    rate= units*5;
    printf("rate is %d", rate);
   }
   else if(units<=200){
    rate= (100*5) + (units-100)*7;
    printf("rate is %d", rate);   
}
    else if(units<=300){
        rate= (100*5)+(100*7)+(units-200)*10;
        printf("rate is %d", rate);
    }
    else{
        rate=(100*5)+(100*7)+(100)*10+(units-300)*12;
        printf("rate is %d", rate);
    }


}