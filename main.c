#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//7 programmes of LAB2

int main(int argc, char *argv[]) {
	int choice;
	do{
		printf(" Welcome to LAB2_LinhNPHE190314| Choose a program :\n");
		printf("1. Program 1\n");
		printf("2. Program 2\n");
		printf("3. Program 3\n");
		printf("4. Program 4\n");
		printf("5. Program 5\n");
		printf("6. Program 6\n");
		printf("7. Program 7\n");
		printf("0. Exit\n");
		printf("---------------------------\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		// su dung switch case
		switch(choice){
		    case 1: 
				bai1();
				break;
		    case 2: 
				bai2();
				break;
		    case 3: 
		    	bai3();
				break;
		    case 4: 
		    	bai4();
				break;
			case 5: 
		    	bai5();
				break;
			case 6: 
		    	bai6();
				break;
			case 7: 
		    	bai7();
				break;
		    case 0: printf("See you again !");break;
		    default: printf("Invalid value\n");break;
		} 
	}while(choice!=0);
	return 0;
}

int bai1(){
	double n1,n2;
	char op;
	double res;
	printf("Enter an expression: ");
	scanf("%lf%c%lf",&n1,&op,&n2);
	switch(op){
		case '+': 
			res = n1+n2;
			printf("Result: %d",res);
			break;
		case '-': 
			res = n1-n2;
			printf("Result: %d",res);
			break;
		case '*': 
			res = n1*n2;
			printf("Result: %d",res);
			break;
		case '/': 
			res = n1/n2;
			printf("Result: %d",res);
			break;
		
	}
}

int bai2(){
	int n;
	long long pa,pd,ti,tf,it,inc;
	pa=9000000;
	pd=3600000;
	int choice;
	printf("Yearly Personal Income Tax\n");
    printf("---------------------------\n");
	do{
		printf("Your income of this year: ");
		scanf("%ld",&inc);
		printf("Number of dependent: ");
		scanf("%d",&n);
		tf=12*(pa+n*pd);
		printf("Tax-free income: %ld\n",tf);
		ti = inc-tf;
		if(ti<=0){
			ti=0;
			it=0;
			printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
		}else if(ti> 0 && ti <= 5000000){
			it=ti*0.05;
			printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
		}else if(ti> 5000000 && ti <= 10000000){
			it=5000000*0.05+(ti-50000000)*0.1;
			printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
		}else if(ti> 10000000 && ti <= 18000000){
			it=5000000*0.05+5000000*0.1+(ti-100000000)*0.15;
			printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
		}else if(ti>18000000){
			it=5000000*0.05+5000000*0.1+80000000*0.15+(ti-18000000)*0.2;
			printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
		}
		printf("Enter 0 to continue? ");
		scanf("%d",&choice);
	}while(choice==0);
	return 0;
}

int bai3(){
	int x,res;
	printf(" Calculator|Sum\n");
    printf("---------------------------\n");
    do{
        printf("Enter a number: ");
        scanf("%d",&x);
        //Tinh tong cac so nhap vao
		res=res+x;        
    }while(x!=0);
	printf("Result is : %d\n",res);
    return 0;
}

int bai4(){
	int x,y,s;
	printf("Swap 2 intergers value\n");
    printf("---------------------------\n");
    do{
        printf("Enter number 1: ");
        scanf("%d",&x);
        printf("Enter number 2: ");
        scanf("%d",&y);
        s=x;
		x=y;
		y=s;
		printf("New values: %d %d",x,y);        
    }while(x!=0 && y!=0);
    return 0;
}

bai5(){
	int v,con=0,o;
	char ch;
	printf("Print number of vowels, consonants,..\n");
    printf("---------------------------\n");
    
    do{
    	printf("Enter a character: ");
        fflush(stdin);
        scanf("%c",&ch);
        ch = toupper(ch);
        if(ch>='A'&&ch<='Z'){
			switch(ch){
				case'A':v++;break;
				case'E':v++;break;
				case'I':v++;break;
				case'U':v++;break;
				case'O':v++;break;
				default: con++;
			}
		}else{
			o++;
		}
    }while(ch != '\n');
	printf("Number of Vowels: %d\n", v);
	printf("Number of Consonants: %d\n", con);
	printf("Number of Others: %d\n", o);
}

bai6(){
	int code;
	printf("C program that will print out the ASCII code table.\n");
    printf("---------------------------\n");
    for (code = 1; code <= 255; code++)
		{
			printf("%5c, %5d, %5o, %5X\n", code, code, code, code);
        if (code !=0 && code %20==0) getchar();
		}
}

bai7(){
	char c1,c2,t;
	int d;
	printf("C program that will print out the ASCII code table.\n");
    printf("---------------------------\n");
	printf("Input c1: \n");
	scanf("%c",&c1);
	printf("Input c2: \n");
//	fflush(stdin);
	scanf("%c", &c2);
	if (c1 > c2) {
	t=c1;
	c1=c2;
	c2=t;
	}
	d = c2 - c1;
	printf("%d\n", d);
	for (d = c1; d <= c2; d++)
		printf("%5c, %5d, %5o, %5X\n", d, d, d, d);
}
