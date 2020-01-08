using BearBuildTool.Projects;
using System.IO;
using System;
public class nvapi :Project
{ 
	public nvapi(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		LibrariesPath.Public.Add(Path.Combine(ProjectPath,"lib"));
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win32)
		{
			LibrariesStatic.Public.Add("nvapi.lib");
		}
		else
		{
			LibrariesStatic.Public.Add("nvapi64.lib");
		}			
		
	}
} 