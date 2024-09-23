FROM ubuntu:23.04

ARG UID=1001
ARG GID=1001

RUN apt-get update
RUN apt-get install -y git python3 python3-pip python3-setuptools pipx clang vim gdb

RUN groupadd -g "${GID}" fortytwo \
  && useradd --create-home --no-log-init -u "${UID}" -g "${GID}" fortytwo

USER fortytwo
WORKDIR /home/fortytwo

RUN pipx install norminette
RUN echo 'export PATH="$PATH:/home/fortytwo/.local/bin"' >> /home/fortytwo/.bashrc

RUN git clone https://github.com/y3ll0w42/libft-war-machine && \
    cd libft-war-machine && \
    git checkout a06422ab9686477deb6ffdab5afe25e7fba6e978
COPY my_config.sh /home/fortytwo/libft-war-machine

ENTRYPOINT ["bash", "-l", "./libft-war-machine/grademe.sh", "-u", "-b"]
