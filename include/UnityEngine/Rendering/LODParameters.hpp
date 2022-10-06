// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LODParameters
  struct LODParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LODParameters, "UnityEngine.Rendering", "LODParameters");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.LODParameters
  // [TokenAttribute] Offset: FFFFFFFF
  struct LODParameters/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*/ {
    public:
    public:
    // private System.Int32 m_IsOrthographic
    // Size: 0x4
    // Offset: 0x0
    int m_IsOrthographic;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 m_CameraPosition
    // Size: 0xC
    // Offset: 0x4
    ::UnityEngine::Vector3 m_CameraPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_FieldOfView
    // Size: 0x4
    // Offset: 0x10
    float m_FieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_OrthoSize
    // Size: 0x4
    // Offset: 0x14
    float m_OrthoSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_CameraPixelHeight
    // Size: 0x4
    // Offset: 0x18
    int m_CameraPixelHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LODParameters
    constexpr LODParameters(int m_IsOrthographic_ = {}, ::UnityEngine::Vector3 m_CameraPosition_ = {}, float m_FieldOfView_ = {}, float m_OrthoSize_ = {}, int m_CameraPixelHeight_ = {}) noexcept : m_IsOrthographic{m_IsOrthographic_}, m_CameraPosition{m_CameraPosition_}, m_FieldOfView{m_FieldOfView_}, m_OrthoSize{m_OrthoSize_}, m_CameraPixelHeight{m_CameraPixelHeight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(this);
    }
    // Creating interface conversion operator: i_LODParameters
    inline ::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>* i_LODParameters() noexcept {
      return reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::LODParameters>*>(this);
    }
    // Get instance field reference: private System.Int32 m_IsOrthographic
    [[deprecated("Use field access instead!")]] int& dyn_m_IsOrthographic();
    // Get instance field reference: private UnityEngine.Vector3 m_CameraPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_CameraPosition();
    // Get instance field reference: private System.Single m_FieldOfView
    [[deprecated("Use field access instead!")]] float& dyn_m_FieldOfView();
    // Get instance field reference: private System.Single m_OrthoSize
    [[deprecated("Use field access instead!")]] float& dyn_m_OrthoSize();
    // Get instance field reference: private System.Int32 m_CameraPixelHeight
    [[deprecated("Use field access instead!")]] int& dyn_m_CameraPixelHeight();
    // public System.Boolean Equals(UnityEngine.Rendering.LODParameters other)
    // Offset: 0x217B384
    bool Equals(::UnityEngine::Rendering::LODParameters other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x217B40C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x217B4AC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.LODParameters
  #pragma pack(pop)
  static check_size<sizeof(LODParameters), 24 + sizeof(int)> __UnityEngine_Rendering_LODParametersSizeCheck;
  static_assert(sizeof(LODParameters) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LODParameters::*)(::UnityEngine::Rendering::LODParameters)>(&UnityEngine::Rendering::LODParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "LODParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::LODParameters), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::LODParameters::*)(::Il2CppObject*)>(&UnityEngine::Rendering::LODParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::LODParameters), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::LODParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::LODParameters::*)()>(&UnityEngine::Rendering::LODParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::LODParameters), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
