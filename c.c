#include <stdio.h>
#include <unistd.h>


void f_btchar(char c){

    write(1,&c,1);

}

int main(int argc,char *argv[]){

   if(argc >= 2){

        short i = 0;

        while (argv[1][i] != '\0')
        {

            f_btchar(argv[1][i]);
            i++;
   
        }
        f_btchar('\n');
   }
}