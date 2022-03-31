// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberManager::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberManager::InitData*, "", "SaberManager/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SaberManager/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberManager::InitData : public ::Il2CppObject {
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
    // public readonly System.Boolean oneSaberMode
    // Size: 0x1
    // Offset: 0x10
    bool oneSaberMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: oneSaberMode and: oneSaberType
    char __padding0[0x3] = {};
    // public readonly SaberType oneSaberType
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::SaberType oneSaberType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberType) == 0x4);
    public:
    // Get instance field reference: public readonly System.Boolean oneSaberMode
    bool& dyn_oneSaberMode();
    // Get instance field reference: public readonly SaberType oneSaberType
    ::GlobalNamespace::SaberType& dyn_oneSaberType();
    // public System.Void .ctor(System.Boolean oneSaberMode, SaberType oneSaberType)
    // Offset: 0x141CD5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberManager::InitData* New_ctor(bool oneSaberMode, ::GlobalNamespace::SaberType oneSaberType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberManager::InitData*, creationType>(oneSaberMode, oneSaberType)));
    }
  }; // SaberManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(SaberManager::InitData), 20 + sizeof(::GlobalNamespace::SaberType)> __GlobalNamespace_SaberManager_InitDataSizeCheck;
  static_assert(sizeof(SaberManager::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberManager::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
