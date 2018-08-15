#include "librarytwofunc.h"

#include <libraryone/libraryoneinterface.h>

char *librarytwo_getl2string()
{
    return "string from library two.";
}

char *librarytwo_getl2andl1string()
{
    const char * l2string = "string from library two.";
    /*
     * Ugly, shouldn't do this, this is awful C - 
     * but only example projects...
     */
    char * l1string = libraryone_getl1string();
    char * allocstring = malloc(strlen(l1string) + strlen(l2string));
    strcpy(allocstring, l2string);
    strcpy(allocstring+strlen(l1string), l1string);
    return allocstring;
}
