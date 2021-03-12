all: driver.cc ni.cc
	g++ -o ni ni.cc; g++ -o driver driver.cc

clean:
	rm driver
	rm ni
