using BearBuildTool.Projects;
using System.IO;
using System;
public class freetype :Project
{
	public freetype(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64)
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"objs","vc2017","x64"));
		else 
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"objs","vc2017","Win32"));
	}
} 