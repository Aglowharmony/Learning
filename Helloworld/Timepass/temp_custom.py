# download and import custom ttk
import customtkinter as ctk

# let's define a conversion function 

def cel_to_fehr():
     celcius = entry_value.get()
     fehrenheit = (celcius * 9/5) + 32
     output_value.set(f'{fehrenheit} F')

# we're going to use a module called tkinte # create our window
# window = tk.Tk()
 window = ctk.CTk()

 # This is were we add content 
 # let's do some intial setup
 window.title('Temp Convertor')
 window.geometry('400x200')

 # let's add our first piece of contnt 
                    title_label = ttk.Label(master = window, text = 'Celcius to Fehrenheit Convertor',( font ='arial', 18, 'bold'))

 # let's add our widget to our window ( there are 3 methods for populating our widgets)
 # those are - pack, place, grid 
 title_label.pack()

 # add an entry field and a button
 # we're going to create a frame that both the entry field and the button will be stored
 input_frame = ctk.CtTkFrame(master = window)
     #now let's create the entry field and button
 entry_value = ctk.IntVar()
 entry_field = ctk.CTkEntry(master = input_frame , textvariable = entry_value)
 submit_buttom = ctk.CTkButton(master = input_frame, text = 'convert', command = cel_to_fehr)

 # let's add all three to our window
 entry_field.pack(side = 'left', padx = 10 )
 submit_buttom.pack(side = 'left', padx = 10)
 input_frame.pack(pady = 20)

 # finally let's add an output label
 output_value = ctk.StringVar()
 output_label = ctk.Label(master = window, text = 'Output', (font = 'terminal', 20), textvariable = output_value)

 # let's pack our output label
 output_label.pack(pady = 10) 

 # this cmd runs our window
 window.mainloop()

