.PHONY: clean All

All:
	@echo "----------Building project:[ Starwars_CppGame - Debug ]----------"
	@"$(MAKE)" -f  "Starwars_CppGame.mk"
clean:
	@echo "----------Cleaning project:[ Starwars_CppGame - Debug ]----------"
	@"$(MAKE)" -f  "Starwars_CppGame.mk" clean
