# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshakya <sshakya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/18 06:45:17 by sshakya           #+#    #+#              #
#    Updated: 2021/02/09 03:39:40 by sshakya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDE = ../ft_printf.h

SRCS =	../ft_printf.c \
		../srcs/pf_split.c \
		../srcs/pf_split_utils.c \
		../srcs/pf_setlst.c \
		../srcs/ft_printf_utils.c \
		../srcs/ft_printf_utils_2.c \
		../srcs/pf_flag_utils.c \
		../srcs/pf_setflags.c \
		../srcs/pf_setformat.c \
		../srcs/pf_setstring.c \
		../srcs/pf_flagargs.c \
		../srcs/pf_setargs.c \
		../srcs/pf_convert.c \
		../srcs/pf_printstr.c \
		../srcs/pf_printchar.c \
		../srcs/pf_printstr_utils.c \
		../srcs/pf_print.c \
		../srcs/pf_printint_utils.c \
		../srcs/pf_printint_utils_2.c \
		../srcs/pf_setreturn.c \
		../srcs/pf_printuint.c \
		../srcs/pf_printint.c

BONUS = ../bonus/pf_printfloat_bonus.c \
		../bonus/pf_convert_f_bonus.c \
		../bonus/pf_convertfloat_fg_bonus.c \
		../bonus/pf_convertfloat_eg_bonus.c \
		../bonus/pf_convert_g_bonus.c \
		../bonus/pf_convert_e_bonus.c \
		../bonus/pf_float_utils_bonus.c \
		../bonus/pf_float_utils_bonus_2.c \
		../bonus/pf_float_exp_bonus.c \
		../bonus/pf_float_utils_2_bonus.c

OBJS = ${SRCS.c=.o}

BONUSOBJS = ${BONUS.c=.o}

CC = clang

CFLAGS	= -Wall -Wextra -Werror -g

TESTPF = test_printf.c	

TESTPF2 = test_printf2.c	

TESTPF3 = test_printf3.c	

TESTPF4 = test_printf4.c	

TESTPF5 = test_printf5.c	

TESTMYPF = test_mypf.c

MEM = -fsanitize=address

TESTINT = test_mypf_int.c

TESTSTR = test_mypf_str.c

TESTHEXP = test_mypf_hexp.c

TESTF = test_mypf_f.c

TESTG = test_mypf_g.c

TESTE = test_mypf_e.c

TESTSPLT =	../srcs/pf_split.c test_pfsplit.c ../srcs/ft_printf_utils.c \
			../srcs/ft_printf_utils_2.c

TESTFLAGS = ../srcs/pf_setflags.c test_setflags.c ../srcs/ft_printf_utils.c \
		../srcs/ft_printf_libft.c

TESTSTR = ../srcs/pf_setstring.c test_setstring.c ../srcs/ft_printf_utils.c \
		../srcs/ft_printf_libft.c

TESTLST = test_setlst2.c ../srcs/pf_split.c ../srcs/pf_setlst.c \
		  ../srcs/pf_setflags.c ../srcs/pf_setformat.c ../srcs/pf_setstring.c \
		  ../srcs/ft_printf_utils.c ../srcs/ft_printf_libft.c \
		  ../srcs/pf_flagargs.c ../srcs/pf_setargs.c ../srcs/pf_flag_utils.c \
		  ../srcs/pf_print_utils.c

$(NAME) : ${OBJS} ${INCLUDE}
	ar rcs $@ $?

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

test-int:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTINT} && ./a.out

test-str:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTSTR} && ./a.out

test-hexp:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTHEXP} && ./a.out

test-f:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTF} && ./a.out

test-g:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTG} && ./a.out

test-e:
	${CC} ${CFLAGS} ${INCLUDE} ${SRCS} ${BONUS} ${TESTE} && ./a.out

testsplit:
	${CC} ${CFLAGS} ${MEM} ${TESTSPLT} && ./a.out

testflags: 
	${CC} ${CFLAGS} ${MEM} ${TESTFLAGS} ${INCLUDE} && ./a.out

teststr:
	${CC} ${CFLAGS} ${MEM} ${TESTSTR} ${INCLUDE} && ./a.out

testlst:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTLST} && ./a.out

testpf-int:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTPF} && ./a.out

testpf-lenmod:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTPF2} && ./a.out

testpf-fge:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTPF3} && ./a.out

testpf-hex:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTPF4} && ./a.out

testpf-str:
	${CC} ${CFLAGS} ${MEM} ${INCLUDE} ${TESTPF5} && ./a.out

norm :
	~/.norminette/norminette.rb ${SRCS1} ${SRCS2} ${BONUS} ${INCLUDE}

.PHONY : all norm  clean re fclean bonus
