// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.DeflateStreamNative
#include "System/IO/Compression/DeflateStreamNative.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*, "System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateStreamNative::SafeDeflateStreamHandle : public ::System::Runtime::InteropServices::SafeHandle {
    public:
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x1CB2934
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
    // private System.Void .ctor()
    // Offset: 0x1CB28E0
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStreamNative::SafeDeflateStreamHandle* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStreamNative::SafeDeflateStreamHandle*, creationType>()));
    }
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x1CB2980
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // System.IO.Compression.DeflateStreamNative/System.IO.Compression.SafeDeflateStreamHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::get_IsInvalid
// Il2CppName: get_IsInvalid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::*)()>(&System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::get_IsInvalid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*), "get_IsInvalid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::*)()>(&System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
