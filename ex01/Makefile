# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 19:52:14 by jverdu-r          #+#    #+#              #
#    Updated: 2024/01/09 19:52:15 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = src/Fixed.cpp \
		src/main.cpp

TARGET = Fixed

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
