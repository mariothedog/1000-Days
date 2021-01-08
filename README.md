# 1000 Days

**[Day 1:](https://github.com/mariothedog/1000-Days/blob/main/Days/Day%201/bogosort_array.cpp)** *(Streak: 1 - 2/1/2020)*
* C++
* [Bogosort algorithm](https://en.wikipedia.org/wiki/Bogosort) using arrays
* Randomly shuffles an array until it's in the correct order
* *Also: Created the repo*

**[Day 2:](https://github.com/mariothedog/1000-Days/blob/main/Days/Day%202/bogosort_vector.cpp)** *(Streak: 2 - 3/1/2020)*
* C++
* [Bogosort algorithm](https://en.wikipedia.org/wiki/Bogosort) using vectors
* Randomly shuffles a vector until it's in the correct order
* *Also: Refactored the repo and learned a bit more about references and templates*

**Day 3:** *(Streak: 3 - 4/1/2020)*
* JavaScript
* Worked on my Discord bot - [Mariothebot](https://github.com/mariothedog/Mariothebot)
* Overhauled the [add-reaction-channel](https://github.com/mariothedog/Mariothebot/blob/master/Commands/Reactions/add-reaction-channel.js) command (took way longer than it should have)
![Command](https://cdn.discordapp.com/attachments/535532221663019028/795854063145058304/add-reaction-channel.png)
* Updated the [tags](https://github.com/mariothedog/Mariothebot/blob/master/Commands/NSFW/tags.js) command (NSFW) to work with a more up-to-date package (previous one was deprecated)

**Day 4:** *(Streak: 4 - 5/1/2020)*
* JavaScript
* Made a new Discord bot - [RPIBot](https://github.com/mariothedog/RPIBot)
* Allows you to write to a Raspberry PI's GPIO pin (in this case, it toggles an LED)  
* I'll probably expand on this bot in later days  
![Commands](https://cdn.discordapp.com/attachments/535532221663019028/796196450920955934/gpio_command.png)
![Result of "r!gpio 17 1" command](https://cdn.discordapp.com/attachments/535532221663019028/796197504948895744/gpio_command_on.png)
![Result of "r!gpio 17 0" command](https://cdn.discordapp.com/attachments/535532221663019028/796197503749587003/gpio_command_off.png)

**Day 5:** *(Streak: 5 - 6/1/2020)*
* JavaScript and Python
* Continued to work on [RPIBot](https://github.com/mariothedog/RPIBot)
* I made it so the bot can now be deployed on my computer but will make post requests to an HTTP server that is on my RPI
* The HTTP server was programmed in Python
* I'll add it to the repo tomorrow morning (it's getting late!)

**Day 6:** *(Streak: 6 - 7/1/2020)*
* JavaScript, Python, HTML, and a *tiny* bit of CSS
* Still working on [RPIBot](https://github.com/mariothedog/RPIBot)
* Most of the work was done on the web server  
* The website for it is now at least usable
* When the checkbox is ticked the corresponding GPIO pin will output
* There's still a lot of things that need to be cleaned up which I'll work on tomorrow:
1. It's impossible to tell what checkbox corresponds to which GPIO pin unless you know beforehand
2. If one of the GPIO pins is already outputting voltage the website won't tell the user accordingly
3. The UI is ugly  
![RPIBot Website](https://cdn.discordapp.com/attachments/535532221663019028/796919610439106580/day_6.png)