FROM ubuntu:16.04

RUN apt-get update
RUN apt-get install -y wget pwgen

ARG RPC_USER
ARG RPC_PASSWORD
ENV RPC_USER ${RPC_USER:-altbet}
# Create a random password if the user doesn't set one
ENV RANDOM_PASS `pwgen -Bs1 12`
ENV RPC_PASSWORD ${RPC_PASSWORD:-$RANDOM_PASS}

# Build the project
RUN wget https://github.com/altbetproject/Altbet/releases/download/v1.2.0.0/altbet-1.1.0-x86_64-linux-gnu.tar.gz -O altbet-1.1.0.tar.gz
RUN tar -xvf altbet-1.1.0.tar.gz
RUN mkdir -p /root/.altbet/
RUN echo "rpcuser=$RPC_USER\nrpcpassword=$RPC_PASSWORD" > /root/.altbet/altbet.conf

EXPOSE 8332 8333 18332 18333

WORKDIR /altbet-1.1.0/bin
CMD ["/altbet-1.1.0/bin/altbetd"]

