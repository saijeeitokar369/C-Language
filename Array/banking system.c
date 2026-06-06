#include<stdio.h>
int main(){
  char name[50],address[100];
  long long int contact,adhar,account;
  int age,i,ch,count=0;
  printf("Enter your Name:");
  scanf("%s",&name);

  printf("Enter your contact Number:");
  scanf("%lld",&contact);

  printf("Enter your Address:");
  scanf("%s",&address);

  printf("Enter your Adhar Number:");
  scanf("%lld",&adhar);

  printf("Enter your Age:");
  scanf("%d",&age);
   if (age<18)
  {
    printf("\nsorry %s , you are not eligible to open a bank account.\n",name);
  }
  else
  {
    printf("\ncongratulations %s!!! you are eligible to open a bank account.\n",name);
    printf("\nEnter your Account Number:");
    scanf("%lld",&account);
  
    float amount,totaldeposit=0,totalwithdrow=0;
    float transaction[100];
    
     do
   {
    printf("\n========================");

    printf("\n1.Deposit");
    printf("\n2.withdrow");
    printf("\n3.account summary");
   
    printf("\n========================\n");
    
    printf("Enter your choice:");
    scanf("%d",&ch);
   
    switch (ch)
    {
    case 1:
         printf("\nEnter Deposit Amount:");
         scanf("%f",&amount);

         
           
         transaction[count]=amount;
         totaldeposit=totaldeposit+amount;
         count++;

         printf("\nDeposit successful\n");
      break;
      case 2:
         printf("\nEnter withdrow Amount:");
         scanf("%f",&amount);

        
           
         transaction[count]=-amount;
         totalwithdrow=totalwithdrow+amount;
         count++;

         printf("\nwithdrow successful\n");
      break;
      case 3:
           printf("\n====ACCOUNT SUMMARY====\n");
           printf("Name:%s\n",name);
           printf("Total Deposits:%f\n",totaldeposit);
           printf("Total Withdrowals:%f\n",totalwithdrow);
           printf("Total Transections:%d\n",count);
           printf("Total Amount:%f-%f:\n",totaldeposit-totalwithdrow);

           printf("\nTransection History:\n");
           for ( i = 0; i < count; i++)
           {
            printf("Transectoin %d:%f\n",i+1,transaction[i]);
           }
       break;
       default:
            printf("\nInvalid choice! Please try again.\n");
    }
  
  }while (ch!=3);
}
  
  
}