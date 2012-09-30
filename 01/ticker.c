/************************************************************************
 * NAME									*
 *   ticker.c								*
 *									*
 * SYNOPSIS								*
 *   ticker "message"							*
 *									*
 * DESCRIPTION								*
 *   Ticks a message every second to the standard output		*
 *									*
 * AUTHOR								*
 *   Peter Schmid, Hochschule Zürich, pschmid@hsz-t.ch			*
 *									*
 * CVS									*
 *   $Id: ticker.c,v 1.1 2007/09/14 06:59:49 pschmid Exp pschmid $	*
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char **argv) {

    if( argc != 2 ) {
	(void)fprintf(stderr, "synopsis: ticker message\n");
	int pid;
	pid = getpid();
	printf("PID: %d\n", pid);
	time_t t;
	t = time(NULL);
	printf("Time: %s\n", ctime(&t));
	return(1);
    }

    while(1) {
	(void)printf("%s\n",argv[1]);
	(void)sleep(1);
    }

    return(0);
}
