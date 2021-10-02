// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusLevelProductsModelSO/LevelPackProductData
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusLevelProductsModelSO::LevelPackProductData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _sku
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* sku;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _levelPackId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* levelPackId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private OculusLevelProductsModelSO/LevelProductData[] _levelProductsData
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*> levelProductsData;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>) == 0x8);
    public:
    // Get instance field reference: private System.String _sku
    ::Il2CppString*& dyn__sku();
    // Get instance field reference: private System.String _levelPackId
    ::Il2CppString*& dyn__levelPackId();
    // Get instance field reference: private OculusLevelProductsModelSO/LevelProductData[] _levelProductsData
    ::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>& dyn__levelProductsData();
    // public System.String get_sku()
    // Offset: 0x1363BEC
    ::Il2CppString* get_sku();
    // public System.String get_levelPackId()
    // Offset: 0x1363BF4
    ::Il2CppString* get_levelPackId();
    // public OculusLevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0x1363BFC
    ::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*> get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0x1363C04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusLevelProductsModelSO::LevelPackProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusLevelProductsModelSO::LevelPackProductData*, creationType>()));
    }
  }; // OculusLevelProductsModelSO/LevelPackProductData
  #pragma pack(pop)
  static check_size<sizeof(OculusLevelProductsModelSO::LevelPackProductData), 32 + sizeof(::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*>)> __GlobalNamespace_OculusLevelProductsModelSO_LevelPackProductDataSizeCheck;
  static_assert(sizeof(OculusLevelProductsModelSO::LevelPackProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*, "", "OculusLevelProductsModelSO/LevelPackProductData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_sku
// Il2CppName: get_sku
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_sku)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_sku", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelPackId
// Il2CppName: get_levelPackId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelPackId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_levelPackId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelProductsData
// Il2CppName: get_levelProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*> (GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::*)()>(&GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::get_levelProductsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData*), "get_levelProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusLevelProductsModelSO::LevelPackProductData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
