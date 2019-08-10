NAME = race04

SRCS = src/mx_check_args.c \
	src/mx_set_max.c \
	src/mx_check_file.c \
	src/mx_errors.c \
	src/mx_logic.c \
	src/mx_main.c \
	src/mx_map.c \
	src/mx_node.c \
	src/mx_output.c \
	src/mx_print.c \
	src/mx_queue.c \
	src/mx_search.c

INC = inc/lib.h \
	inc/check_args.h \
	inc/errors.h \
	inc/output.h \
	inc/structs.h

CFILES = mx_set_max.c \
	mx_check_args.c \
	mx_check_file.c \
	mx_errors.c \
	mx_logic.c \
	mx_main.c \
	mx_map.c \
	mx_node.c \
	mx_output.c \
	mx_print.c \
	mx_queue.c \
	mx_search.c

HFILES = lib.h \
	check_args.h \
	errors.h \
	output.h \
	structs.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
DFLAGS = -fsanitize=address -g

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(CFILES)
debug:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) $(DFLAGS) -o $(NAME) $(CFILES)
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf $(CFILES)
	@rm -rf $(HFILES)
reinstall: uninstall clean all
