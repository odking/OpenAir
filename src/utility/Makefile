-include $(TOPDIR)/Makefile.env


$(SLIB): $(OBJS)
	$(AR) $@ $^ 

$(OBJS): %.o: %.cpp
	$(CC) -I$(INCLUDES) -I$(INCDIR) -MM $<
	$(CC) $(CFLAGS) -I$(INCLUDES) -I$(INCDIR) -c $< -o $@

.PHONY: clean
clean:
	-$(RM) $(OBJS)
	-$(RM) $(TARGET)



