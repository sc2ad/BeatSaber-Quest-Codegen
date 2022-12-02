// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MissionObjective
#include "GlobalNamespace/MissionObjective.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MissionDataExtensions
  class MissionDataExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MissionDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionDataExtensions*, "", "MissionDataExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MissionDataExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MissionDataExtensions : public ::Il2CppObject {
    public:
    // static public System.String Name(MissionObjective/ReferenceValueComparisonType comparisonType)
    // Offset: 0x13465EC
    static ::StringW Name(::GlobalNamespace::MissionObjective::ReferenceValueComparisonType comparisonType);
  }; // MissionDataExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MissionDataExtensions::Name
// Il2CppName: Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MissionObjective::ReferenceValueComparisonType)>(&GlobalNamespace::MissionDataExtensions::Name)> {
  static const MethodInfo* get() {
    static auto* comparisonType = &::il2cpp_utils::GetClassFromName("", "MissionObjective/ReferenceValueComparisonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MissionDataExtensions*), "Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{comparisonType});
  }
};
