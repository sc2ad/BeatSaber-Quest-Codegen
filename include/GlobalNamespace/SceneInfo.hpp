// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneInfo*, "", "SceneInfo");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: SceneInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneInfo : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    public:
    // private System.String _sceneName
    // Size: 0x8
    // Offset: 0x18
    ::StringW sceneName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean _disabledRootObjects
    // Size: 0x1
    // Offset: 0x20
    bool disabledRootObjects;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _sceneName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__sceneName();
    // Get instance field reference: private System.Boolean _disabledRootObjects
    [[deprecated("Use field access instead!")]] bool& dyn__disabledRootObjects();
    // public System.String get_sceneName()
    // Offset: 0x2ABAA5C
    ::StringW get_sceneName();
    // public System.Boolean get_disabledRootObjects()
    // Offset: 0x2ABAA64
    bool get_disabledRootObjects();
    // public System.Void .ctor()
    // Offset: 0x2ABAA6C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneInfo*, creationType>()));
    }
  }; // SceneInfo
  #pragma pack(pop)
  static check_size<sizeof(SceneInfo), 32 + sizeof(bool)> __GlobalNamespace_SceneInfoSizeCheck;
  static_assert(sizeof(SceneInfo) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::get_sceneName
// Il2CppName: get_sceneName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SceneInfo::*)()>(&GlobalNamespace::SceneInfo::get_sceneName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneInfo*), "get_sceneName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::get_disabledRootObjects
// Il2CppName: get_disabledRootObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SceneInfo::*)()>(&GlobalNamespace::SceneInfo::get_disabledRootObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneInfo*), "get_disabledRootObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
