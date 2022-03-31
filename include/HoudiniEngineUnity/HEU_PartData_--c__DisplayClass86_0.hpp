// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_PartData
#include "HoudiniEngineUnity/HEU_PartData.hpp"
// Including type: HoudiniEngineUnity.TransformData
#include "HoudiniEngineUnity/TransformData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0*, "HoudiniEngineUnity", "HEU_PartData/<>c__DisplayClass86_0");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_PartData/HoudiniEngineUnity.<>c__DisplayClass86_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class HEU_PartData::$$c__DisplayClass86_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.List`1<HoudiniEngineUnity.TransformData> previousTransformValues
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>* previousTransformValues;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*
    constexpr operator ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*() const noexcept {
      return previousTransformValues;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<HoudiniEngineUnity.TransformData> previousTransformValues
    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*& dyn_previousTransformValues();
    // System.Void <CopyChildGameObjects>b__0(UnityEngine.Transform trans)
    // Offset: 0x1AC0D70
    void $CopyChildGameObjects$b__0(::UnityEngine::Transform* trans);
    // public System.Void .ctor()
    // Offset: 0x1ABF134
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_PartData::$$c__DisplayClass86_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_PartData::$$c__DisplayClass86_0*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_PartData/HoudiniEngineUnity.<>c__DisplayClass86_0
  #pragma pack(pop)
  static check_size<sizeof(HEU_PartData::$$c__DisplayClass86_0), 16 + sizeof(::System::Collections::Generic::List_1<::HoudiniEngineUnity::TransformData>*)> __HoudiniEngineUnity_HEU_PartData_$$c__DisplayClass86_0SizeCheck;
  static_assert(sizeof(HEU_PartData::$$c__DisplayClass86_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0::$CopyChildGameObjects$b__0
// Il2CppName: <CopyChildGameObjects>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0::*)(::UnityEngine::Transform*)>(&HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0::$CopyChildGameObjects$b__0)> {
  static const MethodInfo* get() {
    static auto* trans = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0*), "<CopyChildGameObjects>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trans});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_PartData::$$c__DisplayClass86_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
