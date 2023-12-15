CFLAGS = -no-pie -fno-stack-protector 

secure2: main.c Makefile
	gcc $(CFLAGS) $< -o $@ 
	
.PHONY: clean 

clean:
	rm -f secure2
