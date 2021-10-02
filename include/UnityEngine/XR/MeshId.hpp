// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.MeshId
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: E995EC
  // [NativeHeaderAttribute] Offset: E995EC
  struct MeshId/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::MeshId>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.UInt64 m_SubId1
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_SubId1;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 m_SubId2
    // Size: 0x8
    // Offset: 0x8
    uint64_t m_SubId2;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: MeshId
    constexpr MeshId(uint64_t m_SubId1_ = {}, uint64_t m_SubId2_ = {}) noexcept : m_SubId1{m_SubId1_}, m_SubId2{m_SubId2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::MeshId>
    operator System::IEquatable_1<UnityEngine::XR::MeshId>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::MeshId>*>(this);
    }
    // Get static field: static private UnityEngine.XR.MeshId s_InvalidId
    static UnityEngine::XR::MeshId _get_s_InvalidId();
    // Set static field: static private UnityEngine.XR.MeshId s_InvalidId
    static void _set_s_InvalidId(UnityEngine::XR::MeshId value);
    // Get instance field reference: private System.UInt64 m_SubId1
    uint64_t& dyn_m_SubId1();
    // Get instance field reference: private System.UInt64 m_SubId2
    uint64_t& dyn_m_SubId2();
    // static private System.Void .cctor()
    // Offset: 0x2612AF0
    static void _cctor();
    // public System.Boolean Equals(UnityEngine.XR.MeshId other)
    // Offset: 0x2612890
    bool Equals(UnityEngine::XR::MeshId other);
    // public override System.String ToString()
    // Offset: 0x26129C8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2612990
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2612A58
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.XR.MeshId
  #pragma pack(pop)
  static check_size<sizeof(MeshId), 8 + sizeof(uint64_t)> __UnityEngine_XR_MeshIdSizeCheck;
  static_assert(sizeof(MeshId) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::MeshId::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshId), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshId::*)(UnityEngine::XR::MeshId)>(&UnityEngine::XR::MeshId::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "MeshId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (UnityEngine::XR::MeshId::*)()>(&UnityEngine::XR::MeshId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshId), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::MeshId::*)()>(&UnityEngine::XR::MeshId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::MeshId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::MeshId::*)(::Il2CppObject*)>(&UnityEngine::XR::MeshId::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::MeshId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
