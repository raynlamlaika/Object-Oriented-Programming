

class Car:
    def __init__(self, name, color, year):
        self.name = name       # Car's name
        self.color = color     # Car's color
        self.year = year       # Year of manufacture
        self.running = False   # Boolean to track if the car is running
        self.speed = 0         # Initial speed is 0

    # Method to start running the car at a certain speed
    def run(self, speed):
        if not self.running:  # If the car isn't running
            self.running = True  # Set it to running
            self.speed = speed   # Set the car speed
            print(f"The car is now running at a speed of {self.speed} km/h.")
        else:
            print(f"The car is already running at {self.speed} km/h.")

    # Method to display car details
    def display_info(self):
        print(f"This car is a {self.name}, built in {self.year}, and is {self.color} in color.")

# Creating a new Car object
newCar = Car(name='Tesla', year=2020, color='black')

# Calling methods
newCar.display_info()  # Display the car information
newCar.run(40)         # Start the car and set its speed to 40 km/h

