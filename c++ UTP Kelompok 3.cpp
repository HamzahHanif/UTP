//Kelompok 3 =
//1.Ahmad Irvandi (2117051089)
//2.Dwika Pangestuti (2117051055)
//3.Hamzah Hanif (2117051032)

#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <iostream>


using namespace std;
char kor[8][160];
char character='}';    
char character2='>';
char r='X';
int x=3;
int y=1;
int x2=4;
int y2=1;
char maju;
string a;
string b;

void luas(){
	for(int i=0;i<=8;i++){
		for(int j=0;j<=160;j++){
			kor[i][j]=' ';
			if(i==0&&j%1==0){
			kor[i][j]='-';
			j++;	
		}
		if(i==7&&j%1==0){
			kor[i][j]='-';
			j++;	
		}

		}
	}
	kor[x][y]=character;
	kor[x2][y2]=character2;
	
	kor[1][5]=r;
	kor[1][15]=r;
	kor[1][25]=r;
	kor[1][35]=r;
	kor[1][45]=r;
	kor[1][55]=r;
	kor[1][65]=r;
	kor[2][10]=r;
	kor[4][10]=r;
	kor[2][20]=r;
	kor[4][20]=r;
	kor[2][30]=r;
	kor[4][30]=r;
	kor[2][40]=r;
	kor[2][50]=r;
	kor[2][70]=r;
	kor[4][40]=r;
	kor[2][60]=r;
	kor[4][50]=r;
	kor[4][60]=r;
	kor[1][75]=r;
	kor[4][70]=r;
	kor[5][5]=r;
	kor[5][15]=r;
	kor[3][15]=r;
	kor[3][5]=r;
	kor[3][25]=r;
	kor[3][35]=r;
	kor[3][45]=r;
	kor[3][55]=r;
	kor[3][65]=r;
	kor[3][75]=r;
	kor[5][25]=r;
	kor[5][35]=r;
	kor[5][45]=r;
	kor[5][55]=r;
	kor[5][65]=r;
	kor[5][75]=r;
	kor[6][30]=r;
	kor[6][40]=r;
	kor[6][50]=r;
	kor[6][60]=r;
	kor[6][70]=r;
	kor[6][10]=r;
	kor[6][20]=r;
	kor[1][80]='F';
	kor[2][80]='I';
	kor[3][80]='N';
	kor[4][80]='I';
	kor[5][80]='S';
	kor[6][80]='H';

	
}

void nama(){
	cout<<"Insert name of Player 1 and Player 2, and press enter to start"<<endl;
	cin>>a>>b;
}

void outkor	(){
printf("%s" "\n","How to play : ");
printf("%s" "\n","Player 1 : }			Player 2 : >");
printf("%s" "\n","*Press (w) to run		*Press (i) to run");
printf("%s" "\n","*Press (d) to down		*Press (l) to down");
printf("%s" "\n","*Press (a) to up		*Press (j) to up");
	for(int i=0;i<8;i++){
		for(int j=0;j<=160;j++){
		printf("%c",kor[i][j]);		
		}
		printf("\n");
		kor[x][y]=character;
		kor[x2][y2]=character2;
		
	}
}

int main(){
	nama();
	do{
		system("cls");
		luas();
		outkor();
		maju=getch();
		
		switch(maju){
			case'w':
				if(kor[x][y+1]==' '){
					y++;
					kor[x][y-1]=' ';
					kor[x][y] = character;
				}
				break;
				
				case'd':
				if(kor[x+1][y]==' '){
					x++;
					kor[x-1][y]=' ';
					kor[x][y] = character;
				}
				break;
				
				case'a':
				if(kor[x-1][y]==' '){
					x--;
					kor[x+1][y]=' ';
					kor[x][y] = character;
				}
				break;
				
				case 'i':
				if(kor[x2][y2+1]==' '){
					y2++;
					kor[x2][y2-1]=' ';
					kor[x2][y2] = character2;
				}
				break;
				case 'l':
				if(kor[x2+1][y2]==' '){
					x2++;
					kor[x2-1][y2]=' ';
					kor[x2][y2] = character2;
				}
				break;
				case 'j':
				if(kor[x2-1][y2]==' '){
					x2--;
					kor[x2+1][y2]=' ';
					kor[x2][y2] = character2;
				}
				break;
				
				default:{
					break;
				}
					
		}	
	} while (x<1000);
	

}
