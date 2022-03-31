// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: PathInternal
  class PathInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::PathInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathInternal*, "System.IO", "PathInternal");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.PathInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class PathInternal : public ::Il2CppObject {
    public:
    // static public System.Boolean IsPartiallyQualified(System.String path)
    // Offset: 0x1F6C294
    static bool IsPartiallyQualified(::StringW path);
    // static public System.Boolean HasIllegalCharacters(System.String path, System.Boolean checkAdditional)
    // Offset: 0x1F6BF58
    static bool HasIllegalCharacters(::StringW path, bool checkAdditional);
  }; // System.IO.PathInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::PathInternal::IsPartiallyQualified
// Il2CppName: IsPartiallyQualified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::IO::PathInternal::IsPartiallyQualified)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "IsPartiallyQualified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path});
  }
};
// Writing MetadataGetter for method: System::IO::PathInternal::HasIllegalCharacters
// Il2CppName: HasIllegalCharacters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, bool)>(&System::IO::PathInternal::HasIllegalCharacters)> {
  static const MethodInfo* get() {
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkAdditional = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PathInternal*), "HasIllegalCharacters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{path, checkAdditional});
  }
};
