using BearBuildTool.Projects;
using System.IO;
using System;
public class openal :Project
{
	public openal(string ProjectPath)
	{
		Defines.Private.Add("AL_BUILD_LIBRARY");
		LibrariesStatic.Private.Add("version.lib");
		LibrariesStatic.Private.Add("winmm.lib");
		LibrariesStatic.Private.Add("odbc32.lib");
		LibrariesStatic.Private.Add("odbccp32.lib");
		AddSourceFiles(Path.Combine(ProjectPath,"source"));
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","openal"));
	}
} 