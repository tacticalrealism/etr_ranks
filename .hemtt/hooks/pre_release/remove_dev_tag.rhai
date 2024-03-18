// Read the current contents from mod.cpp file from the project source.
print("Removing [DEV] tag.");
let modcpp = HEMTT_DIRECTORY.join("mod.cpp").open_file().read();

// Replace '[DEV] ' with nothing, eg. remove the [DEV] tag.
modcpp.replace("[DEV] ", "");

// Write the new contents to the build output, create_file will overwrite the file if it exists.
HEMTT_OUTPUT.join("mod.cpp").create_file().write(modcpp);