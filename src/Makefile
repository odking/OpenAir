-include $(TOPDIR)/Makefile.env

export SLIB=$(OUTDIR)/libair.a

$(OPENAIR):main.o
	@for D in $(SUBDIRS);\
		do $(MAKE) -C $$D;\
	done

	$(CC) $(CFLAGS) -I$(INCDIR) -o $@ $< -L$(OUTDIR) -lair
	mv $@ $(OUTDIR)/

main.o: main.cpp
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< $(LIBS)


#.phony is a fake object;
.PHONY : clean
clean :
	@for D in $(SUBDIRS);\
		do $(MAKE) clean -C $$D;\
	done

	-$(RM) main.o # it means there may be some error, ignore them and continue the operation.
