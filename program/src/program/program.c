#include <libraryone/libraryoneinterface.h>
#include <librarytwo/librarytwointerface.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv)
{
    printf("Program called.\n");

    printf("Fetching a string from library one ->%s\n",
           libraryone_getl1string());

    printf("Fetching a string from library two ->%s\n",
           librarytwo_getl2string());

    printf("Fetching a string from library two that calls l1 as well ->%s\n",
           librarytwo_getl2andl1string());

    return 0;
}
