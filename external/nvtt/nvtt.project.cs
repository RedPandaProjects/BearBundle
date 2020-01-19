using BearBuildTool.Projects;
using System.IO;
using System;
public class nvtt :Project
{
	public nvtt(string ProjectPath)
	{
		AddSourceFiles(Path.Combine(ProjectPath,"source"),true);
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","nvcore"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","nvimage"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","nvmath"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","nvthread"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","nvtt"));
		Include.Private.Add(Path.Combine(ProjectPath,"source","squish"));
		Projects.Public.Add("poshlib");
		Projects.Private.Add("stb_image");
		OnlyAsStatic = true;
		Warning=false;
	}
} 