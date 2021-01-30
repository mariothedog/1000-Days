# 1000 Days
### Details
The rules are much more relaxed compared to the [original's](https://www.reddit.com/r/ThousandDays/comments/kpkszp/day_11_yes_very_embarassing/):
* The definition of a day is not strictly defined. If it goes past midnight I won't count it as a different day
* A reasonable amount of work must be done for a day to be considered as completed. For example, I can't just edit one line of code
* Code that I am required to do (i.e. not voluntary) will not be included (e.g. school projects)

### Days
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
* Credit to this [script by Freenove](https://github.com/Freenove/Freenove_Ultimate_Starter_Kit_for_Raspberry_Pi/blob/master/Code/Python_Code/26.1.1_WebIO/WebIO.py) as it was really helpful with the web server  
![RPIBot Website](https://cdn.discordapp.com/attachments/535532221663019028/796919610439106580/day_6.png)

**Day 7:** *(Streak: 7 - 8/1/2020)*
* HTML and CSS
* [RPIBot](https://github.com/mariothedog/RPIBot)
* Checkboxes now have labels (very hacky solution)  
![RPIBot Website](https://cdn.discordapp.com/attachments/535532221663019028/797290712228036628/day_7.png)

**Day 8:** *(Streak: 8 - 9/1/2020)*
* Decided to take a break from RPIBot by doing some more C++
* [Codewars 6 Kyu Kata - Unique In Order](https://www.codewars.com/kata/54e6533c92449cc251001667)
* [Solution](https://www.codewars.com/kata/reviews/5d98f282b1415f0001893334/groups/5ffa5e8df0aa1300019d085f)

**Day 9:** *(Streak: 9 - 10/1/2020)*
* Python (Tkinter)
* This was initially for a school project but I wanted to learn a bit more about GUI so I decided to expand on it a bit
* Note that it is still a work in progress
* [Source](https://github.com/mariothedog/Basic-Pupil-Database-App)  
![Main Menu](https://cdn.discordapp.com/attachments/535532221663019028/798000288950124573/unknown.png)
![Login Menu](https://cdn.discordapp.com/attachments/535532221663019028/798000332444532746/unknown.png)

**Day 10:** *(Streak: 10 - 11/1/2020)*
* Python (Tkinter)
* I finished the pupil database app but it could do with a bit of refactoring
* [Source](https://github.com/mariothedog/Basic-Pupil-Database-App)  
![Demo Gif](https://cdn.discordapp.com/attachments/535532221663019028/798343476148043776/Pupil_Database_Demo.gif)

**Day 11:** *(Streak: 11 - 12/1/2020)*
* C++
* This took me way longer than I'd care to admit (just under an hour!)... C++ is truly terrifying
* [Codwars 6 Kyu Kata - Create Phone Number](https://www.codewars.com/kata/525f50e3b73515a6db000b83/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/5dd1a2d1014ee40001077b25/groups/5ffe4da3507d580001220e80)

**Day 12:** *(Streak: 12 - 13/1/2020)*
* C++
* [Codwars 6 Kyu Kata - Find the missing term in an Arithmetic Progression](https://www.codewars.com/kata/52de553ebb55d1fca3000371/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/579fa0eb74cca11be3000056/groups/5fff91dcbd78f400013c4320)

**Day 13:** *(Streak: 13 - 14/1/2020)*
* JavaScript
* I learned a bit about making userscripts using Tampermonkey and made a script that adds a streak counter to [realkana](https://realkana.com)
* [Source](https://gist.github.com/mariothedog/5602eb23272109c543e99bebe05064b0)  
![Streak Counter](https://cdn.discordapp.com/attachments/535532221663019028/799419177336963082/Day_13.png)

**Day 14:** *(Streak: 14 - 15/1/2020)*
* C++
* [Codwars 6 Kyu Kata - Are they the "same"?](https://www.codewars.com/kata/550498447451fbbd7600041c/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/575e5517569d928432000003/groups/600255aa7dbf000001f9c59f)

**Day 15:** *(Streak: 15 - 16/1/2020)*
* C++
* [Codwars 6 Kyu Kata - Counting Duplicates](https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/cpp)  
* [Solution](https://pastebin.com/6ufa71J0)

**Day 16:** *(Streak: 16 - 17/1/2020)*
* C++
* [Codwars 6 Kyu Kata - Playing with digits](https://www.codewars.com/kata/5552101f47fc5178b1000050/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/57874987d9456ea80500019f/groups/6004b91cfe09c70001f82ee6)

**Day 17:** *(Streak: 17 - 18/1/2020)*
* Python
* I'm working on a new app that that will log your spent spent on each program every day
* Currently it's very experimental as I'm still learning about the ctypes module and Windows DLLs
* [Source](https://github.com/mariothedog/Time-Tracking-App)

**Day 18:** *(Streak: 18 - 19/1/2020)*
* Python
* Working on the [time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/591d2eeca6fed6481e2a4d1fb0a2f161ab706701)
* Now using the win32gui module instead of ctypes as I find that it's much simpler
* The app now just logs all your open windows to a file
* There is no pause between each write to the log.txt file so it writes thousands of entries a second
* Seems to be pretty buggy at the moment

**Day 19:** *(Streak: 19 - 20/1/2020)*
* Python
* Working on the time tracking app(https://github.com/mariothedog/Time-Tracking-App/tree/b8c166f44c5f7c46e90f507bc2d2804f73f304d0)
* I fixed one of the issues I noticed yesterday (I thought IsIconic meant *not* minimised but now now that it means that it *is* minimized)
* Still not perfect as it logs some background processes like `Microsoft Text Input Application`
* Now only logs activity once a second so it doesn't eat up CPU
* [Learnt about cProfile](https://stackoverflow.com/a/582337/8004215) which sounds pretty useful

**Day 20:** *(Streak: 20 - 21/1/2020)*
* Python
* [Working on the time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/61b9a6529ae301f005009177a18833bdcd4ca07b)
* Now using atexit to close the log file
* Log file now uses utf-8 encoding for unicode support
* Writes process name to the log file as well now (using psutil)
* Added some more checks so not all windows get logged
* Background processes like `ApplicationFrameHost.exe`, `TextInputHost.exe`, and `Program Manager` but I'm struggling to find a way to fix that
* I'm thinking about just make it track the active window since I feel like that makes quite a bit more sense
* I think it would be cool to have the time you spent on the active window be displayed in the upper right corner of the window/near the icon/title

**Day 21:** *(Streak: 21 - 22/1/2020)*
* Python
* [Working on the time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/5ad29b012800d5c5d3d6051b18ef991af38af1fb)
* Added a window (using PyQt5) that times how long you've been on a program for
* It's not completely finished as I plan on moving the timer to the corner of the window as currently it just stays in the middle of the screen regardless of the window position
* I'll probably stop working on this after I fix this up as I found a program called [ActivityWatch](https://github.com/ActivityWatch/activitywatch) which pretty much does everything I was planning on doing and a lot more  
![Day 21](https://cdn.discordapp.com/attachments/535532221663019028/802352547821649960/day_21.png)

**Day 22:** *(Streak: 22 - 23/1/2020)*  
**Day 23:** *(Streak: 23 - 24/1/2020)*  
**Day 24:** *(Streak: 24 - 25/1/2020)*  
**Day 25:** *(Streak: 25 - 26/1/2020)*  
**Day 26:** *(Streak: 26 - 27/1/2020)*  
**Day 27:** *(Streak: 27 - 28/1/2020)*  
**Day 28:** *(Streak: 28 - 29/1/2020)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* This last week I participated in the [BTP Game Jam](https://itch.io/jam/blackthornprod-game-jam-3) with two other teammates ([Schweini](https://github.com/Schweini07) and [marek](https://github.com/marekmaskarinec))
* The theme of the game jam was "Less is More"
* We made a top-down procedurally generated shoot-em-up roguelike called "Life Sacrificer"
* It was based around the mechanic that sacrificing your lives (which you have 10 of in total) will grant you more upgrades
* My biggest contribution was the entities so things like player movement, the enemies, and the boss
* It was my first time using pathfinding which was very hard to get right (although I did use Godot's built-in system)
* I also learnt quite a bit more about git (first time having to use rebase!)
* [Available on Windows, Mac, Linux, and HTML5 here](https://schweini007.itch.io/life-sacrificer)
* [Source Code](https://github.com/Schweini07/BTP-Game-Jam)