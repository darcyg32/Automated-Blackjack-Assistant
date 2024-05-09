import cv2
import pygetwindow as gw
import pyautogui
import numpy as np

# Find the OBS window
obs_window = gw.getWindowsWithTitle("OBS")[0]

# Activate the OBS window
obs_window.activate()

# Capture the OBS window
screenshot = pyautogui.screenshot(region=(obs_window.left, obs_window.top, obs_window.width, obs_window.height))

# Convert the screenshot to OpenCV format
screenshot_cv = cv2.cvtColor(np.array(screenshot), cv2.COLOR_RGB2BGR)

# Display the screenshot (for testing)
cv2.imshow("OBS Capture", screenshot_cv)
cv2.waitKey(0)
cv2.destroyAllWindows()