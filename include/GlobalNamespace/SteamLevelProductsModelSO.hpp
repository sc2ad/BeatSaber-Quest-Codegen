// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamLevelProductsModelSO
  class SteamLevelProductsModelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductsModelSO*, "", "SteamLevelProductsModelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SteamLevelProductsModelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamLevelProductsModelSO : public ::GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: ::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData
    class LevelProductData;
    // Nested type: ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData
    class LevelPackProductData;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private SteamLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*> levelPackProductsData;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelProductData> _levelIdToProductData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>* levelIdToProductData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>* levelPackIdToProductData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SteamLevelProductsModelSO/LevelPackProductData[] _levelPackProductsData
    ::ArrayW<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>& dyn__levelPackProductsData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelProductData> _levelIdToProductData
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*>*& dyn__levelIdToProductData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.String,SteamLevelProductsModelSO/LevelPackProductData> _levelPackIdToProductData
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*& dyn__levelPackIdToProductData();
    // public SteamLevelProductsModelSO/LevelPackProductData[] get_levelPackProductsData()
    // Offset: 0x1335E84
    ::ArrayW<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*> get_levelPackProductsData();
    // public SteamLevelProductsModelSO/LevelProductData GetLevelProductData(System.String levelId)
    // Offset: 0x1335FE4
    ::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData* GetLevelProductData(::StringW levelId);
    // public SteamLevelProductsModelSO/LevelPackProductData GetLevelPackProductData(System.String levelPackId)
    // Offset: 0x1336064
    ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);
    // public System.Void .ctor()
    // Offset: 0x13360E4
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamLevelProductsModelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamLevelProductsModelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamLevelProductsModelSO*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1335E8C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // SteamLevelProductsModelSO
  #pragma pack(pop)
  static check_size<sizeof(SteamLevelProductsModelSO), 40 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*>*)> __GlobalNamespace_SteamLevelProductsModelSOSizeCheck;
  static_assert(sizeof(SteamLevelProductsModelSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData
// Il2CppName: get_levelPackProductsData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData*> (GlobalNamespace::SteamLevelProductsModelSO::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::get_levelPackProductsData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO*), "get_levelPackProductsData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::GetLevelProductData
// Il2CppName: GetLevelProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamLevelProductsModelSO::LevelProductData* (GlobalNamespace::SteamLevelProductsModelSO::*)(::StringW)>(&GlobalNamespace::SteamLevelProductsModelSO::GetLevelProductData)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO*), "GetLevelProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::GetLevelPackProductData
// Il2CppName: GetLevelPackProductData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamLevelProductsModelSO::LevelPackProductData* (GlobalNamespace::SteamLevelProductsModelSO::*)(::StringW)>(&GlobalNamespace::SteamLevelProductsModelSO::GetLevelPackProductData)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO*), "GetLevelPackProductData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamLevelProductsModelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamLevelProductsModelSO::*)()>(&GlobalNamespace::SteamLevelProductsModelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamLevelProductsModelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
