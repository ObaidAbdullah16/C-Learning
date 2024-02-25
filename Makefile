.PHONY: clean All

All:
	@echo "----------Building project:[ Practise_Problem - Debug ]----------"
	@cd "Practise_Problem" && "$(MAKE)" -f  "Practise_Problem.mk"
clean:
	@echo "----------Cleaning project:[ Practise_Problem - Debug ]----------"
	@cd "Practise_Problem" && "$(MAKE)" -f  "Practise_Problem.mk" clean
