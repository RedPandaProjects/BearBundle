using BearBuildTool.Projects;
using System.IO;
using System;
public class nvtt :Project
{
	public nvtt(string ProjectPath)
	{
		AddSourceFiles(Path.Combine(ProjectPath,"source"),true);
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Projects.Private.Add("bear_core");
		OnlyAsStatic = true;
	}
} 