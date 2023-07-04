##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=STL_C++
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/Dronnzer/Desktop/Section4
ProjectPath            :=C:/Users/Dronnzer/Desktop/Section4/STL_C++
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Dronnzer
Date                   :=04/07/2023
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/Users/Dronnzer/Desktop/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/Users/Dronnzer/Desktop/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName).exe
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="STL_C++.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/Users/Dronnzer/Desktop/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/Users/Dronnzer/Desktop/mingw64/bin/ar.exe rcu
CXX      := C:/Users/Dronnzer/Desktop/mingw64/bin/g++.exe
CC       := C:/Users/Dronnzer/Desktop/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/Users/Dronnzer/Desktop/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Attack.cpp$(ObjectSuffix) $(IntermediateDirectory)/Shield.cpp$(ObjectSuffix) $(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) $(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Attack.cpp$(ObjectSuffix): Attack.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Attack.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Attack.cpp$(DependSuffix) -MM Attack.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dronnzer/Desktop/Section4/STL_C++/Attack.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Attack.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Attack.cpp$(PreprocessSuffix): Attack.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Attack.cpp$(PreprocessSuffix) Attack.cpp

$(IntermediateDirectory)/Shield.cpp$(ObjectSuffix): Shield.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Shield.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Shield.cpp$(DependSuffix) -MM Shield.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dronnzer/Desktop/Section4/STL_C++/Shield.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Shield.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Shield.cpp$(PreprocessSuffix): Shield.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Shield.cpp$(PreprocessSuffix) Shield.cpp

$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix): Weapon.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Weapon.cpp$(DependSuffix) -MM Weapon.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dronnzer/Desktop/Section4/STL_C++/Weapon.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Weapon.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Weapon.cpp$(PreprocessSuffix): Weapon.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Weapon.cpp$(PreprocessSuffix) Weapon.cpp

$(IntermediateDirectory)/Player.cpp$(ObjectSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Player.cpp$(DependSuffix) -MM Player.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dronnzer/Desktop/Section4/STL_C++/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Player.cpp$(PreprocessSuffix): Player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Player.cpp$(PreprocessSuffix) Player.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Dronnzer/Desktop/Section4/STL_C++/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


