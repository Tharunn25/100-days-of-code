import tkinter as tk
# Create the GUI application main window.
root = tk.Tk()
# Add one or more of the above-mentioned widgets to the GUI application.
button = tk.Button(root, text='press here to stop the program',
                   width=50, command=root.destroy)
button.pack()
# Enter the main event loop to take action against each event triggered by the user.
root.mainloop()
ecf-hhrg-cdw
