//Carla Embuido * Aleena Khan
// Freak Bob Calc

#include <stdio.h>

double add(int num1, int num2);
double subtract(int num1, int num2);
double divide(double num1, double num2);
#define FEIN "fein.txt"
#define SQUID_WIDTH 27
#define SQUID_LINE 20
void displaySquidW(FILE* fin, int NumLine, int NumLength);
double multiply(double num1, double num2);

int main(){

	char Sym_ShortforSymbol;
	double Freak1, Freak2;
	
	printf("Enter your Freakiest Calculation: ");
	scanf("%lf%c %lf", &Freak1, &Sym_ShortforSymbol, &Freak2);
	
	if(Sym_ShortforSymbol=='/'){
	FILE* feining = fopen(FEIN, "r");
		if(feining== NULL ){
		printf("kys", FEIN);
		
	return 0;
	}
	
	displaySquidW(feining, SQUID_LINE, SQUID_WIDTH);
	divide(Freak1, Freak2);
        fclose(feining);
}
//END OF SQUIDWARD
	
	if(Sym_ShortforSymbol=='*'){
	multiply(Freak1, Freak2);
	}
	
	if(Sym_ShortforSymbol=='+'){
	add(Freak1, Freak2);
	}
	
	if(Sym_ShortforSymbol=='-'){
	subtract(Freak1, Freak2);
	}
	return 0;
}

void displaySquidW(FILE* fin, int NumLine, int NumLength){
	char symbol;
	for (int i=0; i<NumLine; i++){
		for(int j=0; j<NumLength; j++){
			fscanf(fin, "%c", &symbol);
			printf("%c", symbol);	
		
	}
	//printf("\n");
	}
}
double divide(double num1, double num2){
	double Div;
	if (num2!= 0){
	Div=num1/num2;
	printf("%.02lf\n", Div);
	}
	else{ 	
	printf(" hey man .. you cant divide by 0, you get 0 ;) \n");
	return 0;
	}
	
	return 0;
}

double multiply(double num1, double num2){
	double multi;
	if (num2!=0){
	multi=num1*num2;
	printf("%.02lf\n", multi);
	}
	else{
	printf("It's 0 ://///////////////////////\n");
	return 0;
	}
	for (int Amongus=0; Amongus<multi; Amongus++){
	printf("       ______\n");
	printf("      /    ___|_ \n");
	printf("_____|     |____| \n");
	printf("|    |         |\n");
	printf("|____|   __    |\n");
	printf("     |__|   |__|\n");
	printf("%d freaky little Amongus sitting on a tree K-I-S-S-I-N-G\n", Amongus+1);
	}
	
	return 0;
}

double add(int num1, int num2){
	double adding;
	adding=num1+num2;
	
	if(adding==69){
	printf("Woah Can't print that freaky number Goodbye!\n");
	}
	else if(adding==420){
	printf("You thought this was funny huh? Choose a freakier number next time buddy...\n");
	}
	else{
	printf("%.02lf\n", adding);
	}
	return 0;
}

double subtract(int num1, int num2){
	double sub;
	sub=num1-num2;

	for(int counter=0; counter<sub; counter++){
	printf("%.02lf\n", sub);
	}

return 0;
} 
		
