CXXFLAGS =  

ifeq ($(USE_FLOAT),1)
	CXXFLAGS += -DUSE_FLOAT
endif

all:
	g++ code.cpp $(CXXFLAGS) -o code

clean:
	rm -rf *.o code