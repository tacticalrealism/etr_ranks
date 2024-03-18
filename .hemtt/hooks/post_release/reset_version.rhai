// Get the path to the script_version.hpp file
let version = HEMTT_RFS
        .join("addons")
        .join("main")
        .join("script_version.hpp");

// Create (or overwrite) the file
let out = version.create_file();

// Write dates to new version
out.write("#define MAJOR 0" + "\n");
out.write("#define MINOR 0" + "\n");
out.write("#define PATCH 0" + "\n");
out.write("#define BUILD 0" + "\n");