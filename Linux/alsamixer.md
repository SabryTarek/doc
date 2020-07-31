# increase sound level
amixer set Master 8%+

# decrease sound level
amixer set Master 8%-
# set to specific sound level
amixer set Master 50%
you can setup a key such as 【Super+↑】 and 【Super+↓】 to adjust sound level. See Linux: Keyboard Software Guide.

mute and unmute
# mute
amixer set Master mute

# need to run all the following to unmute
amixer set Master unmute
amixer set Headphone unmute
amixer set PCM unmute
amixer set Front unmute
amixer set Surround unmute
amixer set Center unmute
amixer set LFE unmute
amixer set Side unmute


- PS1
- PS2
- PS3
- PS4
- PROMPT_COMMAND

# PS stands for Prompt Statement