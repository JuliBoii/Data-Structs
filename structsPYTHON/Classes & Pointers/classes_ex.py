class Cookie:
    
    def __init__(self, color):
        self.color = color
        
    def set_color(self, color):
        self.color = color
        
    def get_color(self):
        return self.color
    

cookie_1 = Cookie("green")
cookie_2 = Cookie("blue")

print("Cookie 1 is:", cookie_1.get_color())
print("Cookie 2 is:", cookie_2.get_color())

cookie_1.set_color("yellow")

print("\nCookie 1 is now:", cookie_1.get_color())
print("Cookie 2 is still:", cookie_2.get_color())
