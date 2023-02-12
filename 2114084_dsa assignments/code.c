#include <stdio.h>
#include<math.h>
 int main()
 {
 	int a=997,i,f=0,b;
    //scanf("%d",&a);
   	b = sqrt(a);
    for (i=2;i<=b;i++)
    {
    	if(a%i==0)
        {
        	f = 1;
            break;
        }
     }
     if(f == 0)
        {
        	printf("yyyyy");
        }
     else
        {
        	printf("NNNNNN");
        }
    return 0;
  }
  
/*int main() {
  int i;
  int sum;
  sum=0;
  for (i = 1; i <= 101; i = i + 2) {
    sum= sum+i;
    }
    printf("%d\n",sum);
  return 0;
}*/
/* int main(){
 int i=1;
 int sum=0;
 while(i<=101){
 
 sum=sum+i;
 i=i+2;
 }
 printf("%d\n",sum);
 return 0;
 }*/
 /*
 int main()
 {
 	int i=1;
 	int sum=0;
    	do
    	{
 			sum += i;
 			i += 2;
 		}
        while(i<=101);
        
 	printf("%d\n",sum);
 }*/
 #include <stdio.h>

int main() {
  int n=3;
  switch(n%2)
  {
  case 0:
  printf("the number is even");
  break;
  case 1:
  printf("the number is odd");
  break;
  }
  return 0;
  }
#include <stdio.h>

int main() {
  int myname=50;
  float pi=3.1343333;
  char cha='f';
  double no=2.2323232323;
  const int BIRTHYEAR = 1980;
  printf("%d\n", myname);
  printf("%f\n", pi);
  printf("%c\n", cha);
  printf("%1f\n", no);
  printf("%d\n", BIRTHYEAR);
 
  int sum1=200+250;
 int sum2=sum1+200;
 int sum3=sum2+sum1;
 int sub4=sum1-200;
 int sub5=sum1-sub4;
 int mul6=sum1*200;
 int mul7=mul6*sum1;
  float div8=sum1/250;
 float div9=div8/sum1;
 int rem10=sum1%250;
 int rem11=sum1%rem10;
 int inc12=++sum1;
 int dec13=--sum1;
 printf("%d\n", sum1);
 printf("%d\n",sum2);
 printf("%d\n", sum3); 
 printf("%d\n", sub4);
 printf("%d\n", sub5);
 printf("%d\n", mul6);
 printf("%d\n", mul7);
 printf("%f\n", div8);
 printf("%f\n", div9);
 printf("%d\n", rem10);
 printf("%d\n", rem11);
 printf("%d\n", inc12);
 printf("%d\n", dec13);
  int x=10;
  x +=5;
  x -=3;
  x *=10;
  x /=2;
  x %=3;
  int y=10&11;
   printf("%d\n",y);
int a1234=4;
printf("%d\n",a1234);
if (20 > 18) {
  printf("20 is greater than 18\n");
}
if (20 > 30) {
  printf("20 is greater than 30\n");
}
int a= 20;
int b = 18;
if (x > y) {
  printf("a is greater than b\n");
}
else{
printf("b is greater than a\n");
}
int time = 20;
if (time < 12) {
  printf("Good day\n");
} else {
  printf("Good evening.\n");
}
int t = 22;
if (t < 10) {
  printf("Good morning.\n");
} else if (t < 20) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}
int myNum = 10; // Is this a positive or negative number?

if (myNum > 0)
  printf("The value is a positive number.\n");
else if (myNum < 0)
  printf("The value is a negative number.\n");
else
  printf("The value is 0.\n");
  int time2 = 20;
(time2 < 18) ? printf("Good day.\n") : printf("Good evening.\n");
int day = 11;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
    default:
    printf("next week begins\n");
}
int i =105;

while (i < 124) {
  printf("%d\n", i);
  i++;
}
int j =105;
do {
  printf("%d\n", j);
  j++;
}
while (j < 124);
int k;


for (k =105; i < 124; k++) {
  printf("%d\n", k);
}
int l;
for (l = 0; l<= 10; l= l+ 2) {
  printf("%d\n", l);
}


 
 
 
 
 
 
 
 return 0;
 }
#include <stdio.h>

int main() {
  const int BIRTHYEAR = 1980;
  
  printf("%d", BIRTHYEAR);
  return 0;
}
#include <stdio.h>

int main() {
  int n=3;
  switch(n%2)
  {
  case 0:
  printf("the number is even");
  break;
  case 1:
  printf("the number is odd");
  break;
  }
  return 0;
  }
#include <stdio.h>
#include<math.h>
 int main()
 {
 	int a=997,i,f=0,b;
    //scanf("%d",&a);
   	b = sqrt(a);
    for (i=2;i<=b;i++)
    {
    	if(a%i==0)
        {
        	f = 1;
            break;
        }
     }
     if(f == 0)
        {
        	printf("yyyyy");
        }
     else
        {
        	printf("NNNNNN");
        }
    return 0;
  }
  
/*int main() {
  int i;
  int sum;
  sum=0;
  for (i = 1; i <= 101; i = i + 2) {
    sum= sum+i;
    }
    printf("%d\n",sum);
  return 0;
}*/
/* int main(){
 int i=1;
 int sum=0;
 while(i<=101){
 
 sum=sum+i;
 i=i+2;
 }
 printf("%d\n",sum);
 return 0;
 }*/
 /*
 int main()
 {
 	int i=1;
 	int sum=0;
    	do
    	{
 			sum += i;
 			i += 2;
 		}
        while(i<=101);
        
 	printf("%d\n",sum);
 }*/
 #include <stdio.h>

int main() {
  int myname=50;
  float pi=3.1343333;
  char cha='f';
  double no=2.2323232323;
  const int BIRTHYEAR = 1980;
  printf("%d\n", myname);
  printf("%f\n", pi);
  printf("%c\n", cha);
  printf("%1f\n", no);
  printf("%d\n", BIRTHYEAR);
 
  int sum1=200+250;
 int sum2=sum1+200;
 int sum3=sum2+sum1;
 int sub4=sum1-200;
 int sub5=sum1-sub4;
 int mul6=sum1*200;
 int mul7=mul6*sum1;
  float div8=sum1/250;
 float div9=div8/sum1;
 int rem10=sum1%250;
 int rem11=sum1%rem10;
 int inc12=++sum1;
 int dec13=--sum1;
 printf("%d\n", sum1);
 printf("%d\n",sum2);
 printf("%d\n", sum3); 
 printf("%d\n", sub4);
 printf("%d\n", sub5);
 printf("%d\n", mul6);
 printf("%d\n", mul7);
 printf("%f\n", div8);
 printf("%f\n", div9);
 printf("%d\n", rem10);
 printf("%d\n", rem11);
 printf("%d\n", inc12);
 printf("%d\n", dec13);
  int x=10;
  x +=5;
  x -=3;
  x *=10;
  x /=2;
  x %=3;
  int y=10&11;
   printf("%d\n",y);
int a1234=4;
printf("%d\n",a1234);
if (20 > 18) {
  printf("20 is greater than 18\n");
}
if (20 > 30) {
  printf("20 is greater than 30\n");
}
int a= 20;
int b = 18;
if (x > y) {
  printf("a is greater than b\n");
}
else{
printf("b is greater than a\n");
}
int time = 20;
if (time < 12) {
  printf("Good day\n");
} else {
  printf("Good evening.\n");
}
int t = 22;
if (t < 10) {
  printf("Good morning.\n");
} else if (t < 20) {
  printf("Good day.\n");
} else {
  printf("Good evening.\n");
}
int myNum = 10; // Is this a positive or negative number?

if (myNum > 0)
  printf("The value is a positive number.\n");
else if (myNum < 0)
  printf("The value is a negative number.\n");
else
  printf("The value is 0.\n");
  int time2 = 20;
(time2 < 18) ? printf("Good day.\n") : printf("Good evening.\n");
int day = 11;

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
    default:
    printf("next week begins\n");
}
int i =105;

while (i < 124) {
  printf("%d\n", i);
  i++;
}
int j =105;
do {
  printf("%d\n", j);
  j++;
}
while (j < 124);
int k;


for (k =105; i < 124; k++) {
  printf("%d\n", k);
}
int l;
for (l = 0; l<= 10; l= l+ 2) {
  printf("%d\n", l);
}


 
 
 
 
 
 
 
 return 0;
 }