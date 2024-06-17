@echo off

set PROTO_DIR=protocols

set CPP_DIR=out

for %%f in (%PROTO_DIR%\*.proto) do (
    protoc -I=%PROTO_DIR% --cpp_out=%CPP_DIR% %%f
    echo %%~nf.proto file to cpp 
)

echo job done.
pause
