#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
void scoreBoard();
void about();
void update_score(char [],float);
int main()
{
	float score;
	char playername[20];
	int choice;
	int count=0;
	
	index:
		system("cls");
	printf("\t ************Welcome chosen one************\n\n");
	printf("\t\t press S to start the game\n\n");
	printf("\t\t press H to view ScoreBoard\n\n");
	printf("\t\t press W to view about\n\n");
	printf("\t\t press E to exit\n");
	choice = toupper(getch());
	if(choice == 'H' )
	{
		scoreBoard();
		getch();
		goto index;
	}
	else if(choice=='E')
	{
		exit(0);
	}
	else if(choice == 'W')
	{
		about();
		getch();
		goto index;
	}
	else if(choice == 'S')
	{
		system("cls");
		printf("enter your name:");
		gets(playername);
		system("cls");
		printf("\t ************note to be read************\n\n");
		printf("\t\t each question contains 4 choices choosing right answer gives you 10 points\n\n");
		printf("\t\t wrong answer doesnt give you any penalty\n\n");
		printf("\t\t press R to continue to go to main menu press any other key");
		choice = toupper(getch());
		if(choice == 'R')
		{
			goto quiz;
		}
		else
		{
			system("cls");
			goto index;
		}
		quiz:
		system("cls");
		for(int i=1;i<=10;i++)
		{
			int ch=i;
			switch(ch)
			{
				case 1:
				{
					printf("How many finger does hands contain\n");
					printf("A.10\t\tB.20\nC.5\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'A')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 2:
				{
					printf("How many stars does our solar system contain\n");
					printf("A.10\t\tB.20\nC.5\t\tD.1\n");
					choice = toupper(getch());
					if(choice == 'D')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 3:
				{
					printf("How many planets does our solar system contain\n");
					printf("A.10\t\tB.9\nC.5\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'B')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 4:
				{
					printf("How many days are in a week\n");
					printf("A.10\t\tB.20\nC.5\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'D')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 5:
				{
					printf("Which animal is known as 'ship of the desert'\n");
					printf("A.Camel\t\tB.Donkey\nC.Elephant\t\tD.Whale\n");
					choice = toupper(getch());
					if(choice == 'A')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 6:
				{
					printf("How many letters are there in the english alphabet\n");
					printf("A.10\t\tB.20\nC.26\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'C')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 7:
				{
					printf("How many vowels are there in English Alphabet\n");
					printf("A.10\t\tB.5\nC.21\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'B')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 8:
				{
					printf("How many continents are there in the world\n");
					printf("A.10\t\tB.20\nC.5\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'D')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 9:
				{
					printf("Sun rises in?\n");
					printf("A.East\t\tB.West\nC.North\t\tD.South\n");
					choice = toupper(getch());
					if(choice == 'A')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
					break;
					}
				}
				case 10:
				{
					printf("How many sides are there in a triangle\n");
					printf("A.10\t\tB.3\nC.5\t\tD.7\n");
					choice = toupper(getch());
					if(choice == 'B')
					{
						printf("Right Answer :)");
						getch();
						count++;
						system("cls");
						goto scoreFinder;
						break;
					}
					else
					{					
					printf("Wrong answer :(");
					getch();
					system("cls");
						goto scoreFinder;
					break;
					}
				}
			}
		}
		
	}
	scoreFinder:
	score=(float)count*10;
	update_score(playername,score);
	printf("\nHi %s you scored %.2f",playername,score);
	count=0;
	printf("\n\npress R to replay and anyother key to go to main menu\n");
	choice = toupper(getch());
	if(choice == 'R')
	goto quiz;
	else
	goto index;
}
void scoreBoard()
{
	system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	if(f==NULL){
		printf("Failed to open the file");
		return;
	}
	while(fscanf(f,"%s%f",name,&scr)!=EOF){
		printf("%s has scored %.2f\n\n",name,scr);
	}
	fclose(f);	
}
void about()
{
	system("cls");
	printf("*******Hello There!!!!*******\n");
	printf("*******Hope you enjoyed this simple game!!!*******");
}
void update_score(char playername[20],float score){

	FILE *f;
	char name[20];
	float scr;
	int flag=0;
	int pos=0;
	f = fopen("score.txt","a");
	fclose(f);
	f = fopen("score.txt","r+");
	while(fscanf(f,"%s %f",name,&scr)==2){
		if(strcmp(name,playername)==0){
			if(scr<=score){
				pos=strlen(name)+sizeof(float)+2;
				fseek(f,-pos,SEEK_CUR);
				fprintf(f,"%s %.2f\n",playername,score);
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	fprintf(f,"%s %.2f\n",playername,score);
	fseek(f,0,SEEK_END);
	fclose(f);
}
