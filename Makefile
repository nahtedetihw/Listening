TARGET := iphone:clang:latest:14.0
INSTALL_TARGET_PROCESSES = SpringBoard

DEBUG = 0
FINALPACKAGE = 1

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Listening

Listening_FILES = Tweak.xm
Listening_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk
