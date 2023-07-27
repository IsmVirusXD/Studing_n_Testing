from tkinter import *
from PIL import ImageTk, Image

root = Tk()
root.title("Tormenta Gods")

Dictionary = {
    1 : "Aharadak",
    2 : "Allihanna",
    3 : "Arsenal",
    4 : "Azgher",
    5 : "Hynnin",
    6 : "Kallyadranoch",
    7 : "Khalmyr",
    8 : "Lena",
    9 : "Lin-Wu",
    10: "Marah",
    11: "Megalokk",
    12 : "Nimb",
    13: "Oceano",
    14 : "Sszzaas",
    15: "Tannah-Toh",
    16: "Tenebra",
    17: "Thwor",
    18: "Thyatis",
    19: "Valkaria",
    20: "Wynna"
}


# Importando Imagens
my_img1 = ImageTk.PhotoImage(Image.open("imagens\Aharadak.jpg").resize((500,500)))
my_img2 = ImageTk.PhotoImage(Image.open("imagens\Allihanna.jpg").resize((500,500)))
my_img3 = ImageTk.PhotoImage(Image.open("imagens\Arsenal.jpg").resize((500,500)))
my_img4 = ImageTk.PhotoImage(Image.open("imagens\Azgher.jpg").resize((500,500)))
my_img5 = ImageTk.PhotoImage(Image.open("imagens\Hynnin.jpg").resize((500,500)))
my_img6 = ImageTk.PhotoImage(Image.open("imagens\Kallyadranoch.jpg").resize((500,500)))
my_img7 = ImageTk.PhotoImage(Image.open("imagens\Khalmyr.jpg").resize((500,500)))
my_img8 = ImageTk.PhotoImage(Image.open("imagens\Lena.jpg").resize((500,500)))
my_img9 = ImageTk.PhotoImage(Image.open("imagens\Lin-Wu.jpg").resize((500,500)))
my_img10 = ImageTk.PhotoImage(Image.open("imagens\Marah.jpg").resize((500,500)))
my_img11 = ImageTk.PhotoImage(Image.open("imagens\Megalokk.jpg").resize((500,500)))
my_img12 = ImageTk.PhotoImage(Image.open("imagens\Mimb.jpg").resize((500,500)))
my_img13 = ImageTk.PhotoImage(Image.open("imagens\Oceano.jpg").resize((500,500)))
my_img14 = ImageTk.PhotoImage(Image.open("imagens\Sszzaas.jpg").resize((500,500)))
my_img15 = ImageTk.PhotoImage(Image.open("imagens\Tannah-Toh.jpg").resize((500,500)))
my_img16 = ImageTk.PhotoImage(Image.open("imagens\Tenebra.jpg").resize((500,500)))
my_img17 = ImageTk.PhotoImage(Image.open("imagens\Thwor.jpg").resize((500,500)))
my_img18 = ImageTk.PhotoImage(Image.open("imagens\Thyatis.jpg").resize((500,500)))
my_img19 = ImageTk.PhotoImage(Image.open("imagens\Valkaria.jpg").resize((500,500)))
my_img20 = ImageTk.PhotoImage(Image.open("imagens\Wynna.jpg").resize((500,500)))

image_list = [my_img1, my_img2, my_img3, my_img4, my_img5, my_img6, my_img7, my_img8, my_img9, my_img10,
              my_img11, my_img12, my_img13, my_img14, my_img15, my_img16, my_img17, my_img18, my_img19, my_img20]

status = Label(root, text="Deus: {} - Imagem {} of {}".format(Dictionary[1],1,len(image_list)), bd=1, relief=SUNKEN, anchor=W)

my_label = Label(image=my_img1)
my_label.grid(row=2, column=0, columnspan=3)

def forward(image_number):
    global my_label
    global button_forward
    global button_back

    my_label.grid_forget()
    my_label = Label(image=image_list[image_number-1])
    my_label.grid(row=2, column=0, columnspan=3)
    button_forward = Button(
        root, text=">>", command=lambda: forward(image_number+1))
    button_back = Button(root, text="<<", command=lambda: back(image_number-1))

    if image_number == 20:
        button_forward = Button(root, text=">>", state=DISABLED)

    my_label.grid(row=2, column=0, columnspan=3)
    button_back.grid(row=0, column=0)
    button_exit.grid(row=0, column=1)
    button_forward.grid(row=0, column=2)

    status = Label(root, text="Deus: {} - Imagem {} of {}".format(Dictionary[image_number],image_number,len(image_list)), bd=1, relief=SUNKEN, anchor=W)
    status.grid(row=1 ,column=0, columnspan=3, pady=5, sticky=W+E)


def back(image_number):
    global my_label
    global button_forward
    global button_back

    my_label.grid_forget()
    my_label = Label(image=image_list[image_number-1])
    my_label.grid(row=2, column=0, columnspan=3)
    button_forward = Button(
        root, text=">>", command=lambda: forward(image_number+1))
    button_back = Button(root, text="<<", command=lambda: back(image_number-1))

    status = Label(root, text="Deus: {} - Imagem {} of {}".format(Dictionary[image_number],image_number,len(image_list)), bd=1, relief=SUNKEN, anchor=W)
    status.grid(row=1 ,column=0, columnspan=3, pady=5, sticky=W+E)


    if image_number == 1:
        button_back = Button(root, text="<<", state=DISABLED)

    my_label.grid(row=2, column=0, columnspan=3)
    button_back.grid(row=0, column=0)
    button_exit.grid(row=0, column=1)
    button_forward.grid(row=0, column=2)


# Buttons
button_back = Button(root, text="<<", command=back, state=DISABLED)
button_exit = Button(root, text=">>", command=lambda: forward(2))
button_forward = Button(root, text="Exit Program", command=root.quit)

# Alocação de Botões
button_back.grid(row=0, column=0)
button_exit.grid(row=0, column=2)
button_forward.grid(row=0, column=1, pady=5)
status.grid(row=1 ,column=0, columnspan=3, pady=5, sticky=W+E)


root.mainloop()
