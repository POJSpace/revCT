hello: main.o
	ld $^ -o $@

main.o: main.asm
	nasm $< -f elf64 -o $@

.PHONY: clean run
.SILENT: run

run: hello
	./hello

clean:
	rm -f main.o hello
