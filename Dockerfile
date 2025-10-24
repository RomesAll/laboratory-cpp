FROM gcc
WORKDIR /app
COPY /app .
RUN g++ lr1.cpp -o lr1
CMD [ "./lr1" ]