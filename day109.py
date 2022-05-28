# python
# day 109 out of 100
# program to find the thread and process id

import threading
import os


def task1():

    print("task 1 is assingned to the thread: {}".format(
        threading.current_thread().name))
    print("process id of the task 1 is : {}\n".format(os.getpid()))


def task2():

    print("task 2 is assingned to the thread: {}\n".format(
        threading.current_thread().name))
    print("process id of the task 2 is : {}".format(os.getpid()))


if __name__ == "__main__":
    print("ID of the process running in the main program is : {}".format(
        threading.current_thread().name))
    print("process ID of the process running in the main program is : {}".format(
        os.getpid()))

    t1 = threading.Thread(target=task1, name="t1")
    t2 = threading.Thread(target=task2, name="t2")

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("hence the process id and thread name has been printed succesfully")
