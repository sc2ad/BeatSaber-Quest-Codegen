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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_GeneratedOutput
  class HEU_GeneratedOutput;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_LoadBufferBase
  class HEU_LoadBufferBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_LoadBufferBase);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_LoadBufferBase*, "HoudiniEngineUnity", "HEU_LoadBufferBase");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_LoadBufferBase
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_LoadBufferBase : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 _id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: id and: name
    char __padding0[0x4] = {};
    // public System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean _bInstanced
    // Size: 0x1
    // Offset: 0x20
    bool bInstanced;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _bInstancer
    // Size: 0x1
    // Offset: 0x21
    bool bInstancer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bInstancer and: generatedOutput
    char __padding3[0x6] = {};
    // public HoudiniEngineUnity.HEU_GeneratedOutput _generatedOutput
    // Size: 0x8
    // Offset: 0x28
    ::HoudiniEngineUnity::HEU_GeneratedOutput* generatedOutput;
    // Field size check
    static_assert(sizeof(::HoudiniEngineUnity::HEU_GeneratedOutput*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 _id
    [[deprecated("Use field access instead!")]] int& dyn__id();
    // Get instance field reference: public System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: public System.Boolean _bInstanced
    [[deprecated("Use field access instead!")]] bool& dyn__bInstanced();
    // Get instance field reference: public System.Boolean _bInstancer
    [[deprecated("Use field access instead!")]] bool& dyn__bInstancer();
    // Get instance field reference: public HoudiniEngineUnity.HEU_GeneratedOutput _generatedOutput
    [[deprecated("Use field access instead!")]] ::HoudiniEngineUnity::HEU_GeneratedOutput*& dyn__generatedOutput();
    // public System.Void .ctor()
    // Offset: 0x18A8DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_LoadBufferBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_LoadBufferBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_LoadBufferBase*, creationType>()));
    }
    // public System.Void InitializeBuffer(System.Int32 id, System.String name, System.Boolean bInstanced, System.Boolean bInstancer)
    // Offset: 0x18A8DCC
    void InitializeBuffer(int id, ::StringW name, bool bInstanced, bool bInstancer);
  }; // HoudiniEngineUnity.HEU_LoadBufferBase
  #pragma pack(pop)
  static check_size<sizeof(HEU_LoadBufferBase), 40 + sizeof(::HoudiniEngineUnity::HEU_GeneratedOutput*)> __HoudiniEngineUnity_HEU_LoadBufferBaseSizeCheck;
  static_assert(sizeof(HEU_LoadBufferBase) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_LoadBufferBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer
// Il2CppName: InitializeBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_LoadBufferBase::*)(int, ::StringW, bool, bool)>(&HoudiniEngineUnity::HEU_LoadBufferBase::InitializeBuffer)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bInstanced = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* bInstancer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_LoadBufferBase*), "InitializeBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, name, bInstanced, bInstancer});
  }
};
