import tkinter as tk

root = tk.Tk()

tk.Label(root, text="label3", bg="blue").pack(
    side="left", fill="both", expand=True)

tk.Label(root, text="label1", bg="red").pack(
    side="left", fill="both", expand=True)

tk.Label(root, text="label2", bg="violet").pack(
    side="left", fill="both", expand=True)

tk.Label(root, text="label4", bg="green").pack(
    side="left", fill="both", expand=True)


root.mainloop()
