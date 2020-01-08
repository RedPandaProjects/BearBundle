using BearBuildTool.Projects;
using System.IO;
using System;
public class tinyxml :Project
{
	public tinyxml(string ProjectPath)
	{
		AddSourceFiles(Path.Combine(ProjectPath,"source"));
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		OnlyAsStatic = true;
	}
} 