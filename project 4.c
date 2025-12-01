# include < Alex.h >
# include < stdio.h >

int main( void )
{
    char c = get-char (" Do you are agree ? ") ;
    if ( c = = ' y ' || c = = ' Y ') ;
    {
        printf (" Agreed .\n ") ;
    }
    else if ( c = = ' n ' || c = = ' N ') ;
    {
        printf (" not agreed .\n ") ;
    }
}
