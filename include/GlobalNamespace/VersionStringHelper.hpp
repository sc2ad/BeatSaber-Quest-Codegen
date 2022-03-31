// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VersionStringHelper
  class VersionStringHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VersionStringHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionStringHelper*, "", "VersionStringHelper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VersionStringHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class VersionStringHelper : public ::Il2CppObject {
    public:
    // static public System.Int32 GetMajorVersionNumber(System.String versionString)
    // Offset: 0x29DB39C
    static int GetMajorVersionNumber(::StringW versionString);
  }; // VersionStringHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VersionStringHelper::GetMajorVersionNumber
// Il2CppName: GetMajorVersionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&GlobalNamespace::VersionStringHelper::GetMajorVersionNumber)> {
  static const MethodInfo* get() {
    static auto* versionString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VersionStringHelper*), "GetMajorVersionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{versionString});
  }
};
