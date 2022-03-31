// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_Parameters
#include "HoudiniEngineUnity/HEU_Parameters.hpp"
// Including type: HoudiniEngineUnity.HAPI_ParmInfo
#include "HoudiniEngineUnity/HAPI_ParmInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0*, "HoudiniEngineUnity", "HEU_Parameters/<>c__DisplayClass35_0");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_Parameters/HoudiniEngineUnity.<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_Parameters::$$c__DisplayClass35_0 : public ::Il2CppObject {
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
    // public System.Int32 parentID
    // Size: 0x4
    // Offset: 0x10
    int parentID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: parentID and: $$9__0
    char __padding0[0x4] = {};
    // public System.Predicate`1<HoudiniEngineUnity.HAPI_ParmInfo> <>9__0
    // Size: 0x8
    // Offset: 0x18
    ::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 parentID
    int& dyn_parentID();
    // Get instance field reference: public System.Predicate`1<HoudiniEngineUnity.HAPI_ParmInfo> <>9__0
    ::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*& dyn_$$9__0();
    // System.Boolean <Initialize>b__0(HoudiniEngineUnity.HAPI_ParmInfo p)
    // Offset: 0x1AB8F24
    bool $Initialize$b__0(::HoudiniEngineUnity::HAPI_ParmInfo p);
    // public System.Void .ctor()
    // Offset: 0x1AB65E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_Parameters::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_Parameters::$$c__DisplayClass35_0*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_Parameters/HoudiniEngineUnity.<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(HEU_Parameters::$$c__DisplayClass35_0), 24 + sizeof(::System::Predicate_1<::HoudiniEngineUnity::HAPI_ParmInfo>*)> __HoudiniEngineUnity_HEU_Parameters_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(HEU_Parameters::$$c__DisplayClass35_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0::$Initialize$b__0
// Il2CppName: <Initialize>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0::*)(::HoudiniEngineUnity::HAPI_ParmInfo)>(&HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0::$Initialize$b__0)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_ParmInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0*), "<Initialize>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_Parameters::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
