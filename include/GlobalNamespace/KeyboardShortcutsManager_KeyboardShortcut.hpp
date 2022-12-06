// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: KeyboardShortcutsManager
#include "GlobalNamespace/KeyboardShortcutsManager.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, "", "KeyboardShortcutsManager/KeyboardShortcut");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: KeyboardShortcutsManager/KeyboardShortcut
  // [TokenAttribute] Offset: FFFFFFFF
  class KeyboardShortcutsManager::KeyboardShortcut : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.KeyCode mainKey
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::KeyCode mainKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // public UnityEngine.KeyCode combinationKey1
    // Size: 0x4
    // Offset: 0x14
    ::UnityEngine::KeyCode combinationKey1;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // public UnityEngine.KeyCode combinationKey2
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::KeyCode combinationKey2;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.KeyCode mainKey
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_mainKey();
    // Get instance field reference: public UnityEngine.KeyCode combinationKey1
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_combinationKey1();
    // Get instance field reference: public UnityEngine.KeyCode combinationKey2
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn_combinationKey2();
    // public System.Void .ctor(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2)
    // Offset: 0x1600E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardShortcutsManager::KeyboardShortcut* New_ctor(::UnityEngine::KeyCode mainKey, ::UnityEngine::KeyCode combinationKey1, ::UnityEngine::KeyCode combinationKey2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardShortcutsManager::KeyboardShortcut*, creationType>(mainKey, combinationKey1, combinationKey2)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x1601268
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x160127C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // KeyboardShortcutsManager/KeyboardShortcut
  #pragma pack(pop)
  static check_size<sizeof(KeyboardShortcutsManager::KeyboardShortcut), 24 + sizeof(::UnityEngine::KeyCode)> __GlobalNamespace_KeyboardShortcutsManager_KeyboardShortcutSizeCheck;
  static_assert(sizeof(KeyboardShortcutsManager::KeyboardShortcut) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::*)()>(&GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::*)(::Il2CppObject*)>(&GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
