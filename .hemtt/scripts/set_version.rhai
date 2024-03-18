// Get the path to the script_version.hpp file
let version = HEMTT_RFS
        .join("addons")
        .join("main")
        .join("script_version.hpp");

// Create (or overwrite) the file
let out = version.create_file();

// Get date
let year = date("[year repr:last_two]");
let month = date("[month]");
let day = date("[day]");
let time = date("[hour][minute]");

// Write dates to new version
out.write("#define MAJOR " + year.to_string() + "\n");
out.write("#define MINOR " + month.to_string() + "\n");
out.write("#define PATCH " + day.to_string() + "\n");
out.write("#define BUILD " + time.to_string() + "\n");

info("Setting version.");