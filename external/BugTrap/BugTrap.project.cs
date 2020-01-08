using BearBuildTool.Projects;
using System.IO;
using System;
public class BugTrap :Project
{ 
	public BugTrap(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"source","Client"));
		
	}
	public override void StartBuild()
	{
		string name="BugTrap";
		LibrariesPath.Public.Add(Path.Combine(ProjectPath,"bin"));
		if(BearBuildTool.Config.Global.UNICODE)
			name+="U";
		if(BearBuildTool.Config.Global.Configure == BearBuildTool.Config.Configure.Debug)
			name+="D";
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64||BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.MinGW)
			name+="-x64";
		LibrariesStatic.Public.Add(name+".lib");
		LibrariesDynamic.Add(Path.Combine(ProjectPath,"bin",name+".dll"));
	}
} 