#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //ask user for a height
    int height;
    do
    {
        height = get_int("Please provide a height: ");
    }
    while (height < 1 || height > 8);
    
    
  
    //Lopp through the value the user enters and goes to next line every time
    for (int i = height - 1; i >= 0; i--)
    {
        //loops through and adds a spaces
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        //loops through and adds a hashtag on left permit
        for (int k = 0; k < height - i; k++)
        {
            printf("#");
        }
        //add space
        printf("  ");
        //loop through to add hashtag on right side
        for (int k = 0; k < height - i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
      
      


}