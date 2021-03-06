# 1000 Days
### Details
The rules are much more relaxed compared to the [original's](https://www.reddit.com/r/ThousandDays/comments/kpkszp/day_11_yes_very_embarassing/):
* The definition of a day is not strictly defined. If it goes past midnight I won't count it as a different day
* A reasonable amount of work must be done for a day to be considered as completed. For example, I can't just edit one line of code
* Code that I am required to do (i.e. not voluntary) will not be included (e.g. school projects)
* The work doesn't necessarily have to be code as long as it is something related to it. For example, drawing mockups or planning
* "===" is used to separate different projects worked on during the same day

### Days
**[Day 1:](https://github.com/mariothedog/1000-Days/blob/main/Days/Day%201/bogosort_array.cpp)** *(Streak: 1 - 2/1/2021)*
* C++
* [Bogosort algorithm](https://en.wikipedia.org/wiki/Bogosort) using arrays
* Randomly shuffles an array until it's in the correct order
* *Also: Created the repo*

**[Day 2:](https://github.com/mariothedog/1000-Days/blob/main/Days/Day%202/bogosort_vector.cpp)** *(Streak: 2 - 3/1/2021)*
* C++
* [Bogosort algorithm](https://en.wikipedia.org/wiki/Bogosort) using vectors
* Randomly shuffles a vector until it's in the correct order
* *Also: Refactored the repo and learned a bit more about references and templates*

**Day 3:** *(Streak: 3 - 4/1/2021)*
* JavaScript
* Worked on my Discord bot - [Mariothebot](https://github.com/mariothedog/Mariothebot)
* Overhauled the [add-reaction-channel](https://github.com/mariothedog/Mariothebot/blob/master/Commands/Reactions/add-reaction-channel.js) command (took way longer than it should have)  
![Command](https://cdn.discordapp.com/attachments/535532221663019028/795854063145058304/add-reaction-channel.png)
* Updated the [tags](https://github.com/mariothedog/Mariothebot/blob/master/Commands/NSFW/tags.js) command (NSFW) to work with a more up-to-date package (previous one was deprecated)

**Day 4:** *(Streak: 4 - 5/1/2021)*
* JavaScript
* Made a new Discord bot - [RPIBot](https://github.com/mariothedog/RPIBot)
* Allows you to write to a Raspberry PI's GPIO pin (in this case, it toggles an LED)  
* I'll probably expand on this bot in later days  
![Commands](https://cdn.discordapp.com/attachments/535532221663019028/796196450920955934/gpio_command.png)
![Result of "r!gpio 17 1" command](https://cdn.discordapp.com/attachments/535532221663019028/796197504948895744/gpio_command_on.png)
![Result of "r!gpio 17 0" command](https://cdn.discordapp.com/attachments/535532221663019028/796197503749587003/gpio_command_off.png)

**Day 5:** *(Streak: 5 - 6/1/2021)*
* JavaScript and Python
* Continued to work on [RPIBot](https://github.com/mariothedog/RPIBot)
* I made it so the bot can now be deployed on my computer but will make post requests to an HTTP server that is on my RPI
* The HTTP server was programmed in Python
* I'll add it to the repo tomorrow morning (it's getting late!)

**Day 6:** *(Streak: 6 - 7/1/2021)*
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

**Day 7:** *(Streak: 7 - 8/1/2021)*
* HTML and CSS
* [RPIBot](https://github.com/mariothedog/RPIBot)
* Checkboxes now have labels (very hacky solution)  
![RPIBot Website](https://cdn.discordapp.com/attachments/535532221663019028/797290712228036628/day_7.png)

**Day 8:** *(Streak: 8 - 9/1/2021)*
* Decided to take a break from RPIBot by doing some more C++
* [Codewars 6 Kyu Kata - Unique In Order](https://www.codewars.com/kata/54e6533c92449cc251001667)
* [Solution](https://www.codewars.com/kata/reviews/5d98f282b1415f0001893334/groups/5ffa5e8df0aa1300019d085f)

**Day 9:** *(Streak: 9 - 10/1/2021)*
* Python (Tkinter)
* This was initially for a school project but I wanted to learn a bit more about GUI so I decided to expand on it a bit
* Note that it is still a work in progress
* [Source](https://github.com/mariothedog/Basic-Pupil-Database-App)  
![Main Menu](https://cdn.discordapp.com/attachments/535532221663019028/798000288950124573/unknown.png)
![Login Menu](https://cdn.discordapp.com/attachments/535532221663019028/798000332444532746/unknown.png)

**Day 10:** *(Streak: 10 - 11/1/2021)*
* Python (Tkinter)
* I finished the pupil database app but it could do with a bit of refactoring
* [Source](https://github.com/mariothedog/Basic-Pupil-Database-App)  
![Demo Gif](https://cdn.discordapp.com/attachments/535532221663019028/798343476148043776/Pupil_Database_Demo.gif)

**Day 11:** *(Streak: 11 - 12/1/2021)*
* C++
* This took me way longer than I'd care to admit (just under an hour!)... C++ is truly terrifying
* [Codewars 6 Kyu Kata - Create Phone Number](https://www.codewars.com/kata/525f50e3b73515a6db000b83/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/5dd1a2d1014ee40001077b25/groups/5ffe4da3507d580001220e80)

**Day 12:** *(Streak: 12 - 13/1/2021)*
* C++
* [Codewars 6 Kyu Kata - Find the missing term in an Arithmetic Progression](https://www.codewars.com/kata/52de553ebb55d1fca3000371/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/579fa0eb74cca11be3000056/groups/5fff91dcbd78f400013c4320)

**Day 13:** *(Streak: 13 - 14/1/2021)*
* JavaScript
* I learned a bit about making userscripts using Tampermonkey and made a script that adds a streak counter to [realkana](https://realkana.com)
* [Source](https://gist.github.com/mariothedog/5602eb23272109c543e99bebe05064b0)  
![Streak Counter](https://cdn.discordapp.com/attachments/535532221663019028/799419177336963082/Day_13.png)

**Day 14:** *(Streak: 14 - 15/1/2021)*
* C++
* [Codewars 6 Kyu Kata - Are they the "same"?](https://www.codewars.com/kata/550498447451fbbd7600041c/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/575e5517569d928432000003/groups/600255aa7dbf000001f9c59f)

**Day 15:** *(Streak: 15 - 16/1/2021)*
* C++
* [Codewars 6 Kyu Kata - Counting Duplicates](https://www.codewars.com/kata/54bf1c2cd5b56cc47f0007a1/cpp)  
* [Solution](https://pastebin.com/6ufa71J0)

**Day 16:** *(Streak: 16 - 17/1/2021)*
* C++
* [Codewars 6 Kyu Kata - Playing with digits](https://www.codewars.com/kata/5552101f47fc5178b1000050/cpp)  
* [Solution](https://www.codewars.com/kata/reviews/57874987d9456ea80500019f/groups/6004b91cfe09c70001f82ee6)

**Day 17:** *(Streak: 17 - 18/1/2021)*
* Python
* I'm working on a new app that that will log your spent spent on each program every day
* Currently it's very experimental as I'm still learning about the ctypes module and Windows DLLs
* [Source](https://github.com/mariothedog/Time-Tracking-App)

**Day 18:** *(Streak: 18 - 19/1/2021)*
* Python
* Working on the [time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/591d2eeca6fed6481e2a4d1fb0a2f161ab706701)
* Now using the win32gui module instead of ctypes as I find that it's much simpler
* The app now just logs all your open windows to a file
* There is no pause between each write to the log.txt file so it writes thousands of entries a second
* Seems to be pretty buggy at the moment

**Day 19:** *(Streak: 19 - 20/1/2021)*
* Python
* Working on the time tracking app(https://github.com/mariothedog/Time-Tracking-App/tree/b8c166f44c5f7c46e90f507bc2d2804f73f304d0)
* I fixed one of the issues I noticed yesterday (I thought IsIconic meant *not* minimised but now now that it means that it *is* minimized)
* Still not perfect as it logs some background processes like `Microsoft Text Input Application`
* Now only logs activity once a second so it doesn't eat up CPU
* [Learnt about cProfile](https://stackoverflow.com/a/582337/8004215) which sounds pretty useful

**Day 20:** *(Streak: 20 - 21/1/2021)*
* Python
* [Working on the time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/61b9a6529ae301f005009177a18833bdcd4ca07b)
* Now using atexit to close the log file
* Log file now uses utf-8 encoding for unicode support
* Writes process name to the log file as well now (using psutil)
* Added some more checks so not all windows get logged
* Background processes like `ApplicationFrameHost.exe`, `TextInputHost.exe`, and `Program Manager` but I'm struggling to find a way to fix that
* I'm thinking about just make it track the active window since I feel like that makes quite a bit more sense
* I think it would be cool to have the time you spent on the active window be displayed in the upper right corner of the window/near the icon/title

**Day 21:** *(Streak: 21 - 22/1/2021)*
* Python
* [Working on the time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/5ad29b012800d5c5d3d6051b18ef991af38af1fb)
* Added a window (using PyQt5) that times how long you've been on a program for
* It's not completely finished as I plan on moving the timer to the corner of the window as currently it just stays in the middle of the screen regardless of the window position
* I'll probably stop working on this after I fix this up as I found a program called [ActivityWatch](https://github.com/ActivityWatch/activitywatch) which pretty much does everything I was planning on doing and a lot more  
![Day 21](https://cdn.discordapp.com/attachments/535532221663019028/802352547821649960/day_21.png)

**Day 22:** *(Streak: 22 - 23/1/2021)*  
**Day 23:** *(Streak: 23 - 24/1/2021)*  
**Day 24:** *(Streak: 24 - 25/1/2021)*  
**Day 25:** *(Streak: 25 - 26/1/2021)*  
**Day 26:** *(Streak: 26 - 27/1/2021)*  
**Day 27:** *(Streak: 27 - 28/1/2021)*  
**Day 28:** *(Streak: 28 - 29/1/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* This week I participated in the [BTP Game Jam](https://itch.io/jam/blackthornprod-game-jam-3) with two other teammates ([Schweini](https://github.com/Schweini07) and [marek](https://github.com/marekmaskarinec))
* The theme of the game jam was "Less is More"
* We made a top-down procedurally generated shoot-em-up roguelike called "Life Sacrificer"
* It was based around the mechanic that sacrificing your lives (which you have 10 of in total) will grant you more upgrades
* My biggest contribution was the entities so things like player movement, the enemies, and the boss
* It was my first time using pathfinding which was very hard to get right (although I did use Godot's built-in system)
* I also learnt quite a bit more about git (first time having to use `rebase`!)
* [Available on Windows, Mac, Linux, and HTML5 here](https://schweini007.itch.io/life-sacrificer)
* [Source Code](https://github.com/Schweini07/BTP-Game-Jam)  
![Life Sacrificer](https://cdn.discordapp.com/attachments/535532221663019028/805235581411524648/Life_Sacrificer.png)

**Day 29:** *(Streak: 29 - 30/1/2021)*  
* Python
* The [time tracking app](https://github.com/mariothedog/Time-Tracking-App/tree/bbb3e4a7f27af6f74a5405e815e45bec4e8b258d) is now complete (for the foreseeable future)
* I found another program called [Cold Turkey Blocker](https://getcoldturkey.com/) which while time tracking isn't its main focus, it does allow you see various statistics about websites visited and applications used. It seems to be a bit more stable than ActivityWatch but unfortunately it's not open source
* I used [auto-py-to-exe](https://pypi.org/project/auto-py-to-exe/) to build the app
* [Download it here](https://github.com/mariothedog/Time-Tracking-App/releases/tag/v1.0) (most likely only works on Windows)  
![Time Tracking App](https://cdn.discordapp.com/attachments/535532221663019028/805231820323946496/Time_Tracking_App.gif)

**Day 30:** *(Streak: 30 - 31/1/2021)*  
* JavaScript, JavaScript, HTML, and CSS
* Back to working on [RPIBot](https://github.com/mariothedog/RPIBot)
* It took me a while but I managed to get git working on my RPI
* I also refactored the web server's HTML a bit but there is no visual difference
* I'm [trying to store the JavaScript in an external file](https://github.com/mariothedog/RPIBot/tree/35653d69dba9ab684e08abfd53676854d1e75da5) but it's not going well

**Day 31:** *(Streak: 31 - 1/2/2021)*  
* JavaScript, Python, HTML
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/1655d61cfea21bc4e91a158ded8089e3d25b634f)
* One month done!
* I made a lot of progress today
* I'm now using Flask for the web server which allowed me to use an external file for both the JavaScript and the css
* I'm now also using jQuery (AJAX) for making post requests from the web page back to the Flask server
* The bot's `toggle` command now actually does what its name implies. When you use it you don't have to specify a write value. If the pin is already on, it will turn off, and vice versa

**Day 32:** *(Streak: 32 - 2/2/2021)*  
* JavaScript, HTML, and CSS
* [RPIBot](https://github.com/mariothedog/RPIBot/commit/48ea284f9af366409c90faaa67bd9cb0082c9f61)
* The position of the checkboxes is no longer hardcoded and now uses a [flexbox](https://www.w3schools.com/css/css3_flexbox.asp) and `margin-right` instead
* Clicking the text now also toggles the checkbox as well as just clicking the checkbox directly (using a `label` tag)

**Day 33:** *(Streak: 33 - 3/2/2021)*  
* Python
* I didn't have much free time today so all I worked on was this Codewars Kata
* I haven't finished it yet as my solution isn't efficient enough
* [Codewars 5 Kyu Kata - Gap in Primes](https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/python)  
* [Solution](https://www.codewars.com/kata/reviews/561ea274e41ebb191e00001c/groups/601bf11dd02c870001b817d4)

**Day 34:** *(Streak: 34 - 4/2/2021)*  
* Python
* Same Kata but this time it's finished
* I'm quite proud of my solution even though it feels like I'm cheating
* What I did was I generated the first 1100000 prime numbers at the beginning of the program (surprisingly fast, only took about 0.1 seconds) and since then used the `gap` method to *just* check the gaps
* It's quite efficient since the prime numbers are only calculated once and can then be used for every test case
* However, this method relies on the fact that the upper limit (of `n`) is `1100000`
* [Codewars 5 Kyu Kata - Gap in Primes](https://www.codewars.com/kata/561e9c843a2ef5a40c0000a4/python)  
* [Solution](https://www.codewars.com/kata/reviews/561ea274e41ebb191e00001c/groups/601bf11dd02c870001b817d4)  
===
* JavaScript
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/e1fb88e56e3c286fba6ffda1bcae723be0dc1836)
* Added a `states` command which tells the user the state of every GPIO pin  
![RPIBot States Command](https://cdn.discordapp.com/attachments/535532221663019028/806977713243684884/States_Command.png)

**Day 35:** *(Streak: 35 - 5/2/2021)*  
* RPIBot
* No changes to its code
* All I did was I connected an LED bar graph to my RPI
![LED Bar Graph](https://cdn.discordapp.com/attachments/535532221663019028/807632355602071582/LED_Bar_Graph.png)
![GPIO Pins](https://cdn.discordapp.com/attachments/535532221663019028/807632343233593354/GPIO_Pins.png)

**Day 36:** *(Streak: 36 - 6/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* Experimented with steering behavior
* Credit to GDScript for their [helpful tutorial series](https://www.youtube.com/playlist?list=PLhqJJNjsQ7KFYRNAk9O95x8E4dJSdaheq) on it
* [Source](https://github.com/mariothedog/Steering-AI/tree/773f976bce50914ab77b8fd8c0352886e5a6549c)

**Day 37:** *(Streak: 37 - 7/2/2021)*  
* JavaScript
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/22ef0a362028550eacb0073120b3124efff3d84e)
* Added a bunch of commands related to displaying binary on my LED Bar Graph
* I plan on turning it into a binary calculator within the next few days (I'm not sure how many operators I'll add yet)
* 37 in binary (100101):
![LED Bar Graph Binary](https://cdn.discordapp.com/attachments/535532221663019028/808116532109639680/LED_Bar_Graph_Binary.png)

**Day 38:** *(Streak: 38 - 8/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Working on a new project to simulate natural selection](https://github.com/mariothedog/Natural-Selection/tree/e6d07f1001a0cc03a55de3a221c60ce3b3867786)
* Currently the little guys just run around a box and don't do much else  
![](https://cdn.discordapp.com/attachments/535532221663019028/808746221429850142/Day_38.gif)

**Day 39:** *(Streak: 39 - 9/2/2021)*  
* JavaScript
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/43df90f2752a0f2437eb0a15025c8d3f419e563f)
* I did a lot of refactoring today
* Added a `get-bits-number` command which just converts the binary on the LED bar graph into 

**Day 40:** *(Streak: 40 - 10/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Natural Selection Simulation](https://github.com/mariothedog/Natural-Selection/tree/3526331a6581dbe6b2be3abc66d02b156ae3ceba)
* There's actually some natural selection going on now
* Currently only the speed property mutates which unsurprisingly rises over time (there are no repercussions to having a really high speed)
* I think the time scale property might be a bit buggy but I'm not entirely sure  
![](https://cdn.discordapp.com/attachments/535532221663019028/809240554298540042/Day_40.gif)

**Day 41:** *(Streak: 41 - 11/2/2021)*  
* Python
* [Codewars 6 Kyu Kata - Pairs of Bears](https://www.codewars.com/kata/57d165ad95497ea150000020)
* [Solution](https://www.codewars.com/kata/reviews/5de92d5610dfae00012aa90c/groups/602311b7b6e12c000175b009)

**Day 42:** *(Streak: 42 - 12/2/2021)*  
* JavaScript
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/674f599abc0afba97eda755483a255845bcd918a)
* Added a command that adds numbers on the binary display
* There's an optional transition parameter which makes it so the calculation isn't instant
* Counting from 0 to 127 (2^7 - 1):  
![Day 42](Days/Day%2042/Day%2042.gif)

**Day 43:** *(Streak: 43 - 13/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Natural Selection Simulation](https://github.com/mariothedog/Natural-Selection/commit/84dd80f53bfe59167c9efff92d08114c86d5621b)
* Added some graphs
* The one on the right is for population while the one on the left is for the population's average speed
* The graphs aren't very descriptive currently but some general trends are still noticable:
* Average speed tends to gradually increase over time
* When population spikes it tends to drop rapidly shortly afterwards  
![Day 43](Days/Day%2043/Day%2043.gif)

**Day 44:** *(Streak: 44 - 14/2/2021)*  
* JavaScript
* [RPIBot](https://github.com/mariothedog/RPIBot/tree/2df3e5f05f649e9a599b3c199ae8af284b38e7f0)
* I added a `calculate-bits-number` command which simplifies an arithmetic expression and then displays it
* I used [mathjs](https://mathjs.org/) so it wasn't too difficult to implement  
![Day 44](Days/Day%2044/Day%2044.png)  
===
* I'm entering the [first Brackeys Game Jam of 2021](https://itch.io/jam/brackeys-5)
* [Source](https://github.com/mariothedog/brackeys-game-jam/tree/b918b2b32ec2fce1d793061921acb15377c0df9e)
* I plan on making a tower defence-like game
* I added a drag and drop mechanic to the towers
* You can't move them once you have placed them currently  
![Day 44 Game](Days/Day%2044/Day%2044%20Game.gif)

**Day 45:** *(Streak: 45 - 15/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Natural Selection Simulation](https://github.com/mariothedog/Natural-Selection/tree/7b47039a54f488415063a6fb932cecceabfd95e9)
* I fixed some bugs related to the time scale input GUI
* I spent a while trying to fix the time scale determinism issues but I couldn't find a solution  
===
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/e54e9cc0957ac8d04d7404daf3896e976ed9f599)
* Towers can now be:
1. Moved once placed
2. Put back into the inventory
3. Towers can now be merged to create stronger turrets (currently represented by a bigger gun)
4. Added a start button which causes turrets to shoot every second (merged turrets don't change yet)  
![Day 45](Days/day_45/day_45.gif)

**Day 46:** *(Streak: 46 - 16/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/0d402dc48b3f76b817eacbaca3863d6aa9c5ed24)  
![Day 46](Days/day_46/day_46.gif)

**Day 47:** *(Streak: 47 - 17/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/910d192a3aa9c9d1897a5c5294f34701915e9751)  
![Day 47](Days/day_47/day_47.gif)

**Day 48:** *(Streak: 48 - 18/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/0b63a016d5c00cc685135fae2535d106584e1dd5)  
![Day 48](Days/day_48/day_48.gif)

**Day 49:** *(Streak: 49 - 19/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/3776d417467bc19765e592a51d72046227a58ea7)  
![Day 49](Days/day_49/day_49.gif)  
===
* Python
* I experimented a bit with matplotlib using [this tutorial](https://youtu.be/UO98lJQ3QGI)

**Day 50:** *(Streak: 50 - 20/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/cb03ec3060f19e503c73959ee0805ff948f0c98c)
* I polished it up a bit and I made 10 levels and one infinite level after that

**Day 51:** *(Streak: 51 - 21/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Brackeys Game Jam Entry](https://github.com/mariothedog/brackeys-game-jam/tree/7742bc5ae2f13bad46aea111ac5e7c3162613b75)
* I added sound effects
* I was planning on adding music but the piece I wrote was really bad so I just scrapped it
* The game has a name now - "Simultaneous Turrets"
* You can play it [here (HTML5, Windows, Mac, and Linux)](https://mariothedog.itch.io/simultaneous-turrets)
* [Video walkthrough](https://www.youtube.com/watch?v=OLE0pTRPYTA)

**Day 52:** *(Streak: 52 - 22/2/2021)*  
* It's been a few (5!!) days since I last updated this - sorry about that! Fortunately, my streak is still going strong
* Python
* [Codewars 6 Kyu Kata - Simple Fun #132: Number Of Carries](https://www.codewars.com/kata/58a6568827f9546931000027)
* [Solution](https://www.codewars.com/kata/reviews/58e48937d1c6cd5490000060/groups/60347fafe89cdf0001d0c62f)

**Day 53:** *(Streak: 53 - 23/2/2021)*  
* Git (does this even count?) and GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/a6df5ebe709fee33f5bc29cfabca5df20872684a)
* I didn't do much today aside from preparing the simultaneous turrets repo for the post-jam version
* I'll be remaking the game from scratch since a lot of things need to be refactored and redesigned

**Day 54:** *(Streak: 54 - 24/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/41af226145dbf8abf697a1586a8c8280b0ec6a19)
* I added a basic level editor
* It pretty much just saves the tilemap data to a resource file

**Day 55:** *(Streak: 55 - 25/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/711fbd8f0ad3a654daf265f53fedfbaeb922e610)
* I added some things in preparation for the enemy path tiles but they're not very interesting

**Day 56:** *(Streak: 56 - 26/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/c643ccb5f8f5b728cfce40a4e41fea89a6f209a1)
* Lots of progress on the enemy paths today
* I added A\* pathfinding which generates every path from every enemy start position to every enemy end position
* 3 enemy paths:  
![Enemy Pathfinding](Days/day_56/day_56.png)

**Day 57:** *(Streak: 57 - 27/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/3db403f0a7b0d91c395628f44ed3ecc58c666df2)
* I added enemies that follow the paths  
![Enemy Pathfinding](Days/day_57/day_57.gif)

**Day 58:** *(Streak: 58 - 28/2/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/b4fa85ce4417303ef9cc67c50c78d3da06140474)
* Work in progress inventory  
![](Days/day_58/day_58.png)

**Day 59:** *(Streak: 59 - 1/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/89d58d92c8c687f253fe15ee92fa46fc36b7f456)
* Redesigned the inventory
* Also experimented a lot with making fonts  
![](Days/day_59/day_59.png)

**Day 60:** *(Streak: 60 - 2/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/ae7fb9775b0c37cbe73a5ac23f5f0dc3734a6c12)
* Inventory that slides in and out  
![](Days/day_60/day_60.gif)

**Day 61:** *(Streak: 61 - 3/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/37ec43e70dcc0cdec8c97506f39dc179bf97818d)
* Basic drag and drop UI  
![](Days/day_61/day_61.gif)

**Day 62:** *(Streak: 62 - 4/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/a637b22f92c7dd10d91fe45aea470a458d9e10b0)
* Turret snapping
* Turret aiming  
![](Days/day_62/day_62.gif)

**Day 63:** *(Streak: 63 - 5/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/d49eda4a3d7c9c6de52370c594dd3cc78a3635bd)
* Turret shooting  
![](Days/day_63/day_63.gif)

**Day 64:** *(Streak: 64 - 6/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/b701dff0b5c65e36e1f0ee0be81e5b4e2fb370b4)
* Just some inventory bug fixes  
![](Days/day_64/day_64.gif)

**Day 65:** *(Streak: 65 - 7/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/6ceee09280f7ce303342de37baf85376780f034d)
* I made a [postmortem for the game jam](https://mariothedog.itch.io/simultaneous-turrets/devlog/229253/jam-postmortem)
* Turret sightlines
* Spent a long time trying to fix [this issue](https://github.com/godotengine/godot/issues/46788) (and failed)

**Day 66:** *(Streak: 66 - 8/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/ba005e5db227b81b5f6286a3071fda840ac1c284)
* Small improvements and bug fixes
* Made [another devlog](https://mariothedog.itch.io/simultaneous-turrets/devlog/229821/my-thoughts-on-a-post-jam-version)  
![](Days/day_66/day_66.gif)

**Day 67:** *(Streak: 67 - 9/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/61cdf6ec8d602e38f0ebeb5bcfc54d2ac6016887)
* Added a (currently useless) start and stop button  
![](Days/day_67/day_67.png)

**Day 68:** *(Streak: 68 - 10/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/4e181b2f4522cd71d73dc71441affa73c8cdcd5d)
* Gave the start/stop buttons some functionality  
![](Days/day_68/day_68.gif)

**Day 69:** *(Streak: 69 - 11/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/c5c011090bdf48e6c4894b5c45f74c917b4ef3a2)
* Fixed a few bugs  
![](Days/day_69/day_69.gif)

**Day 70:** *(Streak: 70 - 12/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/b4c626579748c3d38bd4179de3ba8ac04ce71d20)
* Added turret merging but currently all it does is change the gun sprite  
![](Days/day_70/day_70.gif)

**Day 71:** *(Streak: 71 - 13/3/2021)*  
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/c791c5168b9ac828ff40b6cc888b1b772925e77d)
* Fixed bug where you could merge more than 8 turrets
* Added sight lines and bullets based on turret level
* Stopped bullets from being able to collide with each other
* Made enemy colliders move instantly while the sprite still lerps (should hopefully remove any possible determinism issues)
* Fixed a bug where the enemy spawn order could change
* Added enemy spawn indicators
* Added a base tile (if the enemy touches it you lose)  
![](Days/day_71/day_71.gif)

**Day 72:** *(Streak: 72 - 14/3/2021)* (Happy π day)
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/2cc1395a1b15369fe61533c12639d00f6f8752ca)
* Added health
* Fixed a load of bugs
* Devlog: https://mariothedog.itch.io/simultaneous-turrets/devlog/231822/combining-turrets-and-death  
![](Days/day_72/day_72.gif)

**Day 73:** *(Streak: 73 - 15/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/bf83210f0ca9dd7c4348fd2aac218ad2bd2dca7c)
* Added changing the enemy path order in the level editor  
![](Days/day_73/day_73.gif)

**Day 74:** *(Streak: 74 - 16/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/f87466a875dd6425b584f3d56cba7f64f3a8097b)
* Added changing the number of lives you have to the level editor
* Refactored a few things
* I tried timing bullets to the step timer on a different branch (https://github.com/mariothedog/simultaneous-turrets/tree/384a0bfc1c21fffbcace409c5c50cf5ff4ef8194)
* I tried using lasers instead of bullets on a different branch (https://github.com/mariothedog/simultaneous-turrets/tree/0f11d4ab7e79762a68cd2ea9ba1a198ab133385d)

**Day 75:** *(Streak: 75 - 17/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/66ac30541fcd8e15348e1c3207b6819b63c37e3a)
* Refactored some things
* Fixed a few bugs
* Added a finite number of turrets
* Added a finite number of enemies
* Adding changing the level's resource path in the level editor
* Copied over the game jam version's first level
* Added a level counter to the HUD  
![](Days/day_75/day_75.gif)

**Day 76:** *(Streak: 76 - 18/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/f8a83b05444fec4387039dbcacc4f99b4ee89942)
* Copied over the game jam version's second level (technically this was done yesterday but I pushed it today)
* Added automatic level changing after a level is completed
* Removed the debug path lines
* Fixed a turret rotation bug (I ***really*** hope this is the last time I have to fix one of these)  
![](Days/day_76/day_76.gif)

**Day 77:** *(Streak: 77 - 19/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/3f0307cd7e9bf2575febe351ea923fa812ded462)
* Currently the game feels very different to the jam version which I'm trying to fix
* I tried making enemies move 2 tiles at a time but currently it's very experimental

**Day 78:** *(Streak: 78 - 20/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/c830f0ced4b4e9264b4899891fabdc60c1431e9b)
* I made enemies move every 0.5 seconds which I think feels a bit better than yesterday's version
* I fixed a bug where turrets couldn't be selected if they were on a leftmost tile
* I also fixed another turret rotation bug and I'm pretty confident that I won't have to fix this again
* I added the experimental bullet timing which is very buggy and feels quite laggy (despite it not actually being laggy)  
![](Days/day_78/day_78.gif)

**Day 79:** *(Streak: 79 - 21/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/dfba0f9911e2b1703853ab5dda934993d5ef2d56)
* I fixed a bug with the experimental bullet timing but it still feels quite off
* I also experimented with moving the colliders smoothly as well (https://github.com/mariothedog/simultaneous-turrets/tree/0f2300164b3a0594885e672118b0575639b92117) 
* Devlog:  https://mariothedog.itch.io/simultaneous-turrets/devlog/234235/timed-bullets-and-level-improvements
![](Days/day_79/day_79.gif)

**Day 80:** *(Streak: 80 - 22/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* I was working on Simultaneous Turrets but I'm switching between branches a lot since it's all very experimental
* [Experimental timing 1 branch](https://github.com/mariothedog/simultaneous-turrets/tree/42d8cb4a6c42ff754fe33ed302130d0f2620e772)
* [Experimental timing 3 branch](https://github.com/mariothedog/simultaneous-turrets/tree/99c312ac2bb639b474cb840109ba3ebddb03db9b)
* [Experimental timing 4 branch](https://github.com/mariothedog/simultaneous-turrets/tree/55847d56d310a685dbe423583e68185b642f5ac3)
* (We don't talk about the experimental timing 2 branch)

**Day 81:** *(Streak: 81 - 23/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* I was working on Simultaneous Turrets but like with yesterday, it's very experimental. I didn't actually commit anything today but I assure you, I have been working on it
* I've tried out a lot of different ideas and I'm starting to think timed bullets (e.g. bullets move one tile per second) are a bad dea
* I don't really like the "stacking" effect they create (when bullets go a long time without hitting an enemy so there is just a long chain of bullets which can then kill multiple enemies in a row) but I'm still not sure if I want to remove it or not
* I'm also thinking about using hitscan projectiles

**Day 82:** *(Streak: 82 - 24/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/f71aa1efe9ec70f0fc04e86b462698bac343dca0)
* I didn't do much today but I did create *another* new branch (this is getting very confusing)
* All I did was I removed the timed bullets which I thought about doing yesterday

**Day 83:** *(Streak: 83 - 25/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/4ac911021f1deeded29436a8e69ed592f9881c52)
* I added back the enemy collider's instant movement from tile-to-tile
* I experimented a bit with adding a delay before turrets shoot bullets so that enemies move then turrets shoot (the delay only happens when there is an enemy in front of the turret). I don't really like how it turned out though. I'll definitely need to experiment with it a bit more

**Day 84:** *(Streak: 84 - 26/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/c45721c3357f094bfec4244df844aee575c0937e)
* I didn't do much today but I did revert the experimental turret shooting delay
* I'm going to experiment with a hitscan-type thing with the bullets tomorrow but I'm not really sure how it will go

**Day 85:** *(Streak: 85 - 27/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* Simultaneous Turrets
* [Experimental timing 6](https://github.com/mariothedog/simultaneous-turrets/tree/c9c51532538fb7ca962fc6f0d855905df233ee94):
* I experimented with hitscan like I mentioned yesterday by trying to use a raycast as a way to verify that the enemy that the bullet is colliding with is really the first enemy in front of the bullet
* I don't really like how it turned out though and the commit I made is still filled with commented out code
* [Experimental timing 7](https://github.com/mariothedog/simultaneous-turrets/tree/cbe4ebee38e3d010bca9136963cf21fb42a64625):
* I added back smooth enemy collider movement (for like the 80th time)
* I made it so a bullet's speed was measured in tiles/second instead of pixels/second. Currently bullets move 25 tiles/second (which is 300 pixels/s)
* I made a design doc but it's quite empty at the moment: https://docs.google.com/document/d/1mG--18b3iOtmumqtHXNJIOKp0vuaAl71bZtf9eAatU4/edit?usp=sharing
* I'm starting to think that maybe making the game turn-based is a bad idea
* [Experimental timing 8](https://github.com/mariothedog/simultaneous-turrets/tree/40a56936e58c920a0a7578c050c2dae8dabf9a73):
* I honestly cannot remember what this branch is even supposed to do

**Day 86:** *(Streak: 86 - 28/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/62ea87a84de61cb2d5d158fa1ab27192f6a2820f)
* Devlog: https://mariothedog.itch.io/simultaneous-turrets/devlog/236683/timing-and-lots-of-experimentation
* Woohoo, new branch: experimental timing number 9
* I added a delay so that turrets only shoot after enemies have moved
* ... I then later removed that delay
* I added back timed bullets - but this time with a twist
* *Everything* is done in some weird instruction-based pattern-like format
* I actually quite like how it turned out but it's difficult to explain so just look:  
![](Days/day_86/day_86.gif)

**Day 87:** *(Streak: 87 - 29/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/f5d27ef78f8295f39a8a351c0eda64943c24171d)
* I fixed the turret rotation bug ***again***. I know I said that I was confident I had fixed it last time but this time I'm like extra confident. (I am going to throw a temper tantrum if this is not fixed)
* I merged the experimental-timing-9 branch into timing and then timing into main but I haven't deleted any of the branches yet. I'm too scared that I'll need to go back and use the stuff from those other branches so I'm going to leave them up for at least a week
* I added steps to the level editor:  
![](Days/day_87/day_87.png)

**Day 88:** *(Streak: 88 - 30/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/ee17a79906150b4e9134c7fb0b45843da4dcbe58)
* Balanced levels 0-2
* Made it so enemies move before a new one spawns
* Refactored some things
* Add level loading to the level editor

**Day 89:** *(Streak: 89 - 31/3/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/b73d5ae3270757824c6da4018febe1785895b42d)
* I fixed some bugs that occur when playing the game with a really high step rate. I tested it with a wait time of 0.001 seconds (so each turn lasts 1 millisecond) and it *seems* to be bug-free
* I made level 1 completable with only 1 turret. I'm quite proud of this as it's actually slower (i.e. it takes more turns) if you use only one turret so it's like an act of balancing efficiency (number of turrets) and speed (number of turns)
* To do this, I made the level 1 enemies spawn in groups 3 and changed the number of enemies to 4 total. The way I did this was quite hacky but I plan on improving this tomorrow
* I was planning on experimenting with moving bullets 3 tiles *in one turn* but I didn't end up doing it. I might try it out tomorrow

**Day 90:** *(Streak: 90 - 1/4/2021)* (Happy April fools day)
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/f76ce41e16b60eeabcbf66cc8e4e14b64cc5e602)
* I added enemy group sizes so e.g. 3 enemies will spawn then there will be a gap then another 3 will spawn
* I made consecutive bullet move steps happen in one turn
* I made bullets spawn on the tile that the turret is on instead of on the tile ahead of the turret
* I added a turret shoot animation but currently it's very experimental. I also reverted the thing above to do this but I think I'll add it back tomorrow  
![](Days/day_90/day_90.gif)

**Day 91:** *(Streak: 91 - 2/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/5b6f92b6e05d1e476e84a41b46c7772f8c6e3d31)
* I made bullet move steps that occur after a turret shoot step happen on the same turn as the turret shoot step
* I tidied up the turret shoot animation and I think it looks really good (despite its simplicity)
* I might add particle effects or something tomorrow and then I'll probably merge it with main
* Note that the gif makes the animation look slightly worse  
![](Days/day_91/day_91.gif)

**Day 92:** *(Streak: 92 - 3/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/1db9d576113e1006769b134e0f8b5539b295fc21)
* Enemy turns are now skipped if there are no enemy paths
* The game waits till the current step has been completed before starting a new one. This fixes some animation issues that occurred when playing at a high step rate. It should also make the game more deterministic
* I feel like this might make syncing the music hard as each step lasts a different amount of time. I made it so there's a delay of 0.1 second after each turn before the next one but I might change it so that it works in a padding-like fashion instead. So for example, if a turn lasted 0.3 seconds I could pad 0.2 seconds to make it last 0.5 seconds total. If it lasted 0.1 seconds then I could pad 0.4 seconds to make it last 0.5 seconds as well. (So all turns would last 0.5 seconds.) And if a turn exceeded 0.5 seconds it would just be left alone  
![](Days/day_92/day_92.gif)

**Day 93:** *(Streak: 93 - 4/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/0c03aad1ac6ec94d2d6f8f1c20f51fb172cf648b)
* Enemy turns are now skipped if there are no enemy paths
* I added the "step delay padding" I talked about yesterday. Each turn lasts a minimum of 0.5 seconds now
* I added a speed up button but it's still quite buggy. Sometimes it causes bullets to phase through enemies
* I added level 3 but I feel like it's quite boring. I might make some changes to it later on
* Devlog: https://mariothedog.itch.io/simultaneous-turrets/devlog/239081/level-balancing-and-shooting-animations  
![](Days/day_93/day_93.gif)

**Day 94:** *(Streak: 94 - 5/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/251289d269f207c741774811170f0e77023acbaf)
* I made it so the turret shoot animation starts on the turn before the tuuret shoot step
* I also fixed a bunch of bugs that came along with it although I feel like some of them might have already been there and I just hadn't noticed

**Day 95:** *(Streak: 95 - 6/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/a242db87bdd7c869f7d10aa2371fd50abe6eed72)
* I'm refactoring the way the game handles steps
* It's still far from being finished

**Day 96:** *(Streak: 96 - 7/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/5ac02df1d4ced47284d5d76d9db50e54cd4eb0e9)
* I'm still refactoring but I think I'll be done tomorrow

**Day 97:** *(Streak: 97 - 8/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/958ca5775ec3eab02cbd2bbe8123c8a981258aab)
* Finished the refactoring
* Fixed the speed up button by making it so the bullet uses a raycast instead (points from the start pos to the current pos)
* It still breaks when the min step delay is too short (<= 6 ms in my testing) but I don't think it's anything to worry about

**Day 98:** *(Streak: 98 - 9/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/fb31d375d175eba3dc1615e642194e971c073f96)
* I made it so enemy steps can merge
* I haven't merged it with main yet but I think I will tomorrow (I might make some changes)  
![](Days/day_98/day_98.gif)

**Day 99:** *(Streak: 99 - 10/4/2021)*
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/ae178ba126e91c5b3654e51b12386057dd84dbb5)
* I added a trail of enemy colliders to prevent fast enemies jumping over bullets (sort of like I did with the bullets)
* The enemy move step used to check if the last enemy had stopped moving before emitting the finished signal. I did it this way as I was under the assumption that the last enemy would always finish moving last but this was not the case. It's possible it could have happened in other situations but I know if the base tile is involved sometimes the last enemy can finish a little bit sooner than the other enemies. I changed it so it waited till every enemy has stopped moving
* I also made this change with the bullets. I'm not sure if this bug affects them or not but just in case I decided to fix it anyways (+ I think it's more explicit anyways)  
![](Days/day_99/day_99.gif)

**Day 100:** *(Streak: 100 - 11/4/2021)* (100th day! 1/10th of the way there!)
* GDScript (Godot Engine v3.2.3.stable.official)
* [Simultaneous Turrets](https://github.com/mariothedog/simultaneous-turrets/tree/af194d19aade1d5a6945293fd6fe679c634787d7)
* I experimented a bit with a new level 3 but it's still just a work in progress
* I feel like the enemy movement is too fast so I tried making it so enemies move at the same speed. I also made it decellerate when it's reaching the end but it feels a bit weird at the moment (it becomes really slow so it takes ages to reach the last tile). It's all very experimental at the moment though (https://github.com/mariothedog/simultaneous-turrets/tree/baa85f60041d3ab442470318f76bee0769e414f5)
* I made another experimental branch where I removed step merging as it feels a bit strange how enemies can go from moving 1 tile at a time to moving 2 tiles at a time despite moving at the same speed relative to everything else (https://github.com/mariothedog/simultaneous-turrets/tree/a8d9712b947412b06cfdea15f3d68f27387cde2e)
* I think I mentioned this before but I feel like the game is deviating way too much from the jam version and I don't like that. One thing that stands out to me is that I don't like how things are very "continuous". For example, bullets just stop moving which seems a bit strange.
* Devlog: https://mariothedog.itch.io/simultaneous-turrets/devlog/241643/faster-gameplay-merging-enemy-steps-and-deviating-from-the-jam-version  
![](Days/day_100/day_100.gif)

**Day 101:** *(Streak: 101 - 12/4/2021)*
* Python
* I didn't have much time today so all I did was a Codewars Kata
* [Codewars 6 Kyu Kata - Sum of Digits/Digital Root](https://www.codewars.com/kata/541c8630095125aba6000c00)

**Day 102:** *(Streak: 102 - 13/4/2021)*
* Python
* I had more free time than yesterday so me not working on Simultaneous Turrets today was completely my fault (I was procrastinating)
* [Codewars 6 Kyu Kata - Find the odd int](https://www.codewars.com/kata/54da5a58ea159efa38000836)
* [Codewars 6 Kyu Kata - Persistent Bugger](https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec)
* [Codewars 5 Kyu Kata - Diophantine Equation](https://www.codewars.com/kata/554f76dca89983cc400000bb) (Not completed yet, not efficient enough)

**Day 103:** *(Streak: 103 - 14/4/2021)*
* Simultaneous Turrets Game Design
* I didn't actually write or create anything but I was looking for advice on the Godot Discord server and it seems like some RTS games are actually turn-based but the turns are really fast so you can't notice it (I'll probably try this out)

**Day 104:** *(Streak: 104 - 15/4/2021)*
* Python
* [Codewars 6 Kyu Kata - Count the smiley faces!](https://www.codewars.com/kata/reviews/588d0231aac675bf56001ac2/groups/6078fd0e124b500001bff78b)

**Day 105:** *(Streak: 105 - 16/4/2021)*
* Python
* [Codewars 5 Kyu Kata - String incrementer](https://www.codewars.com/kata/reviews/554cef99085cd8c9720000d9/groups/607a0df4b42a890001dcb66a)

**Day 106:** *(Streak: 106 - 17/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Valid Parentheses](https://www.codewars.com/kata/reviews/557730efe9be66fc1b00011b/groups/607a8679ae8fcb0001883adc)

**Day 107:** *(Streak: 107 - 18/4/2021)*
* Python
* [Codewars 5 Kyu Kata - The Hashtag Generator](https://www.codewars.com/kata/52449b062fb80683ec000024)
* [Codewars 5 Kyu Kata - The Hashtag Generator](https://www.codewars.com/kata/52449b062fb80683ec000024) (Second solution)

**Day 108:** *(Streak: 108 - 19/4/2021)* (Happy birthday to me)
* Python
* [Codewars 5 Kyu Kata - Did I Finish my Sudoku?](https://www.codewars.com/kata/53db96041f1a7d32dc0004d2)
* [Codewars 6 Kyu Kata - Build Tower](https://www.codewars.com/kata/576757b1df89ecf5bd00073b)

**Day 109:** *(Streak: 109 - 20/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Don't Drink the Water](https://www.codewars.com/kata/562e6df5cf2d3908ad00019e)

**Day 110:** *(Streak: 110 - 21/4/2021)*
* Python
* [Codewars 6 Kyu Kata - Stop gninnipS My sdroW!](https://www.codewars.com/kata/5264d2b162488dc400000001)

**Day 111:** *(Streak: 111 - 22/4/2021)*
* Python
* [Codewars 6 Kyu Kata - Positions Average](https://www.codewars.com/kata/59f4a0acbee84576800000af)

**Day 112:** *(Streak: 112 - 23/4/2021)*
* Python
* [Codewars 6 Kyu Kata - Binaries](https://www.codewars.com/kata/5d98b6b38b0f6c001a461198)

**Day 113:** *(Streak: 113 - 24/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Graph-like Sequence](https://www.codewars.com/kata/60815326bbb0150009f55f7e) (Forfeited)
* [Codewars 5 Kyu Kata - Buddy Pairs](https://www.codewars.com/kata/59ccf051dcc4050f7800008f) (Forfeited)
* [Codewars 5 Kyu Kata - Don't Eat the Last Cake!](https://www.codewars.com/kata/5384df88aa6fc164bb000e7d) (Still working on it)

**Day 114:** *(Streak: 114 - 25/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Don't Eat the Last Cake!](https://www.codewars.com/kata/5384df88aa6fc164bb000e7d) (Still working on it)

**Day 115:** *(Streak: 115 - 26/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Don't Eat the Last Cake!](https://www.codewars.com/kata/5384df88aa6fc164bb000e7d) (Still working on it)

**Day 116:** *(Streak: 116 - 27/4/2021)*
* Python
* [Codewars 5 Kyu Kata - Don't Eat the Last Cake!](https://www.codewars.com/kata/5384df88aa6fc164bb000e7d) (Still working on it)

**Day 117:** *(Streak: 117 - 28/4/2021)*
* Python
* I can't believe this kata took me 5 days
* The solution was so simple
* [Codewars 5 Kyu Kata - Don't Eat the Last Cake!](https://www.codewars.com/kata/5384df88aa6fc164bb000e7d) (Finally done it!!!)
* [Solution](https://www.codewars.com/kata/reviews/53d7bb3b093f99f301000a6b/groups/6089e209feafc5000127ef63)

**Day 118:** *(Streak: 118 - 29/4/2021)*
* Python
* I feel like I'm quite close to the solution
* [Codewars 4 Kyu Kata - Balanced parentheses string](https://www.codewars.com/kata/60790e04cc9178003077db43) (Still working on it)

**Day 119:** *(Streak: 119 - 30/4/2021)*
* Python
* [Codewars 4 Kyu Kata - Balanced parentheses string](https://www.codewars.com/kata/60790e04cc9178003077db43) (Still working on it)

**Day 120:** *(Streak: 120 - 1/5/2021)*
* Python
* [Codewars 4 Kyu Kata - Balanced parentheses string](https://www.codewars.com/kata/60790e04cc9178003077db43) (Still working on it)

**Day 121:** *(Streak: 121 - 2/5/2021)*
* ASL (Livesplit's Auto Splitting Language)
* I have been speedrunning the game [Die in the Dungeon](https://alarts.itch.io/die-in-the-dungeon) recently so I made an autosplitter for it. (Die in the Dungeon was actually initially made as an entry to the same jam that Simultaneous Turrets was made for... I should probably get back to working on that)
* [Source](https://gist.github.com/mariothedog/dfee8307bedb7316b033b0c0f06dbe0b)

**Day 122:** *(Streak: 122 - 3/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Valid string](https://www.codewars.com/kata/52f3bb2095d6bfeac2002196) (Still working on it)

**Day 123:** *(Streak: 123 - 4/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Make the Deadfish Swim](https://www.codewars.com/kata/51e0007c1f9378fa810002a9)
* [Solution](https://www.codewars.com/kata/reviews/5b4078215d287e9d6f0001c5/groups/6091d39fd8c2fe0001ed33ec)

**Day 124:** *(Streak: 124 - 5/5/2021)*
* Python
* For a 6 kyu kata this was actually really challenging. Perhaps my solution wasn't the intended one
* [Codewars 6 Kyu Kata - Valid string](https://www.codewars.com/kata/52f3bb2095d6bfeac2002196) (Got it!)

**Day 125:** *(Streak: 125 - 6/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Swap Case Using N](https://www.codewars.com/kata/5f3afc40b24f090028233490)

**Day 126:** *(Streak: 126 - 7/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Count characters in your string](https://www.codewars.com/kata/52efefcbcdf57161d4000091)

**Day 127:** *(Streak: 127 - 8/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Still working on it)

**Day 128:** *(Streak: 128 - 9/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Still working on it)

**Day 129:** *(Streak: 129 - 10/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Still working on it)

**Day 130:** *(Streak: 130 - 11/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Still working on it)

**Day 131:** *(Streak: 131 - 12/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Still working on it)

**Day 132:** *(Streak: 132 - 13/5/2021)*
* Python
* This took a while. I feel like my solution is really inefficient but it works! This is definitely way harder than 6 kyu
* [Codewars 6 Kyu Kata - Linear Color Gradient](https://www.codewars.com/kata/607218fd3d84d3003685d78c) (Got it!!)
* [Solution](https://www.codewars.com/kata/reviews/6094236ae7e0df00011ffa9d/groups/609dbc51533c8d0001f40b68)

**Day 133:** *(Streak: 133 - 14/5/2021)*
* Python
* This was quite confusing at first but I got it after 20 or so minutes and I discovered the amazing Python module that is fractions
* [Codewars 6 Kyu Kata - Magic Dice: Who wins?](https://www.codewars.com/kata/589e2af835999cbe2f000229)
* [Solution](https://www.codewars.com/kata/reviews/589e3345872424388000000b/groups/609f072a38b2960001899778)

**Day 134:** *(Streak: 134 - 15/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Reverse or rotate?](https://www.codewars.com/kata/56b5afb4ed1f6d5fb0000991)
* [Solution](https://www.codewars.com/kata/reviews/56b5b0d283df36dc5b00007f/groups/60a05cf83b461d00015b2379)

**Day 135:** *(Streak: 135 - 16/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Word to initial number](https://www.codewars.com/kata/5bb148b840196d1be50000b1)
* [Solution](https://www.codewars.com/kata/reviews/60a0f34b9c9ebc0001cffaa0/groups/60a19d52ef567a00012bb6a6)

**Day 136:** *(Streak: 136 - 17/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Bit Counting](https://www.codewars.com/kata/5bb148b840196d1be50000b1)
* [Codewars 6 Kyu Kata - Triangle Type](https://www.codewars.com/kata/53907ac3cd51b69f790006c5)
* [Solution](https://www.codewars.com/kata/reviews/53d77dca093f99c1c8000580/groups/60a2f7e31157a10001309312)

**Day 137:** *(Streak: 137 - 18/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Digit Recovery](https://www.codewars.com/kata/5964d7e633b908e172000046) (Still working on it)

**Day 138:** *(Streak: 138 - 19/5/2021)*
* AutoHotkey Script
* I was working on a script to read text from a file and then copy and paste that file into something else 2000 characters at a time

**Day 139:** *(Streak: 139 - 20/5/2021)*
* AutoHotkey Script
* Finished that script I started yesterday

**Day 140:** *(Streak: 140 - 21/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Digit Recovery](https://www.codewars.com/kata/5964d7e633b908e172000046)
* [Solution](https://www.codewars.com/kata/reviews/6037a0b9203cb60001df5690/groups/60a8420b8c9da500013a7a76)

**Day 141:** *(Streak: 141 - 22/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Rainfall](https://www.codewars.com/kata/56a32dd6e4f4748cc3000006)
* [Solution](https://www.codewars.com/kata/reviews/56a32f2b1cf4a85c7700002a/groups/60a98f1e4e08a0000104b615)

**Day 142:** *(Streak: 142 - 23/5/2021)*
* Godot Mono (C#)
* I worked on an old game jam entry (that was done as part of a team with Lospec) called Heroes' Guild
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)  
===
* It's currently 19/7/2021 but for the last 57 days I've been too lazy to update this
* Somehow I was able to actually complete the days but apparently copying and pasting 3 lines a day is too much for my brain to handle
* I did write down a single line for each day though so at least I have some idea of what I did so I won't have to completely guess
* Also turns out every single date I had pushed in the previous commits were wrong since I wrote 2020 instead of 2021 so I've fixed that too
* The last week or so was also completely wrong as the months were all messed up

**Day 143:** *(Streak: 143 - 24/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Last Survivors Ep.2](https://www.codewars.com/kata/60a1aac7d5a5fc0046c89651)
* [Solution](https://www.codewars.com/kata/reviews/60a505d8332ac10001a33650/groups/60ac454a3e65db000175d09d)

**Day 144:** *(Streak: 144 - 25/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Optional Walrus? [code golf]](https://www.codewars.com/kata/60a82776de1604000e29eb50)
* [Solution](https://www.codewars.com/kata/reviews/60a8360a8c9da500013a796c/groups/60ad8691fcb0490001251974)

**Day 145:** *(Streak: 145 - 26/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Salesman's Travel](https://www.codewars.com/kata/56af1a20509ce5b9b000001e)
* [Solution](https://www.codewars.com/kata/reviews/56af1b1a210da57ea500009b/groups/60aed8128930890001947b46)

**Day 146:** *(Streak: 146 - 27/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Which are in?](https://www.codewars.com/kata/550554fd08b86f84fe000a58)
* [Solution](https://www.codewars.com/kata/reviews/5537ece6262249328500003c/groups/60b02eb9283f4b0001e3829b)

**Day 147:** *(Streak: 147 - 28/5/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 148:** *(Streak: 148 - 29/5/2021)*
* Python
* [Codewars 6 Kyu Kata - Ease the StockBroker](https://www.codewars.com/kata/54de3257f565801d96001200)
* [Solution](https://www.codewars.com/kata/reviews/555f1df680f3bfbb52000013/groups/60b2cabf963b480001b0f492)

**Day 149:** *(Streak: 149 - 30/5/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 150:** *(Streak: 150 - 31/5/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 151:** *(Streak: 151 - 1/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Last Survivors Ep.3](https://www.codewars.com/kata/60a2d7f50eee95000d34f414) (Still working on it)

**Day 152:** *(Streak: 152 - 2/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Last Survivors Ep.3](https://www.codewars.com/kata/60a2d7f50eee95000d34f414)
* [Solution](https://www.codewars.com/kata/reviews/60a7d25e8c9da500013a6e93/groups/60b81615a99fe40001d9775d)

**Day 153:** *(Streak: 153 - 3/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Irreducible Sum of Rationals](https://www.codewars.com/kata/5517fcb0236c8826940003c9)
* [Solution](https://www.codewars.com/kata/reviews/557015d7fc98a4aa1f000003/groups/60b96c57d16eb600017dcd4d)

**Day 154:** *(Streak: 154 - 4/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 155:** *(Streak: 155 - 5/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Corner Fill](https://www.codewars.com/kata/60b7d7c82358010006c0cda5) (Still working on it)

**Day 156:** *(Streak: 156 - 6/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Corner Fill](https://www.codewars.com/kata/60b7d7c82358010006c0cda5)
* [Solution](https://www.codewars.com/kata/reviews/60b8abd633a66a0001ad86cf/groups/60bd6dad584e9b00012d868f)

**Day 157:** *(Streak: 157 - 7/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Survivors Ep.4](https://www.codewars.com/kata/60a516d70759d1000d532029)
* [Solution](https://www.codewars.com/kata/reviews/60ad05f3111d4800016e1741/groups/60beb7729f39720001f6029c)

**Day 158:** *(Streak: 158 - 8/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Common directory path](https://www.codewars.com/kata/597f334f1fe82a950500004b)
* [Solution](https://www.codewars.com/kata/reviews/60bf98fbf282ad000144eb96/groups/60c0096ad8524200016d361d)

**Day 159:** *(Streak: 159 - 9/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Manage an Orderbook](https://www.codewars.com/kata/5f3e7df1e0be5a00018a008c)
* [Solution](https://www.codewars.com/kata/reviews/5f3e7e0ce0be5a00018a0093/groups/60c152dc8816ee000177c014)

**Day 160:** *(Streak: 160 - 10/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Sort the odd](https://www.codewars.com/kata/578aa45ee9fd15ff4600090d)
* [Solution](https://www.codewars.com/kata/reviews/5790d34d671cb50d6600016d/groups/60c2ad370db24a00013214ca)

**Day 161:** *(Streak: 161 - 11/6/2021)*
**Day 162:** *(Streak: 162 - 12/6/2021)*
**Day 163:** *(Streak: 163 - 13/6/2021)*
* Godot with GDScript
* I participated in [GMTK 2021](https://itch.io/jam/gmtk-2021)
* My entry was very rushed and is very unpolished
* [Playable Here](https://mariothedog.itch.io/electric-whip)

**Day 164:** *(Streak: 164 - 14/6/2021)*
* Godot with GDScript
* I made this "game" because I wanted to learn about how I could integrate a scoreboard into Godot
* It's called click and you just click a button and it increments a number which you can upload to a leaderboard
* [Playable Here](https://mariothedog.itch.io/click)

**Day 165:** *(Streak: 165 - 15/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Restaurant Tables](https://www.codewars.com/kata/598c1bc6a04cd3b8dd000012)
* [Solution](https://www.codewars.com/kata/reviews/60c5069982a32d000154db54/groups/60c93b9208d9c70001bafddd)

**Day 166:** *(Streak: 166 - 16/6/2021)*
* Design doc planning for [a game jam titled "a jam about time"](https://itch.io/jam/a-jam-about-time)

**Day 167:** *(Streak: 167 - 17/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Bonuses](https://www.codewars.com/kata/5d68d05e7a60ba002b0053f6)
* [Solution](https://www.codewars.com/kata/reviews/5d68d12dc38e39000121fc3a/groups/60cbd8bf9474b40001de77b6)

**Day 168:** *(Streak: 168 - 18/6/2021)*
* JavaScript
* I made a TamperMonkey script to hide the YouTube notifications button because I found it distracting
* It is really really bad though and didn't work the majority of the time  
===
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 169:** *(Streak: 169 - 19/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 170:** *(Streak: 170 - 20/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)  
===
* Python
* [Codewars 6 Kyu Kata - Back and forth then Reverse! (Python)](https://www.codewars.com/kata/60cc93db4ab0ae0026761232)
* [Solution](https://www.codewars.com/kata/reviews/60ccb63cce925400018b3e30/groups/60cfc50371f2a60001c09a64)

**Day 171:** *(Streak: 171 - 21/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)  
===
* Python
* [Codewars 6 Kyu Kata - Step in Primes (Python)](https://www.codewars.com/kata/5613d06cee1e7da6d5000055)
* [Solution](https://www.codewars.com/kata/reviews/5613d15967e80127d6000031/groups/60d0eeabcea1f00001c84bf6)  
===
* Python
* Python Discord 2021 Summer Code Jam Qualifier

**Day 172:** *(Streak: 172 - 22/6/2021)*
* Python
* Python Discord 2021 Summer Code Jam Qualifier

**Day 173:** *(Streak: 173 - 23/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)

**Day 174:** *(Streak: 174 - 24/6/2021)*
* Godot Mono (C#)
* [Heroes' Guild](https://github.com/lospec/lowresjam2020/tree/bug-fixes)  
===
* Python
* [Codewars 6 Kyu Kata - Easy Balance Checking](https://www.codewars.com/kata/59d727d40e8c9dd2dd00009f)
* [Solution](https://www.codewars.com/kata/reviews/5aaf66a09a4bdd79d10002e8/groups/60d4af310f0cac00011648c1)

**Day 175:** *(Streak: 175 - 25/6/2021)*
* Design doc planning for [a game jam titled "a jam about time"](https://itch.io/jam/a-jam-about-time)  
===
* Python
* [Codewars 6 Kyu Kata - Financing a purchase](https://www.codewars.com/kata/59c68ea2aeb2843e18000109)
* [Solution](https://www.codewars.com/kata/reviews/5a36a9f02f58b81823001695/groups/60d6533a10505400010313f8)

**Day 176:** *(Streak: 176 - 26/6/2021)*
* Godot
* Working on my entry for [a jam about time](https://itch.io/jam/a-jam-about-time)
* [Source](https://github.com/mariothedog/a-jam-about-time)  
===
* Python
* [Codewars 6 Kyu Kata - Replace With Alphabet Position](https://www.codewars.com/kata/546f922b54af40e1e90001da)

**Day 177:** *(Streak: 177 - 27/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Sort the number sequence](https://www.codewars.com/kata/5816b76988ca9613cc00024f)
* [Solution](https://www.codewars.com/kata/reviews/60d79e8c8754770001e7d319/groups/60d85b5020efb700010cf2da)  
===
* Godot
* Working on my entry for [a jam about time](https://itch.io/jam/a-jam-about-time)
* [Source](https://github.com/mariothedog/a-jam-about-time)

**Day 178:** *(Streak: 178 - 28/6/2021)*
* Godot
* Working on my entry for [a jam about time](https://itch.io/jam/a-jam-about-time)
* [Source](https://github.com/mariothedog/a-jam-about-time)

**Day 179:** *(Streak: 179 - 29/6/2021)*
* Python
* [Codewars 6 Kyu Kata - Reducing by steps](https://www.codewars.com/kata/56efab15740d301ab40002ee)
* [Solution](https://www.codewars.com/kata/reviews/56efabc004d4fd59b2000062/groups/60dbab1e19d1670001a5833a)

**Day 180:** *(Streak: 180 - 30/6/2021)*
* HTML, CSS, and JavaScript
* I experimented with the [Materialize CSS Framework](https://materializecss.com/) to try to create a resume

**Day 181:** *(Streak: 181 - 1/7/2021)*
* Python
* [Codewars 6 Kyu Kata - Boolean function truth table](https://www.codewars.com/kata/5e67ce1b32b02d0028148094) (Still working on it)

**Day 182:** *(Streak: 182 - 2/7/2021)*
* Python
* [Codewars 6 Kyu Kata - Boolean function truth table](https://www.codewars.com/kata/5e67ce1b32b02d0028148094)
* [Solution](https://www.codewars.com/kata/reviews/5eeb7a3309865500016a1ba8/groups/60ded501c3f0270001ed1abd)

**Day 183:** *(Streak: 183 - 3/7/2021)*
* Python
* [Codewars 8 Kyu Kata - FIXME: Replace all dots](https://www.codewars.com/kata/596c6eb85b0f515834000049)
* [Solution](https://www.codewars.com/kata/reviews/5972cebcabb32828300000c2/groups/5972f4959526725a220002eb)

**Day 184:** *(Streak: 184 - 4/7/2021)*
* Python
* [Codewars 7 Kyu Kata - Some (but not all)](https://www.codewars.com/kata/60dda5a66c4cf90026256b75)
* [Solution](https://www.codewars.com/kata/reviews/60ddb6d1c9ce6e00019f1d47/groups/60e24f054760bd00014c7f15)

**Day 185:** *(Streak: 185 - 5/7/2021)*
* Python
* [Codewars 5 Kyu Kata - Build a quadratic equation](https://www.codewars.com/kata/60a9148187cfaf002562ceb8)
* [Solution](https://www.codewars.com/kata/reviews/60a915db143eb90001f3009f/groups/60e396ab729b5d0001693d37)

**Day 186:** *(Streak: 186 - 6/7/2021)*
* Python
* [Codewars 6 Kyu Kata - Vowels Back](https://www.codewars.com/kata/57cfd92c05c1864df2001563)
* [Solution](https://www.codewars.com/kata/reviews/5bd9769b009d98e4730002c1/groups/60e4df28ef95b5000156f196)

**Day 187:** *(Streak: 187 - 7/7/2021)*
* Python
* [Codewars 7 Kyu Kata - Sort arrays - 1](https://www.codewars.com/kata/51f41b98e8f176e70d0002a8)
* [Solution](https://www.codewars.com/kata/reviews/60926e96b2c8070001711d95/groups/60926e96b2c8070001711d99)  
===
* Python
* [Codewars 7 Kyu Kata - Number of Rectangles in a Grid](https://www.codewars.com/kata/556cebcf7c58da564a000045)
* [Solution](https://www.codewars.com/kata/reviews/556cf5a08e69ef651d00005d/groups/5570525d153443c1fc000022)

**Day 188:** *(Streak: 188 - 8/7/2021)*
* Python
* [Codewars 6 Kyu Kata - Greatest Common Factor of an Array](https://www.codewars.com/kata/5849169a6512c5964000016e)
* [Solution](https://www.codewars.com/kata/reviews/60e6b887e2047000010f9d7a/groups/60e78703c672500001bce3ed)

**Day 189:** *(Streak: 189 - 9/7/2021)*
* Python
* [Codewars 6 Kyu Kata - Delta Generators](https://www.codewars.com/kata/6040b781e50db7000ab35125)
* [Solution](https://www.codewars.com/kata/reviews/6040eef8406f680001a7f80e/groups/60e8db768d00e00001af1312)

**Day 190:** *(Streak: 190 - 10/7/2021)*  
**Day 191:** *(Streak: 191 - 11/7/2021)*  
**Day 192:** *(Streak: 192 - 12/7/2021)*  
**Day 193:** *(Streak: 193 - 13/7/2021)*  
**Day 194:** *(Streak: 194 - 14/7/2021)*  
**Day 195:** *(Streak: 195 - 15/7/2021)*  
**Day 196:** *(Streak: 196 - 16/7/2021)*  
**Day 197:** *(Streak: 197 - 17/7/2021)*
- Python
- Python Discord 2021 Summer Code Jam
- [Source](https://github.com/aiyayayaya/canny-capybaras-collab-code-contest)

**Day 198:** *(Streak: 198 - 18/7/2021)*
- Planning
- [Lospec Game Jam 1](https://itch.io/jam/lospec-jam-1)

**Day 199:** *(Streak: 199 - 19/7/2021)*
- Python
- Python Discord 2021 Summer Code Jam
- [Source](https://github.com/aiyayayaya/canny-capybaras-collab-code-contest)  
===
- Godot
- [Lospec Game Jam 1](https://itch.io/jam/lospec-jam-1)
- [Source](https://github.com/mariothedog/lospec-jam-1)  
===
- Wow, I finally just finished updating in all the days I missed (days 142 to today)
- Funny coincidence that I'm updating this right before day 200
- And it *has* been 200 days since the start of 2021

**Day 200:** *(Streak: 200 - 20/7/2021)*
- Python
- Python Discord 2021 Summer Code Jam
- [Source](https://github.com/aiyayayaya/canny-capybaras-collab-code-contest)  
===
- Woohoo day 200!

**Day 201:** *(Streak: 201 - 21/7/2021)*
- Godot
- [Lospec Game Jam 1](https://itch.io/jam/lospec-jam-1)
- [Source](https://github.com/mariothedog/lospec-jam-1) 

**Day 202:** *(Streak: 202 - 22/7/2021)*
- Godot
- [Lospec Game Jam 1](https://itch.io/jam/lospec-jam-1)
- [Source](https://github.com/mariothedog/lospec-jam-1) 
