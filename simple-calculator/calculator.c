#include <stdio.h>
#include <stdbool.h>

int main()
{

        //Intialize valuble

        int x = 0;
        int y = 0;
        int ans = 0;
        bool start = true;
        int opt = 0;
        //while loob
        while (start == true){
        printf("Please select :\n 1) Add\n 2)Subtract\n 3)Mulitply\n 4)Divide\n 0) Quit\n ");
        scanf("%d" , &opt);
        if (opt==0){
                printf("Bye!");
                start = false;
                break;
        }

}

        return 0;

}




