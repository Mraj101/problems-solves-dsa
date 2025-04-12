#include<stdio.h>
#include<iostream>
using namespace std;
struct Card{
 int face;
 int shape;
 int color;
};
/*playing cards values are stored where 
face value 1-Ace,2,3,4,5,6,7,8,9,10,11-j,12-Q,13-K
shapes 0-clubs,1-spades,3-diamonds,4-hearts
colors 0-black 1-red */
int main()
{
    // struct Card deck[52];//an array of structs , means 52 different structs have been declared such as we can initialize values for a card with the index position of deck
    // deck[0].face=1;
    // deck[0].shape=0; 
    // deck[0].color=0;//here the first card value out of the 52 card is it's an Ace of clubs which's color is black
    // printf("face value=%d\n shape=%d\ncolor=%d",deck[0].face);//remeber facevalue shape and color code ;)
    //we can also initialize values like given below
   struct Card deck[3]={{1,0,0},{3,0,1},{4,1,1}};//instead of taking 52 different card values i took only 3 cards face value,shape and color where in the array 3 different cards values have been initialized
   for(int i=0;i<3;i++)
   {
       printf("card no %d face=%d shape=%d color=%d\n",i+1,deck[i].face,deck[i].shape,deck[i].color);
   }
    return 0; 
}