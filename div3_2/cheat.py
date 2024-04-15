import pyautogui
import threading
import time
import keyboard 

def kill_aura():
    while aura_enabled:
        screen_width, screen_height = pyautogui.size()
        center_x = screen_width // 2
        center_y = screen_height // 2
        
        pyautogui.click(center_x, center_y)
        time.sleep(0.01)


def toggle_aura():
    global aura_enabled
    aura_enabled = not aura_enabled
    if aura_enabled:
        aura_thread = threading.Thread(target=kill_aura)
        aura_thread.start()


def handle_key_event(e):
    if e.name == "R": 
        toggle_aura()


keyboard.on_press(handle_key_event)


aura_enabled = False

try:
    while True:
        pass
except KeyboardInterrupt:
    pass
finally:

    keyboard.unhook_all()

