# day 102 out of 200
# learning tkinter from udemy

from hashlib import new
import tkinter as tk
import tkinter as tk
from tkinter import ttk


def greet():
    print("Hello this my first function in python")


root = tk.Tk()
root.title("hello")

new_button = ttk.Button(root, text="Greet", command=greet)
new_button.pack(side="left", fill="x", expand=True)

quit_button = ttk.Button(root, text="quit", command=root.destroy)
quit_button.pack(side="left", fill="x", expand=True)

root.mainloop()
# greet()
