FROM emscripten/emsdk:latest

RUN apt-get update
RUN apt-get install python3 -y

ADD . $HOME/src/

ENTRYPOINT ["tail"]
CMD ["-f","/dev/null"]