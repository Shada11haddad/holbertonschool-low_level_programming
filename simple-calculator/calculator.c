#include <stdio.h>
#include <stdbool.h>

int main()
{


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
	default:
        	printf("Invalid Operator Input\n");
	}
}
        return 0;

}




