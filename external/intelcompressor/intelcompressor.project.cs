using BearBuildTool.Projects;
using System.IO;
using System;
public class intelcompressor :Project
{
	public intelcompressor(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
       	if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64||BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.MinGW)
		{
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"lib","win64"));
					LibrariesStatic.Public.Add("ispc_texcomp.lib");
		}
		else   	if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win32)
		{
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"lib","win32"));
			LibrariesStatic.Public.Add("ispc_texcomp.lib");
		}
		else
		{
			AddSourceFiles(Path.Combine(ProjectPath,"source"));
		}	
		
    }
} 