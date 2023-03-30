FROM debian:stable
RUN apt-get update && apt-get install -y build-essential libc6-dbg
WORKDIR /
COPY . .
RUN gcc -o test_calculator -g test_calculator.c calculator.c -I.
