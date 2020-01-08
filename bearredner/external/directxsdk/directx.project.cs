
using BearBuildTool.Projects;
using System.IO;
using System;
public class directx :Project
{ 
	public directx(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"Include"));
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64)
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"Lib","x64"));
		else 
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"Lib","x86"));
	}
} 