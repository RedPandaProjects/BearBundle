using BearBuildTool.Projects;
using System.IO;
using System;
public class GPUPerfAPI :Project
{ 
	public GPUPerfAPI(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
	}
} 