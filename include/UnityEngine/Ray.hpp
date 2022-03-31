// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ray, "UnityEngine", "Ray");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Ray
  // [TokenAttribute] Offset: FFFFFFFF
  struct Ray/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Origin
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Origin;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 m_Direction
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 m_Direction;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: Ray
    constexpr Ray(::UnityEngine::Vector3 m_Origin_ = {}, ::UnityEngine::Vector3 m_Direction_ = {}) noexcept : m_Origin{m_Origin_}, m_Direction{m_Direction_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 m_Origin
    ::UnityEngine::Vector3& dyn_m_Origin();
    // Get instance field reference: private UnityEngine.Vector3 m_Direction
    ::UnityEngine::Vector3& dyn_m_Direction();
    // public UnityEngine.Vector3 get_origin()
    // Offset: 0x20C3C98
    ::UnityEngine::Vector3 get_origin();
    // public System.Void set_origin(UnityEngine.Vector3 value)
    // Offset: 0x20C3CA4
    void set_origin(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_direction()
    // Offset: 0x20C3CB0
    ::UnityEngine::Vector3 get_direction();
    // public System.Void set_direction(UnityEngine.Vector3 value)
    // Offset: 0x20C3CBC
    void set_direction(::UnityEngine::Vector3 value);
    // public System.Void .ctor(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction)
    // Offset: 0x20C3C50
    // ABORTED: conflicts with another method.  Ray(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 GetPoint(System.Single distance)
    // Offset: 0x20C3CFC
    ::UnityEngine::Vector3 GetPoint(float distance);
    // public override System.String ToString()
    // Offset: 0x20C3DC0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Ray
  #pragma pack(pop)
  static check_size<sizeof(Ray), 12 + sizeof(::UnityEngine::Vector3)> __UnityEngine_RaySizeCheck;
  static_assert(sizeof(Ray) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Ray::get_origin
// Il2CppName: get_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)()>(&UnityEngine::Ray::get_origin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "get_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::set_origin
// Il2CppName: set_origin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Ray::*)(::UnityEngine::Vector3)>(&UnityEngine::Ray::set_origin)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "set_origin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::get_direction
// Il2CppName: get_direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)()>(&UnityEngine::Ray::get_direction)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "get_direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::set_direction
// Il2CppName: set_direction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Ray::*)(::UnityEngine::Vector3)>(&UnityEngine::Ray::set_direction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "set_direction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::Ray
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Ray::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Ray::*)(float)>(&UnityEngine::Ray::GetPoint)> {
  static const MethodInfo* get() {
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Ray::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Ray::*)()>(&UnityEngine::Ray::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Ray), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
