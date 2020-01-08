using BearBuildTool.Projects;
using System.IO;
using System;
public class atimgpud :Project
{ 
	public atimgpud(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		LibrariesPath.Public.Add(Path.Combine(ProjectPath,"ati"));
		LibrariesStatic.Public.Add("atimgpud_s_x86.lib");
	}
} 