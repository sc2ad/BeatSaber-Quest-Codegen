// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.RotationLimitPolygonal
#include "RootMotion/FinalIK/RotationLimitPolygonal.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::RotationLimitPolygonal::ReachCone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*, "RootMotion.FinalIK", "RotationLimitPolygonal/ReachCone");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.ReachCone
  // [TokenAttribute] Offset: FFFFFFFF
  class RotationLimitPolygonal::ReachCone : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3[] tetrahedron
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> tetrahedron;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public System.Single volume
    // Size: 0x4
    // Offset: 0x18
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 S
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 S;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 B
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 B;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3[] tetrahedron
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_tetrahedron();
    // Get instance field reference: public System.Single volume
    [[deprecated("Use field access instead!")]] float& dyn_volume();
    // Get instance field reference: public UnityEngine.Vector3 S
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_S();
    // Get instance field reference: public UnityEngine.Vector3 B
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_B();
    // public UnityEngine.Vector3 get_o()
    // Offset: 0x2043314
    ::UnityEngine::Vector3 get_o();
    // public UnityEngine.Vector3 get_a()
    // Offset: 0x204334C
    ::UnityEngine::Vector3 get_a();
    // public UnityEngine.Vector3 get_b()
    // Offset: 0x2043388
    ::UnityEngine::Vector3 get_b();
    // public UnityEngine.Vector3 get_c()
    // Offset: 0x20433C4
    ::UnityEngine::Vector3 get_c();
    // public System.Boolean get_isValid()
    // Offset: 0x2042478
    bool get_isValid();
    // public System.Void .ctor(UnityEngine.Vector3 _o, UnityEngine.Vector3 _a, UnityEngine.Vector3 _b, UnityEngine.Vector3 _c)
    // Offset: 0x2042AC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RotationLimitPolygonal::ReachCone* New_ctor(::UnityEngine::Vector3 _o, ::UnityEngine::Vector3 _a, ::UnityEngine::Vector3 _b, ::UnityEngine::Vector3 _c) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RotationLimitPolygonal::ReachCone*, creationType>(_o, _a, _b, _c)));
    }
    // public System.Void Calculate()
    // Offset: 0x2042C24
    void Calculate();
  }; // RootMotion.FinalIK.RotationLimitPolygonal/RootMotion.FinalIK.ReachCone
  #pragma pack(pop)
  static check_size<sizeof(RotationLimitPolygonal::ReachCone), 40 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_RotationLimitPolygonal_ReachConeSizeCheck;
  static_assert(sizeof(RotationLimitPolygonal::ReachCone) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_o
// Il2CppName: get_o
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_o)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "get_o", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_a
// Il2CppName: get_a
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_a)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "get_a", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_b
// Il2CppName: get_b
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_b)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "get_b", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_c
// Il2CppName: get_c
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_c)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "get_c", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_isValid
// Il2CppName: get_isValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::get_isValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "get_isValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::Calculate
// Il2CppName: Calculate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::*)()>(&RootMotion::FinalIK::RotationLimitPolygonal::ReachCone::Calculate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::RotationLimitPolygonal::ReachCone*), "Calculate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
