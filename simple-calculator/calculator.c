#include <stdio.h>
#include <stdbool.h>

int main()
{
	int a =0;
	int b = 0;
	int result = 0;

        bool start = true;
        int opt = 0;
        while (start == true){
        printf("Please select :\n 1) Add\n 2)Subtract\n 3)Mulitply\n 4)Divide\n 0) Quit\n ");
        scanf("%d" , &opt);
       
	

	 	switch(opt)
	{
	case 0:
		printf("Bye!");
		start = false;
		break;
	case 1: 
		printf("A:");
		scanf("%d",&a);
		printf("\nB:");
                scanf("%d\n",&b);
		result = a + b;
		printf("Result : %d\n", result);
		break;
	case 2:
                printf("A:");
                scanf("%d",&a);
                printf("\nB:");
                scanf("%d\n",&b);
                result = a - b;
                printf("Result : %d\n", result);
                break;
	default:
        	printf("Invalid Operator Input\n");
	}
}
        return 0;

}




