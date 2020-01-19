using BearBuildTool.Projects;
using System.IO;
using System;
public class dxc :Project
{ 
	public dxc(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64||
			BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.MinGW)
		{
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"lib"));
			LibrariesStatic.Public.Add("dxcompiler.lib");
			LibrariesDynamic.Add(Path.Combine(ProjectPath,"bin","dxcompiler.dll"));
			LibrariesDynamic.Add(Path.Combine(ProjectPath,"bin","dxil.dll"));
		}
		
	}

} 