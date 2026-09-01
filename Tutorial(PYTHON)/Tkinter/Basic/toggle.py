import tkinter as tk
from tkinter import ttk

toggle=tk.Tk()
toggle.title('TOGGLE')
toggle.geometry(f'600x500')
toggle.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")
def Situation():
    if label['text']=="OFF":
        label.config(text="ON", fg="green")
    else:
        label.config(text="OFF", fg="red")
label=tk.Label(toggle, text="OFF", font=("Arial", 50), fg="red")
label.place(x=250, y=150)
button=tk.Button(toggle, text="Toggle", command= Situation, font=("Arial", 10), fg="blue")
button.place(x=275, y=450)
toggle.mainloop()