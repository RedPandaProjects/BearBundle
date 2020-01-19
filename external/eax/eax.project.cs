using BearBuildTool.Projects;
using System.IO;
using System;
public class eax :Project
{ 
	public eax(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
	}
} 