#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void animal();
void food();
void sport();
void country();
int main()
{
	char c;
	int ch;
	printf("\n\n*******************************WELCOME TO HANGMAN*******************************");
	printf("\n\n RULES:\n\n i.Enter the letters in lower case. \n ii.Use the hint for answers.\n iii.7 chances for each word.");
	printf("\n\n Do you want to play?[y/n]:");
	scanf("%c",&c);
	if(c=='y')
	{
	   
		n: printf("\n\n 1.Animal \t 2.Food \t 3.Sports \t 4.Country \t 5.Exit");
		fflush(stdin);
		printf("\n\n Choose your favourite topic[1/2/3/4/5]:");
		scanf("%d",&ch);
		switch(ch)
		{ 
		   case 1:
		   	{
		   		printf("\n\n You have chosen 'Animal'. ");
		   		animal();
		   		break;
			}
		   case 2:
		   	{
		   		printf("\n\n You have chosen 'Food'. ");
		   		food();
		   		break;
			}
		   case 3:
		   	{
		   		printf("\n\n You have chosen 'Sport'. ");
		   		sport();
		   		break;
			}
		   case 4:
		   	{
		   		printf("\n\n You have chosen 'Country'. ");
		   		country();
		   		break;
			}
		   case 5:
		   	{
		   	      printf("\n\n Please visit us again!!!");
		   		break;
			}
		   default:
		   	{
		   	      printf("\n\n Your option is incorrect.Please choose correctly[1/2/3/4]:");
		   	      goto n;
			      	
		      }
		}
	}
	else if(c=='n')
	{
		printf("\n Please visit us again!!!");
	}
}
void animal()
{
	int i,j,k,l,m,n;                         
	int guess=0,answer=0,count=7,check;
	//int *p1;
	char option,option_2,option_3,c;
	char word[5][7]={"wolf","lion","camel","tiger","fox"};
	char user[5],ch;
	char h='_';    
	for(n=0;n<5;n++)    
	{
		guess=0,answer=0,count=7;
	      l=strlen(&word[n][0]);
	      m=l;
	      system("CLS");
	      printf("\n\n*******************************LET's START*********************************");
	      printf("\n\n Do you want hint(y/n):");
	      fflush(stdin);
		scanf("%c",&ch);
		if(ch=='y')
		{
		      if(n==0)
			{
			    printf("\n\n Hint:The largest members of the dog family");	
			} 
			else if(n==1)
			{
			    printf("\n\n Hint: Highly territorial and occupy the same area for generation.");
			}                          
			else if(n==2)
			{
				printf("\n\n Hint: A animal which is found in desert.");
			}
			else if(n==3)          
			{
				printf("\n\n Hint: Territorial and usually solidarity in nature.");
			}
			else if(n==4)
			{
				printf("\n\n Hint: Can be friendly and do not pose much of threat to humans or house pets");
			}
		}
			else{
			printf("\nYou choose to not use hint.");
		}
			
	      //printf("%d",l);
	      printf("\n\n\t\t\t*************************\n");
	      printf("\n\n\t\t\t");
	      //for(k=0;k<5;k++)
	      //{
		      //r=hint(w);
		      //printf("\n Hint:%s",r);
	   	      for(i=0;i<l;i++)
	   	      {
	   		      printf("%4c",h);
	   		      user[i]=h;
		      } 
		//printf("%c",w[n][10]);
	      printf("\n\n\t\t\t*************************\n");
	      while(guess<8)
	      {
	      	fflush(stdin);
		      printf("\n\n Enter your guess character:");
		      scanf("%c",&c);
		      check=answer;
		      for(i=0;i<l;i++)
		      {
			      if(c==word[n][i])
			      {
				      user[i]=word[n][i];
				      answer++;
			      }
				fflush(stdin);     
		      }
		      printf("\n\t\t\t**************************\n");
		      printf("\n\n\t\t\t");
		      for(i=0;i<l;i++)
		      {
		      	fflush(stdin); 
			      printf("%4c",user[i]);
		      }
		      printf("\n");
		      printf("\n\t\t\t***************************\n");
		      if(check<answer)
		      {
		            printf("\n\n Your guess %c is correct.",c);
			      fflush(stdin); 
			      printf("\n\n Chances you have:%d",count);
			      fflush(stdin); 
			      printf("\n\n Your need %d words.",l-answer);
			}
		      else 
		      {
			      guess++;
			      count--;
				printf("\n\n Your guess %c is wrong.",c);
		            fflush(stdin); 
		            printf("\n\n Chances you have left:%d",count);	
		      }
		      if(guess==7||answer==l)
		      {
		      	break;
			}
		}
	
	      if(l==answer)
	      {
		      printf("\n\n CONGRATS!!!You won.");
		      //delay(50000);
		      printf("\n\n Do you want to continue?[y/n]:");
		      scanf("%c",&option);
		      if(option!='y')
		      {
		            printf("\n\n GAME OVER!!!");
				break;	
		      }
		      
		}
	      else
	      {
		      printf("\n\n You are hanged!!!");
		      printf("\n\n Do you want to know correct word?(y/n):");
		      scanf("%c",&option_3);
		      if(option_3=='y')
		      {
		      	printf("\n\t");
		      	printf("\n The correct word is:");
		      	for(i=0;i<m;i++)
		      	{
		      		printf("%c",word[n][i]);
				}
			}
		      printf("\n\n Do you want to try again?[y/n]:");
		      fflush(stdin);
		      scanf("%c",&option_2);
		      if(option_2!='y')
		      {
			     printf("\n\n GAME OVER!!!");
			     break;
		      }
            }
            fflush(stdin); 
            //clscr();
      }
}
void food()
{
	int i,j,k,l,m,n;
	int guess=0,answer=0,count=7,check;
	int *p1;
	char ch;
	char option,option_2,option_3,c;
	char word[5][9]={"corn","fish","bacon","ketchup","doughnut"};
	char user[5];
	char h='_';
	for(n=0;n<5;n++)
	{
		guess=0,answer=0,count=7;    
	      l=strlen(&word[n][0]);
	      m=l;
	      system("CLS");
	      printf("\n\n*******************************LET's START*********************************");
	      printf("\n\n Do you want hint(y/n):");
	      fflush(stdin);
		scanf("%c",&ch);
		if(ch=='y')
		{
		      if(n==0)
			{
			    printf("\n\n Hint: Remove the outside,\n\t cook the inside, eat the outside,\n\t throw away the inside. ");	
			} 
			else if(n==1)
			{
			    printf("\n\n Hint: Alive without breath, As cold as death; \n\tNever thirsty, ever drinking,\n\t All in mail never clinking.");
			}
			else if(n==2)
			{
				printf("\n\n Hint: What stinks when living and smells good when dead?");
			}
			else if(n==3)
			{
				printf("\n\n Hint:  I always try my best to keep up with barbecue sauce and mustard.\n\t What am I?");
			}
			else if(n==4)
			{
				printf("\n\n Hint: I have no beginning, middle or end, \n\tbut somehow people manage to eat me.\n\t What am I? ");
			}
		}
		else{
			printf("\nYou choose to not use hint.");
		}
			
	      //printf("%d",l);
	      printf("\n\n\t\t\t*************************\n");
	      printf("\n\n\t\t\t");
	      //for(k=0;k<5;k++)
	      //{
		      //r=hint(w);
		      //printf("\n Hint:%s",r);
	   	      for(i=0;i<l;i++)
	   	      {
	   		      printf("%4c",h);
	   		      user[i]=h;
		      } 
		//printf("%c",w[n][10]);
	      printf("\n\n\t\t\t*************************\n");
	      while(guess<8)
	      {
	      	fflush(stdin);
		      printf("\n\n Enter your guess character:");
		      scanf("%c",&c);
		      check=answer;
		      for(i=0;i<l;i++)
		      {
			      if(c==word[n][i])
			      {
				      user[i]=word[n][i];
				      answer++;
			
			      }
				fflush(stdin);     
		      }
		      printf("\n\t\t\t**************************\n");
		      printf("\n\n\t\t\t");
		      for(i=0;i<l;i++)
		      {
		      	fflush(stdin); 
			      printf("%4c",user[i]);
		      }
		      printf("\n");
		      printf("\n\t\t\t***************************\n");
		      if(check<answer)
		      {
		            printf("\n\n Your guess %c is correct.",c);
			      fflush(stdin); 
			      printf("\n\n Chances you have:%d",count);
			      fflush(stdin); 
			      printf("\n\n You need  %d words.",l-answer);
			}
		      else 
		      {
			      guess++;
			      count--;
				printf("\n\n Your guess %c is wrong.",c);
		            fflush(stdin); 
		            printf("\n\n Chances you have left:%d",count);	
		      }
		      if(guess==7||answer==l)
		      {
		      	break;
			}
		}
	
	      if(l==answer)
	      {
		      printf("\n\n CONGRATS!!!You won.");
		      //delay(50000);
		      printf("\n\n Do you want to continue?[y/n]:");
		      scanf("%c",&option);
		      if(option!='y')
		      {
		            printf("\n\n GAME OVER!!!");
				break;	
		      }
		      
		}
	      else
	      {
		      printf("\n\n You are hanged!!!");
		      printf("\n\n Do you want to know correct word?(y/n):");
		      scanf("%c",&option_3);
		      if(option_3=='y')
		      {
		      	printf("\n\t");
		      	printf("\n The correct word is:");
		      	for(i=0;i<m;i++)
		      	{
		      		printf("%c",word[n][i]);
				}
			}
			fflush(stdin);
		      printf("\n\n Do you want to try again?[y/n]:");
		      fflush(stdin);
		      scanf("%c",&option_2);
		      if(option_2!='y')
		      {
			     printf("\n\n GAME OVER!!!");
			     break;
		      }
            }
            fflush(stdin); 
            //clscr();
      }
}
void sport()
{
	int i,j,k,l,m,n;
	int guess=0,answer=0,count=7,check;
	int *p1;
	char option,option_2,option_3,c,ch;
	char word[5][10]={"golf","chess","judo","volleyball","archery"};
	char user[5];
	char h='_';
	for(n=0;n<5;n++)
	{
		guess=0,answer=0,count=7;
	      l=strlen(&word[n][0]);
	      m=l;
	      system("CLS");
	      printf("\n\n*******************************LET's START*********************************");
	      printf("\n\n Do you want hint(y/n)?:\n");
	      fflush(stdin);
	      scanf("%c",&ch);
	      if(ch=='y')
	      {
		   
		    if(n==0)
			{
			    printf("\n\n Hint: Played for the lowest number of strokes by an individual.");	
			} 
			else if(n==1)
			{
			    printf("\n\n Hint: Known as 'royal game'.");
			}
			else if(n==2)
			{
				printf("\n\n Hint: Was created in 1882 as an eclectic matrial art.");
			}
			else if(n==3)
			{
				printf("\n\n Hint: Originally known as 'mintonette'.");
			}
			else if(n==4)
			{
				printf("\n\n Hint: Considered as an anaerobic sport.");
			}
		}
		else
		{
		   	printf("\nYou choose not to use hint.");
		}
	      printf("\n\n\t\t\t*************************\n");
	      printf("\n\n\t\t\t");
	   	for(i=0;i<l;i++)
	   	{
	   		printf("%4c",h);
	   		user[i]=h;
		} 
	      printf("\n\n\t\t\t*************************\n");
	      while(guess<8)
	      {
	            fflush(stdin);
		      printf("\n\n Enter your guess character:");
		      scanf("%c",&c);
		      check=answer;
		      for(i=0;i<l;i++)
		      {
			      if(c==word[n][i])
			      {
				    user[i]=word[n][i];
				    answer++;
			      }
				fflush(stdin);     
		      }
		      printf("\n\t\t\t**************************\n");
		      printf("\n\n\t\t\t");
		      for(i=0;i<l;i++)
		      {
		      	fflush(stdin); 
			      printf("%4c",user[i]);
		      }
		      printf("\n");
		      printf("\n\t\t\t***************************\n");
		      if(check<answer)
		      {
		            printf("\n\n Your guess %c is correct.",c);
			      fflush(stdin); 
			      printf("\n\n Chances you have:%d",count);
			      fflush(stdin); 
			      printf("\n\n Your need %d words.",l-answer);
			}
		      else 
		      {
			      guess++;
			      count--;
				printf("\n\n Your guess %c is wrong.",c);
		            fflush(stdin); 
		            printf("\n\n Chances you have left:%d",count);	
		      }
		      if(guess==7||answer==l)
		      {
		      	break;
			}
		}
	      if(l==answer)
	      {
		      printf("\n\n CONGRATS!!!You won.");
		      printf("\n\n Do you want to continue?[y/n]:");
		      scanf("%c",&option);
		      if(option!='y')
		      {
		            printf("\n\n GAME OVER!!!");
				break;	
		      }  
		}
	     else
	      {
		      printf("\n\n You lost!!!");
			printf("\n\n You are hanged!!!");
			 printf("\n\n Do you want to know correct word?(y/n):");
		      scanf("%c",&option_3);
		      if(option_3=='y')
		      {
		      	printf("\n\t");
		      	printf("\n The correct word is:");
		      	for(i=0;i<m;i++)
		      	{
		      		printf("%c",word[n][i]);
				}
			}
			fflush(stdin);
		      printf("\n\n Do you want to try again?[y/n]:");
		      scanf("%c",&option_2);
		      if(option_2!='y')
		      {
			      printf("\n\n GAME OVER!!!");
			      break;
		      }
            }  
            fflush(stdin); 
      }
}
void country()
{
	int i,j,k,l,m,n;
	int guess=0,answer=0,count=7,check;
	int *p1;
	char option,option_2,option_3,c,ch;
	//char w[5][10]={"Asia","Europe","Africa","Antartica","America"};
	char word[5][7]={"china","nepal","cuba","india","vietnam"};
	char user[5];
	char h='_';
	for(n=0;n<5;n++)
	{
		guess=0,answer=0,count=7;
	      l=strlen(&word[n][0]);
	      m=l;
	      system("CLS");
	      printf("\n\n*******************************LET's START*********************************");
	      printf("\n\n Do you want hint(y/n):");
	      fflush(stdin);
		scanf("%c",&ch);
		if(ch=='y')
		{
	            if(n==0)
		      {
		 	      printf("\n\n Hint: A country one of the oldest language is spoken.");	
		      } 
		      else if(n==1)
		      {
			      printf("\n\n Hint: A country which was always independent.");
		      }
		      else if(n==2)
		      {
			      printf("\n\n Hint: A country known as 'Country of sugar'");
		      }
		      else if(n==3)
		      {
			      printf("\n\n Hint: A country of longest constitution in the world");
		      }
		      else if(n==4)
		      {
			printf("\n\n Hint: A country which has high biodiversity");
		      }
	      }
	      //printf("%d",l);
	      printf("\n\n\t\t\t*************************\n");
	      printf("\n\n\t\t\t");
	      //for(k=0;k<5;k++)
	      //{
		      //r=hint(w);
		      //printf("\n Hint:%s",r);
	   	      for(i=0;i<l;i++)
	   	      {
	   		      printf("%4c",h);
	   		      user[i]=h;
		      } 
		//printf("%c",w[n][10]);
	      printf("\n\n\t\t\t*************************\n");
	      while(guess<8)
	      {
	      	fflush(stdin);
		      printf("\n\n Enter your guess character:");
		      scanf("%c",&c);
		      check=answer;
		      for(i=0;i<l;i++)
		      {
			      if(c==word[n][i])
			      {
				      user[i]=word[n][i];
				      answer++;
			
			      }
				fflush(stdin);     
		      }
		      printf("\n\t\t\t**************************\n");
		      printf("\n\n\t\t\t");
		      for(i=0;i<l;i++)
		      {
		      	fflush(stdin); 
			      printf("%4c",user[i]);
		      }
		      printf("\n");
		      printf("\n\t\t\t***************************\n");
		      if(check<answer)
		      {
		            printf("\n\n Your guess %c is correct.",c);
			      fflush(stdin); 
			      printf("\n\n Chances you have:%d",count);
			      fflush(stdin); 
			      printf("\n\n Your need %d words.",l-answer);
			}
		      else 
		      {
			      guess++;
			      count--;
				printf("\n\n Your guess %c is wrong.",c);
		            fflush(stdin); 
		            printf("\n\n Chances you have left:%d",count);	
		      }
		      if(guess==7||answer==l)
		      {
		      	break;
			}
		}
	
	      if(l==answer)
	      {
		      printf("\n\n CONGRATS!!!You won.");
		      //delay(50000);
		      printf("\n\n Do you want to continue?[y/n]:");
		      scanf("%c",&option);
		      if(option!='y')
		      {
		            printf("\n\n GAME OVER!!!");
				break;	
		      }
		      
		}
	      else
	      {
		      printf("\n\n You are hanged!!!");
		      printf("\n\n Do you want to know correct word?(y/n):");
		      scanf("%c",&option_3);
		      if(option_3=='y')
		      {
		      	printf("\n\t");
		      	printf("\n The correct word is:");
		      	for(i=0;i<m;i++)
		      	{
		      		printf("%c",word[n][i]);
				}
			}
			fflush(stdin);
		      printf("\n\n Do you want to try again?[y/n]:");
		      fflush(stdin);
		      scanf("%c",&option_2);
		      if(option_2!='y')
		      {
			     printf("\n\n GAME OVER!!!");
			     break;
		      }
            }
            fflush(stdin); 
            //clscr();
      }
}
