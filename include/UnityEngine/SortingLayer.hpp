// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SortingLayer
  struct SortingLayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SortingLayer, "UnityEngine", "SortingLayer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.SortingLayer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 106B5D0
  struct SortingLayer/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Id
    // Size: 0x4
    // Offset: 0x0
    int m_Id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SortingLayer
    constexpr SortingLayer(int m_Id_ = {}) noexcept : m_Id{m_Id_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Id;
    }
    // Get instance field reference: private System.Int32 m_Id
    [[deprecated("Use field access instead!")]] int& dyn_m_Id();
    // static public System.Int32 GetLayerValueFromID(System.Int32 id)
    // Offset: 0x28E097C
    static int GetLayerValueFromID(int id);
  }; // UnityEngine.SortingLayer
  #pragma pack(pop)
  static check_size<sizeof(SortingLayer), 0 + sizeof(int)> __UnityEngine_SortingLayerSizeCheck;
  static_assert(sizeof(SortingLayer) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SortingLayer::GetLayerValueFromID
// Il2CppName: GetLayerValueFromID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::SortingLayer::GetLayerValueFromID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SortingLayer), "GetLayerValueFromID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
