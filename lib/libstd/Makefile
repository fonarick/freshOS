CROSS_COMPILE				 ?=
TARGET						 ?=	libstd.so
CC							 :=	$(CROSS_COMPILE)g++

TOP_DIR						 :=	$(shell pwd)
OBJ_DIR						 :=	$(TOP_DIR)/obj
INCDIRS						 :=	src								\
								src/ext							
							
INCLUDE						 :=	$(patsubst %, -I %, $(INCDIRS))
CFILES						 :=	$(foreach dir, $(INCDIRS), $(wildcard $(dir)/*.cpp))
CFILENDIR					 :=	$(notdir $(CFILES))
OBJS						 :=	$(patsubst %, obj/%, $(CFILENDIR:.cpp=.o))

CFLAGS_COMPILE				  =	-fpic
CFLAGS_LINK					  =	-shared

export CC TOP_DIR OBJ_DIR INCDIRS INCLUDE CFLAGS  
		
all: $(TARGET)

$(INCDIRS):
	make -C $@

$(OBJS): $(CFILES)
	$(CC) $(CFLAGS_COMPILE) -c -o $@ $(word 1, $(CFILES))
	$(eval CFILES			 :=	$(filter-out $(word 1, $(CFILES)), $(CFILES)))
	
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS_LINK) -o $@ $^

clean:
	rm -rf $(OBJ_DIR)/*.o 
	rm -rf $(TARGET)