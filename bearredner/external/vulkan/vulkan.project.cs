using BearBuildTool.Projects;
using System.IO;
using System;
public class vulkan :Project
{ 
	public vulkan(string ProjectPath)
	{
		Include.Public.Add(Path.Combine(ProjectPath,"include"));
		if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64||
			BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win32||
			BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.MinGW)
		{
			string path_lib="win32";
			if(BearBuildTool.Config.Global.Platform == BearBuildTool.Config.Platform.Win64)
				path_lib="win64";
			LibrariesPath.Public.Add(Path.Combine(ProjectPath,"lib",path_lib));
			LibrariesStatic.Public.Add("vulkan-1.lib");
			if(BearBuildTool.Config.Global.DevVersion)
			{
				LibrariesStatic.Public.Add("shaderc_shared.lib");
				LibrariesDynamic.Add(Path.Combine(ProjectPath,"lib",path_lib,"shaderc_shared.dll"));
			}

		}
    }
} 