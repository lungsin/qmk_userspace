# VIA_ENABLE = yes
ENCODER_MAP_ENABLE = yes
TRI_LAYER_ENABLE = no

OLED_ENABLE = yes
LTO_ENABLE = yes
WPM_ENABLE = yes

OCEAN_DREAM_ENABLE = yes # slave

LUNA_ENABLE = yes # master


ifeq ($(strip $(OLED_ENABLE)), yes)
  SRC += oled.c

  ifdef OCEAN_DREAM_ENABLE
      ifeq ($(strip $(OCEAN_DREAM_ENABLE)), yes)
        SRC += ocean_dream.c
        OPT_DEFS += -DOCEAN_DREAM_ENABLE
      endif
  endif
  ifndef OCEAN_DREAM_ENABLE
      SRC += ocean_dream.c
      OPT_DEFS += -DOCEAN_DREAM_ENABLE
  endif

  ifdef LUNA_ENABLE
      ifeq ($(strip $(LUNA_ENABLE)), yes)
        SRC += luna.c
        OPT_DEFS += -DLUNA_ENABLE
      endif
  endif
  ifndef LUNA_ENABLE
    SRC += luna.c
    OPT_DEFS += -DLUNA_ENABLE
  endif

endif
