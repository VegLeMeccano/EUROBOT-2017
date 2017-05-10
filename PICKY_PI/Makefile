#make, make clean
#executable : picky.a, type ./picky.a

#This sample makefile has been setup for a project which contains the following files: main.h, ap-main.c, ap-main.h, ap-gen.c, ap-gen.h   Edit as necessary for your project

#Change output_file_name.a below to your desired executible filename

#Set all your object files (the object files of all the .c files in your project, e.g. main.o my_sub_functions.o )
OBJ = main.o Compteur.o Coord.o Cratere.o Distributeur.o Element_Robot.o Gestionnaire_Mission.o MAE_PICKY.o Master.o Mission.o Module.o Period.o Plateau_jeu.o Protocole_COM.o StockageModule.o Zone_depose_module.o

#Set any dependant header files so that if they are edited they cause a complete re-compile (e.g. main.h some_subfunctions.h some_definitions_file.h ), or leave blank
DEPS = main.h Compteur.h Coord.h Cratere.h Distributeur.h Element_Robot.h Gestionnaire_Mission.h MAE_PICKY.h Master.h Mission.h Module.h Period.h Plateau_jeu.h Protocole_COM.h StockageModule.h Zone_depose_module.h 

#Any special libraries you are using in your project (e.g. -lbcm2835 -lrt `pkg-config --libs gtk+-3.0` ), or leave blank
LIBS = -lrt -lwiringPi -lpthread -lm

#Set any compiler flags you want to use (e.g. -I/usr/include/somefolder `pkg-config --cflags gtk+-3.0` ), or leave blank
CFLAGS = -lrt

#Set the compiler you are using ( gcc for C or g++ for C++ )
CC = g++

#Set the filename extensiton of your C files (e.g. .c or .cpp )
EXTENSION = .cpp

#define a rule that applies to all files ending in the .o suffix, which says that the .o file depends upon the .c version of the file and all the .h files included in the DEPS macro.  Compile each object file
%.o: %$(EXTENSION) $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

#Combine them into the output file
#Set your desired exe output file name here
picky.a: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

#Cleanup
.PHONY: clean

clean:
	rm -f *.o *~ core *~ 
