//Parking Fee System Based on vehicle type and hours parked:(Bike → ₹10/hour,Car → ₹20/hour
//Bus → ₹50/hour) If time > 5 hours, add ₹50 fine.
//Use switch + if combo.
#include<stdio.h>
void main(){
    float time;
    char vehicle;
    printf("Enter Vehical Name:");
    scanf("%s",&vehicle);
    printf("Enter time in hours:");
    scanf("%f",&time);
    switch (vehicle)
    {
    case 'b':
        if (time>=5)
        {
            printf("Amount of parking of bike with fine:%f",time*10+50);
        }
        else
        {
            printf("Amount of parking of bike:%f",time*10);
        }
         break;
    case 'c':
        if (time>=5)
        {
            printf("Amount of parking of car with fine:%f",time*20+50);
        }
        else
        {
            printf("Amount of parking of car:%f",time*20);
        }
        break;
    case 'B':
        if (time>=5)
        {
            printf("Amount of parking of bus with fine:%f",time*50+50);
        }
        else
        {
            printf("Amount of parking of bus:%f",time*50);
        }
         break;
    
    default: 
            printf("other vehicle are not allow");
       
    }
}
