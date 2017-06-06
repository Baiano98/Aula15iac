#include <stdio.h>
#include <conio.h>
main()
{
	int x;
	float g1, g2, media;
	
	for(x=1;x<=10;x++)
	{
		printf("\nInform the student number:%d", x);
		printf("\nInform the first note: ");
		scanf("%f", &g1);
		printf("\nInform the second note: ");
		scanf("%f", &g2);
		media=(g1+g2*2)/3;
		printf("\nMedia is:%.2f", media);
	}
getche();
}
