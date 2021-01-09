//输入一个两位数，将其显示为英文 
#include<stdio.h>
int main()
{int a,b,c;
 printf("Enter a two-digits number:");
 scanf("%d",&a);
 if(a<10||a>99)
 printf("Illegal number");
 else{
  printf("You enter the number:");
  c=a%10;
  b=(a-a%10)/10;
    if(b==1)
     switch (c){
      case 2: printf("Twelve");break;
      case 3: printf("Thirteen");break;
      case 4: printf("Fourteen");break;
      case 5: printf("Fifteen");break;
      case 6: printf("Sixteen");break;
      case 7: printf("Seventeen");break;
      case 8: printf("Eighteen");break;
      case 9: printf("Ninteen");break; 
  }
  
    else 
     switch (b){
 		case 2: printf("Twenty");break;
 		case 3: printf("Thirty");break;
 		case 4: printf("Fourteen");break;
        case 5: printf("Fifty");break;
        case 6: printf("Sixty");break;
        case 7: printf("Seventy");break;
        case 8: printf("Eighty");break;
        case 9: printf("Ninty");break; 
	 }
    	switch (c){
		case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Thiree");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eight");break;
        case 9: printf("Nine");break;
	}
	
	}
}
