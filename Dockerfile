FROM gcc
WORKDIR /app
COPY /app .
RUN g++ ./laboratory_work_1/task_1.cpp -o task_1
CMD [ "./task_1" ]