using BearBuildTool.Projects;
using System.IO;
using System;
public class poshlib :Project
{
	public poshlib(string ProjectPath)
	{	
		OnlyAsStatic=true;
		AddSourceFiles(Path.Combine(ProjectPath,"source"));
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Warning=false;
	}
} 