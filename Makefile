CXXFLAGS =  

ifeq ($(USE_FLOAT),ON)
	CXXFLAGS += -DUSE_FLOAT
endif

all:
	g++ code.cpp $(CXXFLAGS) -o code

clean:
	rm -rf *.o code