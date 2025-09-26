import customtkinter as ctk 

class App(ctk.CTk):
    def __init__(self, title, size_x, size_y):
    # initial setup
       super().__init__()
       self.title(title)
       self.geometry(f'{size_x}x{size_y}')

       # run this app 
       self.mainloop()

class title(ctk.CTkLabel):
    def __init__(self, parent):
        super().__init__(master = parent)
        self.text = 'celcius to fehrenheit convertor '
        self.font = ('terminal', 30, 'bold')
        self.fg_color = 'red'

App('Demo App 2', 800, 300)
