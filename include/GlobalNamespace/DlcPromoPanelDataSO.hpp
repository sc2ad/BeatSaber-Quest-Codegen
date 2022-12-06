// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DlcPromoPanelDataSO
  class DlcPromoPanelDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO*, "", "DlcPromoPanelDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoPanelDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class DlcPromoPanelDataSO : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo
    class MusicPackPromoInfo;
    public:
    // private System.Int32 _defaultMusicPackPromoIndex
    // Size: 0x4
    // Offset: 0x18
    int defaultMusicPackPromoIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: defaultMusicPackPromoIndex and: musicPackPromoInfos
    char __padding0[0x4] = {};
    // private DlcPromoPanelDataSO/MusicPackPromoInfo[] _musicPackPromoInfos
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*> musicPackPromoInfos;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*>) == 0x8);
    // private System.Int32 _cutOffTest
    // Size: 0x4
    // Offset: 0x28
    int cutOffTest;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _minNumberOfNotOwnedPacks
    // Size: 0x4
    // Offset: 0x2C
    int minNumberOfNotOwnedPacks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Int32 _defaultMusicPackPromoIndex
    [[deprecated("Use field access instead!")]] int& dyn__defaultMusicPackPromoIndex();
    // Get instance field reference: private DlcPromoPanelDataSO/MusicPackPromoInfo[] _musicPackPromoInfos
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*>& dyn__musicPackPromoInfos();
    // Get instance field reference: private System.Int32 _cutOffTest
    [[deprecated("Use field access instead!")]] int& dyn__cutOffTest();
    // Get instance field reference: private System.Int32 _minNumberOfNotOwnedPacks
    [[deprecated("Use field access instead!")]] int& dyn__minNumberOfNotOwnedPacks();
    // public System.Int32 get_cutOffTest()
    // Offset: 0x143CF64
    int get_cutOffTest();
    // public System.Int32 get_minNumberOfNotOwnedPacks()
    // Offset: 0x143CF6C
    int get_minNumberOfNotOwnedPacks();
    // public DlcPromoPanelDataSO/MusicPackPromoInfo[] get_musicPackPromoInfos()
    // Offset: 0x143CF74
    ::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*> get_musicPackPromoInfos();
    // public DlcPromoPanelDataSO/MusicPackPromoInfo get_defaultMusicPackPromo()
    // Offset: 0x143CF7C
    ::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo* get_defaultMusicPackPromo();
    // public System.Void .ctor()
    // Offset: 0x143CFBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoPanelDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DlcPromoPanelDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoPanelDataSO*, creationType>()));
    }
  }; // DlcPromoPanelDataSO
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoPanelDataSO), 44 + sizeof(int)> __GlobalNamespace_DlcPromoPanelDataSOSizeCheck;
  static_assert(sizeof(DlcPromoPanelDataSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::get_cutOffTest
// Il2CppName: get_cutOffTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DlcPromoPanelDataSO::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::get_cutOffTest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO*), "get_cutOffTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::get_minNumberOfNotOwnedPacks
// Il2CppName: get_minNumberOfNotOwnedPacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::DlcPromoPanelDataSO::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::get_minNumberOfNotOwnedPacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO*), "get_minNumberOfNotOwnedPacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::get_musicPackPromoInfos
// Il2CppName: get_musicPackPromoInfos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo*> (GlobalNamespace::DlcPromoPanelDataSO::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::get_musicPackPromoInfos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO*), "get_musicPackPromoInfos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::get_defaultMusicPackPromo
// Il2CppName: get_defaultMusicPackPromo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DlcPromoPanelDataSO::MusicPackPromoInfo* (GlobalNamespace::DlcPromoPanelDataSO::*)()>(&GlobalNamespace::DlcPromoPanelDataSO::get_defaultMusicPackPromo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoPanelDataSO*), "get_defaultMusicPackPromo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoPanelDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
