
# Under Cabinet Lighting
## _Fun and easy project_ 

This is a simple and low cost under cabinet light solution.  Nothing to touch or
turn on..it's automatic!!! 

- Works dusk to dawn
- User must adjust to fit needs
- ✨Magic ✨

## Features

- Once built find a suitable light spot
- adjust map() function to fit your lighting conditions
- built, test and install! 
  
## Tech

Uses easy to get materials:

- [Arduino IDE](https://www.arduino.cc/en/software) - Free!
- [LDR](https://www.amazon.com/gp/product/B00RLGFIEY/ref=ppx_yo_dt_b_asin_title_o03_s00?ie=UTF8&psc=1) - LDR (You can use any LDR)
- [Diffusers](https://www.amazon.com/gp/product/B01M09PBYX/ref=ppx_yo_dt_b_asin_title_o02_s01?ie=UTF8&psc=1) - Amazon
- [WS2812B](https://www.amazon.com/gp/product/B0888H7QLG/ref=ppx_yo_dt_b_asin_title_o02_s02?ie=UTF8&psc=1) - WS2812B String LEDs.
- [Arduino](https://www.amazon.com/gp/product/B07G99NNXL/ref=ppx_yo_dt_b_asin_title_o05_s00?ie=UTF8&psc=1) - Works with UNO or NANO [Original or Clone]
- [Project Box](https://stlbase.com/browse/project+box+enclosure/) - Find one you like, 3d Print
- [Project Box 2](https://www.amazon.com/Zulkit-Waterproof-Dustproof-Electrical-Electronic/dp/B09JYQ528P/ref=sr_1_9?crid=1UANSP5J77RFZ&keywords=project+box&qid=1644580114&sprefix=project+box%2Caps%2C98&sr=8-9) - OR buy a project box!
- [Resister](https://www.amazon.com/Projects-100EP51210K0-10k-Resistors-Pack/dp/B0185FIOTA/ref=sr_1_12?crid=1F7YUAZ0YUIVO&keywords=110k+resistor&qid=1644580167&sprefix=110k+resister%2Caps%2C85&sr=8-12) - Resister recommend! 
- [Power Supply](https://www.amazon.com/gp/product/B01LXN7MN3/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1) - Buy a 5v supply OR you may have one laying around already!
- [Bread Boards](https://www.amazon.com/Pcs-MCIGICM-Points-Solderless-Breadboard/dp/B07PCJP9DY/ref=sr_1_6?crid=1P2P2O8J2T55R&keywords=bread+board&qid=1644581526&s=industrial&sprefix=bread+board%2Cindustrial%2C94&sr=1-6) Bread Board for testing if you'd like
 
## Installation
>1. Decide what you're using.  Uno or NANO either way the instructions are the same [except choosing board and port to program on]
>2. Grab the ino from here and look inside.  You'll need to change a few things!
    > How many led's your using
    > Look at the line "ldrValue = map(ldr, 0, 1023, 40, -5);"  Run it as is then adjust as needed
>3. Test.. Hook up wiring as shown in picture.
>4. Once happy with results begin your perm. install

## Under cabinet

You can use the diffusers or not either way it doesn't matter [I used them because I had them]
You can install diffusers or stick led's directly to under cabinet.
 
## Issues
At present none but then I built this to use in my home.  Perhaps you may run into issues
with either the code or placement.  For code issues there's plenty of help right on this forum
[Arduino Forum](https://forum.arduino.cc/).  Again VERY helpful and great people there.  I'm
new to writing Sketches for projects but once you do a couple it's pretty straight forward.
BUT then if you really want something to work you'll find a way... I did.  ;) Special Thanks
to kgray9 for the sketch AND all the help!!

## Development
Want to contribute? Great!
I'd like to see other variations of this!  Maybe color, etc.
I am running mine with a sonos zigbee plug to turn the power on and off through [Home Assistant](https://www.home-assistant.io/)
Great program for running your entire house on automation.   Why did I choose to do this way?
So it wouldn't be powered on while the sun was out, I simply have an automation that after the sun sets the power goes on until the sun comes up again!   You can find many great examples of how to do this on the [Home Assistant forum](https://community.home-assistant.io/). 

Great community and VERY helpful to new people!

## What if I don't use or even want Home Assistant?

That's okay... like I said you don't need it!  It'll work whether you use Home Assistant or not!

 
## License

MIT
**Free Software, Hell Yeah!**

![Cabinet](cap2.png "Under Cabinet wiring")

## Test

![Testing](https://www.youtube.com/shorts/gl1sx5xCnvY)
