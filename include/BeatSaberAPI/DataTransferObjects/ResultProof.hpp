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
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: ResultProof
  class ResultProof;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::ResultProof);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ResultProof*, "BeatSaberAPI.DataTransferObjects", "ResultProof");
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.ResultProof
  // [TokenAttribute] Offset: FFFFFFFF
  class ResultProof : public ::Il2CppObject {
    public:
    public:
    // private System.String <proof>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW proof;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return proof;
    }
    // Get instance field reference: private System.String <proof>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$proof$k__BackingField();
    // public System.String get_proof()
    // Offset: 0x13A2B08
    ::StringW get_proof();
    // public System.Void set_proof(System.String value)
    // Offset: 0x13A2B10
    void set_proof(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x13A2B18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultProof* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatSaberAPI::DataTransferObjects::ResultProof::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultProof*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.ResultProof
  #pragma pack(pop)
  static check_size<sizeof(ResultProof), 16 + sizeof(::StringW)> __BeatSaberAPI_DataTransferObjects_ResultProofSizeCheck;
  static_assert(sizeof(ResultProof) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::get_proof
// Il2CppName: get_proof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (BeatSaberAPI::DataTransferObjects::ResultProof::*)()>(&BeatSaberAPI::DataTransferObjects::ResultProof::get_proof)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatSaberAPI::DataTransferObjects::ResultProof*), "get_proof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::set_proof
// Il2CppName: set_proof
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatSaberAPI::DataTransferObjects::ResultProof::*)(::StringW)>(&BeatSaberAPI::DataTransferObjects::ResultProof::set_proof)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BeatSaberAPI::DataTransferObjects::ResultProof*), "set_proof", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: BeatSaberAPI::DataTransferObjects::ResultProof::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
