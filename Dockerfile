FROM emscripten/emsdk:3.1.50

RUN apt-get update
RUN apt-get install python3 -y

ADD . $HOME/src/

ENTRYPOINT ["tail"]
CMD ["-f","/dev/null"]