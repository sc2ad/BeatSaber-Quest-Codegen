// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
#include "System/IO/Compression/DeflateStreamNative_UnmanagedReadOrWrite.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite..ctor
System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite* System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<DeflateStreamNative::UnmanagedReadOrWrite*>(object, method));
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.Invoke
int System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke(System::IntPtr buffer, int length, System::IntPtr data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Invoke", buffer, length, data));
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.BeginInvoke
System::IAsyncResult* System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::BeginInvoke(System::IntPtr buffer, int length, System::IntPtr data, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", buffer, length, data, callback, object));
}
// Autogenerated method: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite.EndInvoke
int System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "EndInvoke", result));
}