#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int main (){
	int a;
	int b = 1 ;
	char psw[50];
	while (b < 51){
		printf("*");
		b++;
	}
	printf("\n");
	printf("Hello, bitch ! \n");
	printf("I need your github password, bruh\n");
	printf("->");
	scanf("%s", psw);
	if (strcmp(psw, "SuckmyDick") == 0){
		printf("Welcome bitch\n");
		printf("Checking for updates... \n");
		sleep(100000);
	}
	printf("Well I need to know what u want :\n1)Get your data\n2)Upload your data\n3)exit\n4)Suck ma Wait wut :|\n5)Delete everything !\n");
	printf("-> ");
	scanf("%d", &a);
	if(a == 1 ){
		//system("git clone 'https://github.com/PS-anon/fuck.git'");
		system("git clone 'https://github.com/PS-anon/suck.git'");
		
	}
	else if (a == 2){
		system("git init");
		system("git add .");
		system("git commit -m 'First commit'");
		system("git remote add origin https://github.com/PS-anon/suck.git ");
		system("git remote -v");
		system("git push -u origin master");		
	}
	else if (a == 3){
		printf("SUUUUUUUUCK MYYYYYYYYY WAIT WUT :|\n");
	}
	else if (a == 4){
		printf("Enjoy :|\n");
	}
	else if (a == 5){
		printf("Bruh i know i am good but that scares me :|\n");
	}
	else{
		printf("Loooool n000b\n");
	}

	return 0;
}
