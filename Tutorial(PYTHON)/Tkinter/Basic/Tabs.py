import tkinter as tk
from tkinter import ttk

Tabs=tk.Tk()
Tabs.title('TABLE')
Tabs.geometry(f'600x500')
Tabs.iconbitmap("C:/Users/USER/OneDrive/Desktop/programs/PYTHON/Python_ GUI/Tkinter/icon.ico")
notebook=ttk.Notebook(Tabs)
notebook.pack()
frame1=ttk.Frame(notebook, width=400, height=300,relief='groove')
frame2=ttk.Frame(notebook, width=400, height=300,relief='groove')
notebook.add(frame1, text='Input')
notebook.add(frame2, text='Output')
entry1=ttk.Entry(frame1)
entry1.pack(pady=10)
button1=ttk.Button(frame1, text='Click Me', command=lambda: table.insert('', 'end', values=[entry1.get()]))
button1.pack(pady=10)
table=ttk.Treeview(frame2, columns=('name'), show='headings')
table.heading('name', text='Name')
table.pack(pady=10)



Tabs.mainloop()
