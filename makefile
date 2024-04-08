target := server
src := server.c main.c

${target} : ${src}
	gcc $^ -o $@

debug:
	@echo ${target}
	@echo ${src}

.PHONY : debug