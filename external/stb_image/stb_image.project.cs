using BearBuildTool.Projects;
using System.IO;
using System;
public class stb_image :Project
{ 
	public stb_image(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
	}
} 