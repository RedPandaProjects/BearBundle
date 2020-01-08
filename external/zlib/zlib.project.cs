using BearBuildTool.Projects;
using System.IO;
using System;
public class zlib :Project
{
	public zlib(string ProjectPath)
	{	
		OnlyAsStatic=true;
		AddSourceFiles(Path.Combine(ProjectPath,"source"));
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","zlib"));
	}
} 