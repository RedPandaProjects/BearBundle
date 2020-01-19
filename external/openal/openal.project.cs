using BearBuildTool.Projects;
using System.IO;
using System;
public class openal :Project
{
	public openal(string ProjectPath)
	{
		Defines.Private.Add("AL_BUILD_LIBRARY");
		LibrariesStatic.Private.Add("version");
		LibrariesStatic.Private.Add("winmm");
		LibrariesStatic.Private.Add("odbc32");
		LibrariesStatic.Private.Add("odbccp32");
		AddSourceFiles(Path.Combine(ProjectPath,"source"));
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","openal"));
	}
} 