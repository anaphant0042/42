FROM ubuntu:22.04

LABEL maintainer="mmorot@student.42lyon.fr"
LABEL version="1.0.3"
LABEL description="francinette image 42"


RUN apt-get update && \
    apt-get install git gcc clang libpq-dev libbsd-dev libncurses-dev valgrind build-essential nasm clang ghc cmake make libxext-dev libbsd-dev libpq-dev python3-dev python3-pip python3-dev python3-venv python3-wheel -y
WORKDIR /
RUN git clone --recursive https://github.com/xicodomingues/francinette.git
RUN pip3 install wheel norminette
WORKDIR /francinette
RUN pip3 install -r requirements.txt

WORKDIR /code
ENTRYPOINT ["python3", "/francinette/main.py"]
