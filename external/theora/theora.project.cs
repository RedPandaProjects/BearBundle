using BearBuildTool.Projects;
using System.IO;
using System;
public class theora :Project
{
	public theora(string ProjectPath)
	{
		OnlyAsStatic=true;
		AddSourceFiles(Path.Combine(ProjectPath,"source"),true);
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","theora"));
		Projects.Public.Add("ogg");
	}
} 