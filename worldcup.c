#include<stdio.h>

void wc (int);

void main()
{
	int n;

	printf("enter the year:");

	scanf("%d",&n);

	wc(n);

	printf(" Next world cup in the year of 2019  organized -by south africa & england\n");
}

void wc(int n)
{
	if ((n == 1975) || (n == 1979) ||(n == 1983)||( n ==1987) || (n == 1992) || (n == 1996) ||(n == 1999) ||(n == 2003) ||(n == 2007) ||(n == 2011) ||(n == 2015))
	{
	printf( "yes ODI world_cup match played\n" );

	goto details; 

	}	
	else if(n == 2018)
	{

	printf("there is no ODI world cup match in this year\n");
	}
 else
	{
	printf("invalid year\n");
	}	
	
details: if (n == 1975)
	 {
	printf(" winner:west indies (291-8)\n runner-up:australia 274 \n");
	 }
	 else if(n == 1979)
	 {

	printf("winner:west indies (286-9)\n runner-up: england (194)\n");
	 }
	 else if(n == 1983)
	 {
	printf("winner :india (183)\n runnr-up :west indies (140)\n");
	 }
	 else if(n == 1987)
	 {
	printf("winner :australia (253-5)\n runner-up :england (246)\n");
	 }
	 else if(n == 1992)
	 {
	printf("winner: pakisthan (249-6)\n runner-up :england (227) \n");
	 }
	 else if(n == 1996)
	 {

	printf("winner :sri lanka (245-3)\n runnr-up: australia (241)\n");
	 }
	 else if(n == 1999)
	 {
	printf(" winner : australia (133-2)\n runner-up :pakisthan (132)\n");

	 }
	 else if (n == 2003)
	 {

	printf("winner :australia (359-2)\n runner-up :india (234) \n");
	 }
	 else if(n == 2007)
	 {
	printf("winner :australia (281-4)\n runner-up:sri lanka (215-8)\n");

	 }
	 else if(n == 2011)
	 {
	printf("winner :india (277-4)\n runner-up :sri lanka (274-6) \n");

	 }
	 else if(n == 2015 )
	 {
	printf("winner : australia ( 186-3)\n runner-up new ziland (183)\n");


	 }
  else 
	{
	printf("no world cup in this year\n");
	}
}
