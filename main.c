///Henry Mattoon
///912290384
///ENGR 476
///project 2 HDLC Program
/// 9/28/16


#include <stdio.h>
#include <stdlib.h>

int testifsame(char test[], char actual[]);

int main()
{

    char input;
    int ints=0, count, recording=0;
    char testArray[8]={3,3,3,3,3,3,3,3}; ///going to have to input at least 8 new numbers to get correct input code
    const char compArray[8]={'0','1','1','1','1','1','1','0'};
    //noecho();
    while(ints!=32){///press space to exit
        input = getche();
        //printf("\n");
        ints = input;
        ///stack to test array below
        testArray[0]=testArray[1];
        testArray[1]=testArray[2];
        testArray[2]=testArray[3];
        testArray[3]=testArray[4];
        testArray[4]=testArray[5];
        testArray[5]=testArray[6];
        testArray[6]=testArray[7];
        testArray[7]=input;

        if(testifsame(testArray,compArray)==0){
            if(recording==1){
                recording=0;
                printf(" recording stopped ");
            }else{
                recording=1;
                printf(" recording ");
            }
        }
        if(recording==1){
            //printf("recording input: %c\n", input);
        }
    }
    return 0;
}

int testifsame(char test[], char actual[]){ ///expecting the length of both arrays to be '8'
    int i,size = 8;
    int checkList = 8;
    for(i=0;i<size;i++){
        if(test[i]==actual[i]){
            checkList--;
        }
    }
    if(checkList==0){
        return 0; ///same
    }else{
        return 1; ///not same

    }

}



