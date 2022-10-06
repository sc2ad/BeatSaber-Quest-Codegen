// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AnimatorControllerParameterType
#include "UnityEngine/AnimatorControllerParameterType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimatorControllerParameter
  class AnimatorControllerParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AnimatorControllerParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimatorControllerParameter*, "UnityEngine", "AnimatorControllerParameter");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x25
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorControllerParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 10870D8
  // [NativeHeaderAttribute] Offset: 10870D8
  // [NativeTypeAttribute] Offset: 10870D8
  // [NativeHeaderAttribute] Offset: 10870D8
  // [NativeAsStructAttribute] Offset: FFFFFFFF
  class AnimatorControllerParameter : public ::Il2CppObject {
    public:
    public:
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // UnityEngine.AnimatorControllerParameterType m_Type
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::AnimatorControllerParameterType m_Type;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimatorControllerParameterType) == 0x4);
    // System.Single m_DefaultFloat
    // Size: 0x4
    // Offset: 0x1C
    float m_DefaultFloat;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 m_DefaultInt
    // Size: 0x4
    // Offset: 0x20
    int m_DefaultInt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean m_DefaultBool
    // Size: 0x1
    // Offset: 0x24
    bool m_DefaultBool;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: UnityEngine.AnimatorControllerParameterType m_Type
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimatorControllerParameterType& dyn_m_Type();
    // Get instance field reference: System.Single m_DefaultFloat
    [[deprecated("Use field access instead!")]] float& dyn_m_DefaultFloat();
    // Get instance field reference: System.Int32 m_DefaultInt
    [[deprecated("Use field access instead!")]] int& dyn_m_DefaultInt();
    // Get instance field reference: System.Boolean m_DefaultBool
    [[deprecated("Use field access instead!")]] bool& dyn_m_DefaultBool();
    // public System.String get_name()
    // Offset: 0x2AA42D0
    ::StringW get_name();
    // public System.Void .ctor()
    // Offset: 0x2AA43F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorControllerParameter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AnimatorControllerParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorControllerParameter*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x2AA42D8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2AA43D0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.AnimatorControllerParameter
  #pragma pack(pop)
  static check_size<sizeof(AnimatorControllerParameter), 36 + sizeof(bool)> __UnityEngine_AnimatorControllerParameterSizeCheck;
  static_assert(sizeof(AnimatorControllerParameter) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::AnimatorControllerParameter::*)()>(&UnityEngine::AnimatorControllerParameter::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AnimatorControllerParameter::*)(::Il2CppObject*)>(&UnityEngine::AnimatorControllerParameter::Equals)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: UnityEngine::AnimatorControllerParameter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::AnimatorControllerParameter::*)()>(&UnityEngine::AnimatorControllerParameter::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AnimatorControllerParameter*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
