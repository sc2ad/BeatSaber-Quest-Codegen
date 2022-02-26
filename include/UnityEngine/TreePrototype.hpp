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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TreePrototype
  class TreePrototype;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TreePrototype);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TreePrototype*, "UnityEngine", "TreePrototype");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TreePrototype
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 1212B04
  class TreePrototype : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // UnityEngine.GameObject m_Prefab
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* m_Prefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // System.Single m_BendFactor
    // Size: 0x4
    // Offset: 0x18
    float m_BendFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: UnityEngine.GameObject m_Prefab
    ::UnityEngine::GameObject*& dyn_m_Prefab();
    // Get instance field reference: System.Single m_BendFactor
    float& dyn_m_BendFactor();
    // public UnityEngine.GameObject get_prefab()
    // Offset: 0x2A2CB98
    ::UnityEngine::GameObject* get_prefab();
    // public System.Void set_prefab(UnityEngine.GameObject value)
    // Offset: 0x2A2CBA0
    void set_prefab(::UnityEngine::GameObject* value);
    // public System.Single get_bendFactor()
    // Offset: 0x2A2CBA8
    float get_bendFactor();
    // public System.Void set_bendFactor(System.Single value)
    // Offset: 0x2A2CBB0
    void set_bendFactor(float value);
    // private System.Boolean Equals(UnityEngine.TreePrototype other)
    // Offset: 0x2A2CC34
    bool Equals(::UnityEngine::TreePrototype* other);
    // public System.Void .ctor()
    // Offset: 0x2A2CBB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TreePrototype* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TreePrototype::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TreePrototype*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2A2CBC0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2A2CD0C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.TreePrototype
  #pragma pack(pop)
  static check_size<sizeof(TreePrototype), 24 + sizeof(float)> __UnityEngine_TreePrototypeSizeCheck;
  static_assert(sizeof(TreePrototype) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TreePrototype::get_prefab
// Il2CppName: get_prefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (UnityEngine::TreePrototype::*)()>(&UnityEngine::TreePrototype::get_prefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "get_prefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::set_prefab
// Il2CppName: set_prefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TreePrototype::*)(::UnityEngine::GameObject*)>(&UnityEngine::TreePrototype::set_prefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "set_prefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::get_bendFactor
// Il2CppName: get_bendFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TreePrototype::*)()>(&UnityEngine::TreePrototype::get_bendFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "get_bendFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::set_bendFactor
// Il2CppName: set_bendFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TreePrototype::*)(float)>(&UnityEngine::TreePrototype::set_bendFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "set_bendFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TreePrototype::*)(::UnityEngine::TreePrototype*)>(&UnityEngine::TreePrototype::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "TreePrototype")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TreePrototype::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TreePrototype::*)(::Il2CppObject*)>(&UnityEngine::TreePrototype::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::TreePrototype::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::TreePrototype::*)()>(&UnityEngine::TreePrototype::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TreePrototype*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
