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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups*, "", "EnvironmentLightGroups");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentLightGroups
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentLightGroups : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::EnvironmentLightGroups::$$c
    class $$c;
    public:
    // [TooltipAttribute] Offset: 0x1111044
    // private System.Collections.Generic.List`1<LightGroupSO> _lightGroupSOList
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* lightGroupSOList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,LightGroupSO> _lightGroupSODict
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightGroupSO*>* lightGroupSODict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightGroupSO*>*) == 0x8);
    // private System.Collections.Generic.List`1<LightGroupSO> _lightGroupSOListForLightGroupDataDict
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* lightGroupSOListForLightGroupDataDict;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.List`1<LightGroupSO> _lightGroupSOList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& dyn__lightGroupSOList();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,LightGroupSO> _lightGroupSODict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::GlobalNamespace::LightGroupSO*>*& dyn__lightGroupSODict();
    // Get instance field reference: private System.Collections.Generic.List`1<LightGroupSO> _lightGroupSOListForLightGroupDataDict
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*& dyn__lightGroupSOListForLightGroupDataDict();
    // public System.Collections.Generic.List`1<LightGroupSO> get_lightGroupSOList()
    // Offset: 0x13888BC
    ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* get_lightGroupSOList();
    // public System.Void .ctor()
    // Offset: 0x1388B90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentLightGroups* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentLightGroups::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentLightGroups*, creationType>()));
    }
    // public LightGroupSO GetDataForGroup(System.Int32 groupId)
    // Offset: 0x13888C4
    ::GlobalNamespace::LightGroupSO* GetDataForGroup(int groupId);
    // public System.Void Sort()
    // Offset: 0x1388A80
    void Sort();
  }; // EnvironmentLightGroups
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentLightGroups), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>*)> __GlobalNamespace_EnvironmentLightGroupsSizeCheck;
  static_assert(sizeof(EnvironmentLightGroups) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList
// Il2CppName: get_lightGroupSOList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO*>* (GlobalNamespace::EnvironmentLightGroups::*)()>(&GlobalNamespace::EnvironmentLightGroups::get_lightGroupSOList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups*), "get_lightGroupSOList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::GetDataForGroup
// Il2CppName: GetDataForGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (GlobalNamespace::EnvironmentLightGroups::*)(int)>(&GlobalNamespace::EnvironmentLightGroups::GetDataForGroup)> {
  static const MethodInfo* get() {
    static auto* groupId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups*), "GetDataForGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{groupId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentLightGroups::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentLightGroups::*)()>(&GlobalNamespace::EnvironmentLightGroups::Sort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentLightGroups*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
