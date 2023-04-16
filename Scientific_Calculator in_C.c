#include <stdio.h>
#include<math.h>
int matrix();
int unitconverter();
int simplemath();
int main() {
    int m, f, g, h;
    printf("Following Activities can be performed\n");
    printf("1.Matrix calculation\n2.Dimensions and Simple Math\n3.Unit Converter");
    printf("\n Enter the choice of operation to be performed\n");
    scanf("%d",&m);
    int simplemath();
    switch(m)
    {
        case 1:
        f= matrix();
        break;
        case 2:
        g= simplemath();
        break;
        case 3:
        h= unitconverter();
        break;
    }
    
}

int simplemath()
{
int g;
   float val,x,y,z;
    int m;
    printf("Select the type of operation : \n");
    printf("1.Area \n2.perimeter\n3.Volume\n4.Simple Math operations \n");
    printf("enter choice ");
    scanf("%d",&m);
    printf("\n -------------------------------------\n");
    float perimeter(float a,float b, float c);
    float area(float a,float b, float c);
    float volume(float a,float b, float c);
    float maths(float a,float b);
    switch(m)
    {
        case 1 :
            printf("enter length or radius ");
            scanf("%f",&x);
            printf("\n enter breadth ");
            scanf("%f",&y);
            printf("\n enter height ");
            scanf("%f",&z);
            val = area(x,y,z);
            printf("\n area is %f",val);
          break;
        case 2 :
            printf("enter length or radius ");
            scanf("%f",&x);
            printf("\n enter breadth ");
            scanf("%f",&y);
            printf("\n enter height ");
            scanf("%f",&z);
            val = perimeter(x,y,z);
            printf("\nperimeter is %f",val);
            break;
        case 3 :
            printf("enter length or radius ");
            scanf("%f",&x);
            printf("\n enter breadth ");
            scanf("%f",&y);
            printf("\n enter height ");
            scanf("%f",&z);
            val = volume(x,y,z);
            printf("\n area is %f",val);
            break;
        case 4 :
            printf("\n enter operand 1 : ");
            scanf("%f",&x);
            printf("\n enter operand 2 :  ");
            scanf("%f",&y);
            val = maths(x,y);
            printf("\nResult is %f",val);
            break;
    }
   
} 
float area(float a,float b, float c)
{
    int list();
    int k = list();
    switch(k)
    {
    case 1 :
       return(a*a);
    case 2 :
       return(a*b);
    case 3 :
       return(3.14*a*a);
    case 4 :
       return(2*(a*b+b*c+c*a));
    case 5 :
       return(6*(a*a));
    case 6 :
       return(12.56*a*a);
    }
}
float perimeter(float a,float b,float c)
{
    int list();
    int k = list();
    switch(k)
    {
    case 1 :
       return(4*a);
    case 2 :
       return(2*(a+b));
    case 3 :
       return(2*3.14*a);
    case 4 :
       return(2*c*(a+b));
    case 5 :
       return(4*(a*a));
    case 6 :
       return(12.56*a*a);
    }
   
}
float volume(float a,float b,float c)
{
    int list();
    int k = list();
    switch(k)
    {
    case 1 :
       return(4*a);
    case 2 :
       return(2*(a+b));
    case 3 :
       return(2*3.14*a);
    case 4 :
       return(2*c*(a+b));
    case 5 :
       return(4*(a*a));
    case 6 :
       return(12.56*a*a);
    }
   
}
float maths(float a,float b)
{
    int n;
    printf("choose the shape type \n");
    printf("1.ADD\n2.SUBTRACT\n3.DIVIDE\n4.MULTIPLY\n5.SQUARE\n6.SQUAREROOT\n");
    printf("enter choice : ");
    scanf("%d",&n);
    printf("\n -------------------------------------\n");
    switch(n)
    {
    case 1 :
       return(a+b);
    case 2 :
       return(a-b);
    case 3 :
       return(a/b);
    case 4 :
       return(a*b);
    case 5 :
       return(a*a);
    case 6 :
       return(sqrtf(a));
      
    }
   
}
int list()
{
    int n;
    printf("\n -------------------------------------\n");
    printf("choose the shape type \n");
    printf("1.Square\n2.Rectangle\n3.Circle\n4.Cuboid\n5.Cube\n6.Sphere\n");
    printf("enter choice : ");
    scanf("%d",&n);
    printf("\n -------------------------------------\n");
    return n;
}
int unitconverter()
{ 
  int tempChoice;
  int category;
  int LengthChoice;
  int massChoice;
  int userinputF; 
  int userinputC; 
  int userinputK;
  int userinputMeter;
  int userinputInch;
  int userinputFeet;
  int userinputOunce;
  int userinputGram;
  int userinputPound;
  int fahrenheitToCelcius;
  int celciusToFahrenheit; 
  int CelsiusToKelvin;
  int KelvinToCelsius;
  int FahrenheitToKelvin;
   int KelvinToFahrenheit;
   float   MetertoCentimeter; 
  float MetertoMillimeter; 
  float MetertoInch;
  float MetertoFeet;
  float InchtoMeter;
  float FeettoMeter;
  float ounceToPounds; 
  float gramsToPounds;
  float ounceToGram;
  float poundsToGram;
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(1),Length(2),Mass(3) \n");
  printf("Please enter the letter you want to convert.\n");
 
  scanf("%d",&category);
  
  if(category == 1){
      printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for Celsius to kelvin. \n");
      printf("Enter 4 for Kelvin to Celsius. \n");
      printf("Enter 5 for Fahrenheit to Kelvin. \n");
      printf("Enter 6 for Kelvin to Fahrenheit. \n");
      fflush(stdin);
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else if(tempChoice == 3){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        CelsiusToKelvin = (userinputC + 273.15);
        printf("Kelvin: %d",CelsiusToKelvin);
      }
      else if(tempChoice == 4){
        printf("Please enter the Kelvin degree: \n");
        scanf("%d",&userinputK);
        KelvinToCelsius = (userinputK - 273.15);
        printf("Celsius: %d",KelvinToCelsius);
      }
       else if(tempChoice == 5){
        printf("Please enter the Fahrenheit degree: \n");
        scanf("%d",&userinputF);
        FahrenheitToKelvin = (0.556*(userinputF+459.67));
        printf("Kelvin: %d",FahrenheitToKelvin);
      }
       else if(tempChoice == 6){
        printf("Please enter the Kelvin degree: \n");
        scanf("%d",&userinputK);
        KelvinToFahrenheit = ( 1.8*(userinputK-273) + 32);
        printf("Celsius: %d",KelvinToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 2 ) {
      printf("Welcome to Length Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Meter to Centimeter. \n");
      printf("Enter 2 for Meter to Millimeter.\n");
      printf("Enter 3 for Meter to Feet . \n");
      printf("Enter 4 for Meter to Inch. \n");
      printf("Enter 5 for Feet to Meter. \n");
      printf("Enter 6 for Inch to Meter. \n");
      scanf("%d",&LengthChoice);
      if(LengthChoice == 1){
          printf("Please enter the length in Meter: \n");
          scanf("%d",&userinputMeter);
          MetertoCentimeter =userinputMeter*100 ;
          printf("Centimeter: %.2f",MetertoCentimeter); 
      }
     else if(LengthChoice == 2){
          printf("Please enter the length in Meter: \n");
          scanf("%d",&userinputMeter);
          MetertoMillimeter =userinputMeter*1000 ;
          printf("Milimeter: %.2f",MetertoMillimeter); 
      }
      else if(LengthChoice == 3){
          printf("Please enter the length in Meter: \n");
          scanf("%d",&userinputMeter);
          MetertoFeet =userinputMeter*3.281 ;
          printf("Feet: %.2f",MetertoFeet); 
      }
      else if(LengthChoice == 4){
          printf("Please enter the length in Meter: \n");
          scanf("%d",&userinputMeter);
          MetertoInch =userinputMeter*39.37 ;
          printf("Inch: %.2f",MetertoInch); 
      }
      else if(LengthChoice == 5){
          printf("Please enter the length in feet: \n");
          scanf("%d",&userinputFeet);
          FeettoMeter =userinputFeet/3.281 ;
          printf("meter: %.2f",FeettoMeter); 
      }
      else if(LengthChoice == 6){
          printf("Please enter the length in inch: \n");
          scanf("%d",&userinputInch);
          InchtoMeter =userinputInch/39.37 ;
          printf("Meter: %.2f",InchtoMeter); 
      }
      else
        printf("Please enter correct choice. \n");
   }
  else if(category == 3){
      printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
        printf("Enter 3 for pounds to gram. \n");
          printf("Enter 4 ounce to gram. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
       else if(massChoice == 3) {
          printf("Please enter the pound amount: \n");
          scanf("%d",&userinputPound);
          poundsToGram = userinputPound / 0.00220462;
          printf("Pounds: %.2f",poundsToGram);
      }
      else if(massChoice == 4){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToGram = userinputOunce * 28.3495;
          printf("Pounds: %.2f",ounceToGram);
      }
     
      else 
        printf("Please enter the correct choice. \n");
   }
  return 0;
}
int matrix()
{
int f;

	int a[100][100], b[100][100], c[100][100]={0}, d[100][100]={0};
	int i,j,k,m,n,p,q;
	printf("Enter no. of rows and columns in matrix A: ");
	scanf("%d%d",&m,&n);
	printf("Enter no. of rows and columns in matrix B: ");
	scanf("%d%d",&p,&q);
	if(m!=p || n!=q)
	{
		printf("Matrix Addition is not possible");
		return;
	}
	else if(n!=p)
	{
		printf("Matrix Multiplication is not possible");
		return;
	}
	else
{
		printf("Enter elements of matrix A: ");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d", &a[i][j]);
		printf("Enter elements of matrix B: ");
		for(i=0;i<p;i++)
			for(j=0;j<q;j++)
				scanf("%d", &b[i][j]);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				c[i][j] = a[i][j] + b[i][j];
		printf("\nResult of Matirx Addition:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				printf("%d ", c[i][j]);
			printf("\n");
		}
		for(i=0;i<m;i++)
			for(j=0;j<q;j++)
				for(k=0;k<p;k++)
d[i][j] += a[i][k]*b[k][j];
		printf("\nResult of Matirx Multiplication:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
				printf("%d ", d[i][j]);
			printf("\n");
		}
	}
         return 0;
}


        
