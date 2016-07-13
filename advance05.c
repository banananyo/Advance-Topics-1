#include <stdio.h>
/*
Enter a number <1-9999> : 12345
out of range

Enter a number <1-9999> : 9213
nine thousands two hundred and thirteen

Enter a number <1-9999> : 309
three hundred and nine
*/
void main(){
    while(1){
        int num;
        printf("Enter a number <1-9999> : ");
        fflush(stdin);
        scanf("%d",&num);
        if(num>=1 && num<=9){
            sw1(num);
        }else if(num>=10 && num<=99){
            sw2(num);
        }else if(num>=100 && num<=999){
            int a=num/100, b=num%100;
            sw1(a);
            if(a!=0){
                printf(" hundred and ");
            }
            sw2(b);
        }else if(num>=1000 && num<= 9999){
            int a=num/1000, b=num/100%10, c=num%100;
            sw1(a);
            printf(" thousands ");
            sw1(b);
            if(b!=0){
                printf(" hundred ");
            }
            if(c!=0){
                printf("and ");
            }
            sw2(c);
        }else{
            printf("out of range\n");
        }
        printf("\n\n");
    }
}
void sw1(num){
    switch(num){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
    }
}
void sw2(num){
    if(num<10){
        sw1(num);
    }
    else if(num<20){
        switch(num){
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
            case 13: printf("thirteen"); break;
            case 14: printf("fourteen"); break;
            case 15: printf("fifteen"); break;
            case 16: printf("sixteen"); break;
            case 17: printf("seventeen"); break;
            case 18: printf("eighteen"); break;
            case 19: printf("nineteen"); break;
        }
	}else if(num<100){
	    int a=num/10,b=num%10;
        switch(a){
            case 2: printf("twenty "); break;
            case 3: printf("thirty "); break;
            case 4: printf("forty "); break;
            case 5: printf("fifty "); break;
            case 6: printf("sixty "); break;
            case 7: printf("seventy "); break;
            case 8: printf("eighty "); break;
            case 9: printf("ninety "); break;
        }
        sw1(b);
	}
}
