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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIK
  class FABRIK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FABRIKChain
  class FABRIKChain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::FABRIKChain);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FABRIKChain*, "RootMotion.FinalIK", "FABRIKChain");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.FABRIKChain
  // [TokenAttribute] Offset: FFFFFFFF
  class FABRIKChain : public ::Il2CppObject {
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
    // public RootMotion.FinalIK.FABRIK ik
    // Size: 0x8
    // Offset: 0x10
    ::RootMotion::FinalIK::FABRIK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::FABRIK*) == 0x8);
    // [RangeAttribute] Offset: 0x1273CC0
    // public System.Single pull
    // Size: 0x4
    // Offset: 0x18
    float pull;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x1273CD8
    // public System.Single pin
    // Size: 0x4
    // Offset: 0x1C
    float pin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32[] children
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<int> children;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // Get instance field reference: public RootMotion.FinalIK.FABRIK ik
    ::RootMotion::FinalIK::FABRIK*& dyn_ik();
    // Get instance field reference: public System.Single pull
    float& dyn_pull();
    // Get instance field reference: public System.Single pin
    float& dyn_pin();
    // Get instance field reference: public System.Int32[] children
    ::ArrayW<int>& dyn_children();
    // public System.Boolean IsValid(ref System.String message)
    // Offset: 0x220592C
    bool IsValid(ByRef<::StringW> message);
    // public System.Void Initiate()
    // Offset: 0x22059F4
    void Initiate();
    // public System.Void Stage1(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x2205A14
    void Stage1(::ArrayW<::RootMotion::FinalIK::FABRIKChain*> chain);
    // public System.Void Stage2(UnityEngine.Vector3 rootPosition, RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x2205DE4
    void Stage2(::UnityEngine::Vector3 rootPosition, ::ArrayW<::RootMotion::FinalIK::FABRIKChain*> chain);
    // private UnityEngine.Vector3 GetCentroid(RootMotion.FinalIK.FABRIKChain[] chain)
    // Offset: 0x2205AE8
    ::UnityEngine::Vector3 GetCentroid(::ArrayW<::RootMotion::FinalIK::FABRIKChain*> chain);
    // public System.Void .ctor()
    // Offset: 0x2205EDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FABRIKChain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::FABRIKChain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FABRIKChain*, creationType>()));
    }
  }; // RootMotion.FinalIK.FABRIKChain
  #pragma pack(pop)
  static check_size<sizeof(FABRIKChain), 32 + sizeof(::ArrayW<int>)> __RootMotion_FinalIK_FABRIKChainSizeCheck;
  static_assert(sizeof(FABRIKChain) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::FABRIKChain::*)(ByRef<::StringW>)>(&RootMotion::FinalIK::FABRIKChain::IsValid)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Initiate
// Il2CppName: Initiate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)()>(&RootMotion::FinalIK::FABRIKChain::Initiate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Initiate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Stage1
// Il2CppName: Stage1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)(::ArrayW<::RootMotion::FinalIK::FABRIKChain*>)>(&RootMotion::FinalIK::FABRIKChain::Stage1)> {
  static const MethodInfo* get() {
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Stage1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::Stage2
// Il2CppName: Stage2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::FABRIKChain::*)(::UnityEngine::Vector3, ::ArrayW<::RootMotion::FinalIK::FABRIKChain*>)>(&RootMotion::FinalIK::FABRIKChain::Stage2)> {
  static const MethodInfo* get() {
    static auto* rootPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "Stage2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rootPosition, chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::GetCentroid
// Il2CppName: GetCentroid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (RootMotion::FinalIK::FABRIKChain::*)(::ArrayW<::RootMotion::FinalIK::FABRIKChain*>)>(&RootMotion::FinalIK::FABRIKChain::GetCentroid)> {
  static const MethodInfo* get() {
    static auto* chain = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FABRIKChain"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::FABRIKChain*), "GetCentroid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chain});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::FABRIKChain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
