import tkinter as tk
from tkinter import ttk
from tkinter import messagebox


Messageboxes=tk.Tk()
Messageboxes.title('Messageboxes')
Messageboxes.geometry(f'500x500')
Messageboxes.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")

def display_message():
    result=messagebox.askokcancel('Are you sure?', 'sure?')
    print(result)
Button1 = ttk.Button(Messageboxes, text="Click me", command=display_message)
Button1.pack()
Messageboxes.mainloop()