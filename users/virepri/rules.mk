SRC += leaders.c

ifeq ($(strip $(USER_LEADER_KEYS)), yes)
	LEADER_ENABLE = yes
	OPT_DEFS += -DUSER_LEADERS
endif
