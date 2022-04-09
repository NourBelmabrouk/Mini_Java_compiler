import subprocess
from sys import stdout
import tkinter as tk
from tkinter.filedialog import askopenfilename, asksaveasfilename
import os
from unittest import result

def open_file():
    """Open a file for editing."""
    global filepath
    filepath = askopenfilename(
        filetypes=[("Text Files", "*.txt"), ("All Files", "*.*")]
    )
    if not filepath:
        return
    txt_edit.delete(1.0, tk.END)
    with open(filepath, "r") as input_file:
        text = input_file.read()
        txt_edit.insert(tk.END, text)
    window.title(f"Text Editor Application - {filepath}")

def Compile():
    with open(filepath, "w") as output_file:
        text = txt_edit.get(1.0, tk.END)
        output_file.write(text)
    result = subprocess.check_output(["SyntaxicAnalyser.exe", "<", filepath] , stderr=subprocess.STDOUT, shell=True)
    result = result.decode('cp850')
    result = result.strip()
    if (result == ""):
        result = "No errors were found. Compiled Successfully."
    print(result)
    output.delete("1.0","end")
    output.insert("1.0",result)

    

window = tk.Tk()
window.title("Mini Java Compiler")
window.geometry("900x600")
window.columnconfigure(1, minsize=800, weight=1)

txt_edit = tk.Text(window, height = 15,width = 25)
output = tk.Text(window, height = 15,width = 25)
fr_buttons = tk.Frame(window, relief=tk.RAISED, bd=2)
btn_open = tk.Button(fr_buttons, text="Open", command=open_file)
btn_save = tk.Button(fr_buttons, text="Compile", command=Compile)
label = tk.Label(window, text ='Result:',font = "50") 
scroll_bar = tk.Scrollbar(window)
  
scroll_bar.grid(row=0,column=2,sticky="ns" )
scroll_bar.config( command = txt_edit.yview )
btn_open.grid(row=0, column=0, sticky="ew", padx=5, pady=5)
btn_save.grid(row=1, column=0, sticky="ew", padx=5)

fr_buttons.grid(row=0, column=0, sticky="ns")
txt_edit.grid(row=0, column=1, sticky="nswe", pady=15)
label.grid(row=1, column=1, sticky="nswe",pady=15)
output.grid(row=2, column=1, sticky="nswe")



window.mainloop()
