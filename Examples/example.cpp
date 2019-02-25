#include <cstdlib>
#include <iostream>
#include "TFile.h"
#include "TTree.h"
#include "reader.h"
//#include "node.h"
//#include "bank.h"
//#include "particle.h"
//#include "detector.h"

using namespace std;

int main(int argc, char** argv) {

	std::cout << " reading file example program (HIPO) "  << __cplusplus << std::endl;

	char inputFile[256];
	char outputFile[256];

	if(argc>1) {
		sprintf(inputFile,"%s",argv[1]);
	} else {
		std::cout << " *** please provide a file name..." << std::endl;
		exit(0);
	}

	hipo::reader  reader;
	reader.open(inputFile);
	/*
	   clas12::particle  particles("REC::Particle",reader);

	   clas12::vector4 beam(   0.0, 0.0, 10.5, 10.5   );
	   clas12::vector4 target( 0.0, 0.0,  0.0,  0.938 );
	   clas12::vector4 electron;
	 */
	while(reader.next()==true){
		cout << "One more" << endl;
		/*
		   int size = particles.getSize();
		   for(int i = 0; i < size; i++){
		   int pid = particles.getPid(i);
		   if(pid==11){
		   particles.getVector4(i,electron,0.0005);
		   clas12::vector4 w2 = beam + target - electron;
		   printf("w2 = %12.5f\n",w2.m());
		   }
		   }
		 */
	}
	return 0;
}
//### END OF GENERATED CODE
