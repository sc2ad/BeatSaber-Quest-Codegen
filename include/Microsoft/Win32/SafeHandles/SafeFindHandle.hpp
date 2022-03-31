// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeFindHandle
  class SafeFindHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::SafeHandles::SafeFindHandle);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::SafeHandles::SafeFindHandle*, "Microsoft.Win32.SafeHandles", "SafeFindHandle");
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeFindHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class SafeFindHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // System.Void .ctor(System.IntPtr preexistingHandle)
    // Offset: 0x1EF6218
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SafeFindHandle* New_ctor(::System::IntPtr preexistingHandle) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::SafeHandles::SafeFindHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SafeFindHandle*, creationType>(preexistingHandle)));
    }
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x1EF6244
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeFindHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeFindHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::SafeHandles::SafeFindHandle::ReleaseHandle
// Il2CppName: ReleaseHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Microsoft::Win32::SafeHandles::SafeFindHandle::*)()>(&Microsoft::Win32::SafeHandles::SafeFindHandle::ReleaseHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::SafeHandles::SafeFindHandle*), "ReleaseHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
