#include <iostream>
#include <mpi.h>
 
int main(int argc, char ** argv){
	int mynode, totalnodes;
	sender = 2;
	receiver = 4;
	tag;
	MPI_Status status;
	
		MPI_Init(&argc, &argv);
	
	MPI_Comm_size(MPI_COMM_WORLD, &totalnodes);
	MPI_Comm_rank(MPI_COMM_WORLD, &mynode);
	
	double * databuffer = new double[datasize];
	if(mynode == sender)
	{
		MPI_send(databuffer, datasize, MPI_DOUBLE, receiver, tag, MPI_COMM_WORLD);
	}
}


