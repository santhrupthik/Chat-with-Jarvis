#include<stdio.h>
char x[30];
void main()
{
	 gets(x);
   printf("hello,this is Jarvis\n");
   while(1){
    get();
    printf("what's your name?\n");
    get();
    printf("I,d like to call you %s from now\n",x);
    printf("Let's talk about something interesting\n");
    if(strcmp(get(),"ok")==0){
        printf("ok,wat's ur fav song\n");
        printf("I too love that %s song\n",get());}
    else printf("lets be friends\n");
    if(strcmp(get(),"say a dialogue")==0)
        printf("if your bad i'm your dad\n");
        printf("do you like rocking star yash?");
    if(strcmp(get(),"yes")==0)
        printf("i'm also big fan of yash\n");
    else if(strcmp(x,"no")==0)
        printf("but he has big fan following\n");
    else
        printf("did you understand what iam talking");
         if(strcmp(get(),"sing a song")==0)
       printf("neeli neeli aakasham");
    if(strcmp(get(),"bye")==0)
        printf("good bye");
    else
        printf("i have some work bye");
    }
   }
   //char *get(void){
     //  gets(x);
       // return x;


