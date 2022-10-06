// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: ExpandString
  class ExpandString;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::ExpandString);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::ExpandString*, "Microsoft.Win32", "ExpandString");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.ExpandString
  // [TokenAttribute] Offset: FFFFFFFF
  class ExpandString : public ::Il2CppObject {
    public:
    public:
    // private System.String value
    // Size: 0x8
    // Offset: 0x10
    ::StringW value;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return value;
    }
    // Get instance field reference: private System.String value
    [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    // public System.Void .ctor(System.String s)
    // Offset: 0x1F9F5B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExpandString* New_ctor(::StringW s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::ExpandString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExpandString*, creationType>(s)));
    }
    // public System.String Expand()
    // Offset: 0x1F9F5EC
    ::StringW Expand();
    // public override System.String ToString()
    // Offset: 0x1F9F5E4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Microsoft.Win32.ExpandString
  #pragma pack(pop)
  static check_size<sizeof(ExpandString), 16 + sizeof(::StringW)> __Microsoft_Win32_ExpandStringSizeCheck;
  static_assert(sizeof(ExpandString) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Microsoft::Win32::ExpandString::*)()>(&Microsoft::Win32::ExpandString::Expand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::ExpandString*), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Microsoft::Win32::ExpandString::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Microsoft::Win32::ExpandString::*)()>(&Microsoft::Win32::ExpandString::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Microsoft::Win32::ExpandString*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
