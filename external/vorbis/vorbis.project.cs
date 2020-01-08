using BearBuildTool.Projects;
using System.IO;
using System;
public class vorbis :Project
{
	public vorbis(string ProjectPath)
	{
		OnlyAsStatic=true;
		AddSourceFiles(Path.Combine(ProjectPath,"source"),true);
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		Include.Private.Add(Path.Combine(ProjectPath,"include","vorbis"));
		Projects.Public.Add("ogg");
	}
} 