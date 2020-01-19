
using BearBuildTool.Projects;
using System.IO;
using System;
public class directx :Project
{ 
	public directx(string ProjectPath)
	{
		/*if (BearBuildTool.Config.Global.Platform != BearBuildTool.Config.Platform.MinGW)
		{*/
			Include.Public.Add(Path.Combine(ProjectPath, "Include"));
		/*}*/
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64|| BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.MinGW)
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"Lib","x64"));
		else 
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"Lib","x86"));
	}
} 