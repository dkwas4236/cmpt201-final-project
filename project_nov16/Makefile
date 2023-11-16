#author ethan,darion, lab9 p1
#this is the outer makefile. when make is called the function will call the inner makefile and then move the .o file to obj and .exe to bin
#the clean PHONY will clean files from the diroctorys that they where moved to in the outer makefile
.PHONY: clean,recursive

recursive:
	cd src && make
	cd src && mv *.o ../obj
	cd src && mv app ../bin

clean:
	cd bin && rm app
	cd obj && rm *.o
