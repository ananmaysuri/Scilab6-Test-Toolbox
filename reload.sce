try
    fileUnloader = get_absolute_file_path("reload.sce") - "reload.sce" + "unloader.sce";
    if isfile(fileUnloader) then
        exec(fileUnloader);
    end
catch
end
exec cleaner.sce
ulink
clear
exec builder.sce