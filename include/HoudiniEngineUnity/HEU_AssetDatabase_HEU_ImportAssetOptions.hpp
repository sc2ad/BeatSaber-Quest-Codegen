// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.HEU_AssetDatabase
#include "HoudiniEngineUnity/HEU_AssetDatabase.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions, "HoudiniEngineUnity", "HEU_AssetDatabase/HEU_ImportAssetOptions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions
  // [TokenAttribute] Offset: FFFFFFFF
  struct HEU_AssetDatabase::HEU_ImportAssetOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HEU_ImportAssetOptions
    constexpr HEU_ImportAssetOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions Default
    static constexpr const int Default = 0;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions Default
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_Default();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions Default
    static void _set_Default(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUpdate
    static constexpr const int ForceUpdate = 1;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUpdate
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_ForceUpdate();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUpdate
    static void _set_ForceUpdate(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceSynchronousImport
    static constexpr const int ForceSynchronousImport = 8;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceSynchronousImport
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_ForceSynchronousImport();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceSynchronousImport
    static void _set_ForceSynchronousImport(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ImportRecursive
    static constexpr const int ImportRecursive = 256;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ImportRecursive
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_ImportRecursive();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ImportRecursive
    static void _set_ImportRecursive(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions DontDownloadFromCacheServer
    static constexpr const int DontDownloadFromCacheServer = 8192;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions DontDownloadFromCacheServer
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_DontDownloadFromCacheServer();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions DontDownloadFromCacheServer
    static void _set_DontDownloadFromCacheServer(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // static field const value: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUncompressedImport
    static constexpr const int ForceUncompressedImport = 16384;
    // Get static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUncompressedImport
    static ::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions _get_ForceUncompressedImport();
    // Set static field: static public HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions ForceUncompressedImport
    static void _set_ForceUncompressedImport(::HoudiniEngineUnity::HEU_AssetDatabase::HEU_ImportAssetOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // HoudiniEngineUnity.HEU_AssetDatabase/HoudiniEngineUnity.HEU_ImportAssetOptions
  #pragma pack(pop)
  static check_size<sizeof(HEU_AssetDatabase::HEU_ImportAssetOptions), 0 + sizeof(int)> __HoudiniEngineUnity_HEU_AssetDatabase_HEU_ImportAssetOptionsSizeCheck;
  static_assert(sizeof(HEU_AssetDatabase::HEU_ImportAssetOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
