
# day 65 out of 100

# first python program out of 100 days

from tkinter import *

window = Tk()
window.geometry('200x200')


list = Listbox(window, selectmode="multiple")


list.pack(expand=YES, fill="both")

x = ["Tharunn ", " ", "does ", " ", "100 days of code"]


for each_item in range(len(x)):

    list.insert(END, x[each_item])


window.mainloop()
