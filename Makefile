.PHONY: clean All

All:
	@echo "----------Building project:[ PassingPointers3 - Debug ]----------"
	@cd "PassingPointer3" && "$(MAKE)" -f  "PassingPointers3.mk"
clean:
	@echo "----------Cleaning project:[ PassingPointers3 - Debug ]----------"
	@cd "PassingPointer3" && "$(MAKE)" -f  "PassingPointers3.mk" clean
