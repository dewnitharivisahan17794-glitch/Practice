import tkinter as tk
from tkinter import ttk

Multiple_Windows=tk.Tk()
Multiple_Windows.title('MAIN')
Multiple_Windows.geometry(f'600x500')
Multiple_Windows.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")
value=tk.IntVar(value=0)
def Sub_Window():
    sub=tk.Toplevel()
    sub.title('SUB')
    sub.geometry(f'600x500')
    sub.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")
    button=ttk.Button(sub, text='click me', command= lambda:value.set(value.get()+1))
    button.pack()
    lable=ttk.Label(sub, textvariable=value)
    lable.pack()

Button=ttk.Button(Multiple_Windows, text='Click to open Sub window',command=Sub_Window)
Button.pack()
Multiple_Windows.mainloop()