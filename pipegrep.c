


    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>


    int main( int argc, char *argv[])
    {
        int begin = 1;
        char linebuffer[BUFSIZ];
        strncpy( linebuffer, "" , BUFSIZ );
        char ptr[BUFSIZ];
        int j=0;

        int c ; 
        c = getchar();
        while( c != EOF )
        {
           ptr[j++] = c;
           begin = 0;

           if ( c == '\n' )
           {  
             begin = 1;
             ptr[j]='\0';
             if ( argc == 1 )
                 printf( "%s", ptr );
             else
             {
               if ( strstr( ptr, argv[ 1 ] ) != 0 )
                 printf( "%s", ptr );
             }
             strncpy( ptr, "", BUFSIZ );
             j = 0;
           }

           c = getchar();
        }
	return 0;
 }




