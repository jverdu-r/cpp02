# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 19:17:44 by jverdu-r          #+#    #+#              #
#    Updated: 2024/05/21 18:05:30 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -fsanitize=address -g3

SRC = src/Fixed.cpp \
		src/Point.cpp \
		src/bsp.cpp \
		src/main.cpp

TARGET = bsp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
