// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/QuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x10
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: order and: packId
    char __padding0[0x4] = {};
    // public System.String packId
    // Size: 0x8
    // Offset: 0x18
    ::StringW packId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // Get instance field reference: public System.String packId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_packId();
    // public System.Void .ctor()
    // Offset: 0x141ED1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*, creationType>()));
    }
  }; // QuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack), 24 + sizeof(::StringW)> __GlobalNamespace_QuickPlaySetupData_QuickPlaySongPacksOverride_PredefinedPackSizeCheck;
  static_assert(sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
