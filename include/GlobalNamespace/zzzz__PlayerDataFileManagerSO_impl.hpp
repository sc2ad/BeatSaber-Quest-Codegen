#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataFileManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesListSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentTypeSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.Save
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::ISaveData, GlobalNamespace::PlayerData)>(&GlobalNamespace::PlayerDataFileManagerSO::Save)> {
  constexpr static std::size_t size = 0x110c;
  constexpr static std::size_t addrs = 0x2222584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.Load
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::ISaveData, GlobalNamespace::BeatmapCharacteristicCollection)>(&GlobalNamespace::PlayerDataFileManagerSO::Load)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22239ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.LoadFromJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData (GlobalNamespace::PlayerDataFileManagerSO::*)(::StringW, GlobalNamespace::BeatmapCharacteristicCollection)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2223af0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.LoadFromCurrentVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::PlayerSaveData, GlobalNamespace::BeatmapCharacteristicCollection)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion)> {
  constexpr static std::size_t size = 0x1100;
  constexpr static std::size_t addrs = 0x22248f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromCurrentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.LoadFromVersionV1_0_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData (GlobalNamespace::PlayerDataFileManagerSO::*)(GlobalNamespace::PlayerSaveDataV1_0_1, GlobalNamespace::BeatmapCharacteristicCollection)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1)> {
  constexpr static std::size_t size = 0xb44;
  constexpr static std::size_t addrs = 0x2223db0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromVersionV1_0_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSaveDataV1_0_1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.CreateDefaultPlayerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PlayerData (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2223cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "CreateDefaultPlayerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.GetLevelIdFromV_1_0_1LevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, GlobalNamespace::BeatmapCharacteristicSO)>(&GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2226700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetLevelIdFromV_1_0_1LevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.GetBeatmapCharacteristicFromV_1_0_1LevelId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapCharacteristicSO (*)(GlobalNamespace::BeatmapCharacteristicCollection, ::StringW)>(&GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x2226360;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetBeatmapCharacteristicFromV_1_0_1LevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.CreateDefaultOverrideEnvironmentSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OverrideEnvironmentSettings (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2225d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "CreateDefaultOverrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.GetEnvironmentInfoBySerializedName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::EnvironmentInfoSO (GlobalNamespace::PlayerDataFileManagerSO::*)(::StringW)>(&GlobalNamespace::PlayerDataFileManagerSO::GetEnvironmentInfoBySerializedName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22267a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetEnvironmentInfoBySerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO.LoadCorrectedSongPackMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PlayerDataFileManagerSO::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2225dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadCorrectedSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PlayerDataFileManagerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerDataFileManagerSO::*)()>(&GlobalNamespace::PlayerDataFileManagerSO::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22267bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__defaultColorSchemes(GlobalNamespace::ColorSchemesListSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSchemesListSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSchemesListSO>(value));
}
constexpr GlobalNamespace::ColorSchemesListSO GlobalNamespace::PlayerDataFileManagerSO::__get__defaultColorSchemes() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSchemesListSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__allEnvironmentInfos(GlobalNamespace::EnvironmentsListSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentsListSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentsListSO>(value));
}
constexpr GlobalNamespace::EnvironmentsListSO GlobalNamespace::PlayerDataFileManagerSO::__get__allEnvironmentInfos() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentsListSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__normalEnvironmentType(GlobalNamespace::EnvironmentTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentTypeSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentTypeSO>(value));
}
constexpr GlobalNamespace::EnvironmentTypeSO GlobalNamespace::PlayerDataFileManagerSO::__get__normalEnvironmentType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentTypeSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__a360DegreesEnvironmentType(GlobalNamespace::EnvironmentTypeSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::EnvironmentTypeSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::EnvironmentTypeSO>(value));
}
constexpr GlobalNamespace::EnvironmentTypeSO GlobalNamespace::PlayerDataFileManagerSO::__get__a360DegreesEnvironmentType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::EnvironmentTypeSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__defaultLastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCharacteristicSO>(value));
}
constexpr GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::PlayerDataFileManagerSO::__get__defaultLastSelectedBeatmapCharacteristic() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCharacteristicSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__buildInSongPackSerializedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PlayerDataFileManagerSO::__get__buildInSongPackSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::PlayerDataFileManagerSO::__set__allSongPackSerializedName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::PlayerDataFileManagerSO::__get__allSongPackSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PlayerDataFileManagerSO::__set__lastVersionWithoutSavedCustomColorSchemeBoostColors(System::Version value)  {
::cordl_internals::setStaticField<System::Version, "_lastVersionWithoutSavedCustomColorSchemeBoostColors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>(std::forward<System::Version>(value));
}
 System::Version GlobalNamespace::PlayerDataFileManagerSO::__get__lastVersionWithoutSavedCustomColorSchemeBoostColors()  {
return ::cordl_internals::getStaticField<System::Version, "_lastVersionWithoutSavedCustomColorSchemeBoostColors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>();
}
 void GlobalNamespace::PlayerDataFileManagerSO::__set__eulaUpdateVersion(System::Version value)  {
::cordl_internals::setStaticField<System::Version, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>(std::forward<System::Version>(value));
}
 System::Version GlobalNamespace::PlayerDataFileManagerSO::__get__eulaUpdateVersion()  {
return ::cordl_internals::getStaticField<System::Version, "_eulaUpdateVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>();
}
 void GlobalNamespace::PlayerDataFileManagerSO::__set__lastVersionWithoutArcsOptions(System::Version value)  {
::cordl_internals::setStaticField<System::Version, "_lastVersionWithoutArcsOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>(std::forward<System::Version>(value));
}
 System::Version GlobalNamespace::PlayerDataFileManagerSO::__get__lastVersionWithoutArcsOptions()  {
return ::cordl_internals::getStaticField<System::Version, "_lastVersionWithoutArcsOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get>();
}
 void GlobalNamespace::PlayerDataFileManagerSO::Save(GlobalNamespace::ISaveData saveData, GlobalNamespace::PlayerData playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "Save",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saveData, playerData);
}
 GlobalNamespace::PlayerData GlobalNamespace::PlayerDataFileManagerSO::Load(GlobalNamespace::ISaveData saveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "Load",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerData, false>(const_cast<void*>(instance), ___internal_method, saveData, beatmapCharacteristicCollection);
}
 GlobalNamespace::PlayerData GlobalNamespace::PlayerDataFileManagerSO::LoadFromJSONString(::StringW jsonString, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerData, false>(const_cast<void*>(instance), ___internal_method, jsonString, beatmapCharacteristicCollection);
}
 GlobalNamespace::PlayerData GlobalNamespace::PlayerDataFileManagerSO::LoadFromCurrentVersion(GlobalNamespace::PlayerSaveData playerSaveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromCurrentVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSaveData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerData, false>(const_cast<void*>(instance), ___internal_method, playerSaveData, beatmapCharacteristicCollection);
}
 GlobalNamespace::PlayerData GlobalNamespace::PlayerDataFileManagerSO::LoadFromVersionV1_0_1(GlobalNamespace::PlayerSaveDataV1_0_1 playerDataModelSaveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadFromVersionV1_0_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::PlayerSaveDataV1_0_1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerData, false>(const_cast<void*>(instance), ___internal_method, playerDataModelSaveData, beatmapCharacteristicCollection);
}
 GlobalNamespace::PlayerData GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultPlayerData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "CreateDefaultPlayerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::PlayerData, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::PlayerDataFileManagerSO::GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetLevelIdFromV_1_0_1LevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicSO>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, oldLevelId, beatmapCharacteristic);
}
 GlobalNamespace::BeatmapCharacteristicSO GlobalNamespace::PlayerDataFileManagerSO::GetBeatmapCharacteristicFromV_1_0_1LevelId(GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, ::StringW levelId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetBeatmapCharacteristicFromV_1_0_1LevelId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCharacteristicCollection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapCharacteristicSO, false>(nullptr, ___internal_method, beatmapCharacteristicCollection, levelId);
}
 GlobalNamespace::OverrideEnvironmentSettings GlobalNamespace::PlayerDataFileManagerSO::CreateDefaultOverrideEnvironmentSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "CreateDefaultOverrideEnvironmentSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::OverrideEnvironmentSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::EnvironmentInfoSO GlobalNamespace::PlayerDataFileManagerSO::GetEnvironmentInfoBySerializedName(::StringW environmentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "GetEnvironmentInfoBySerializedName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::EnvironmentInfoSO, false>(const_cast<void*>(instance), ___internal_method, environmentName);
}
 ::StringW GlobalNamespace::PlayerDataFileManagerSO::LoadCorrectedSongPackMask(::ArrayW<uint8_t> songMaskPackBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            "LoadCorrectedSongPackMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, songMaskPackBytes);
}
// Ctor Parameters []
 GlobalNamespace::PlayerDataFileManagerSO::PlayerDataFileManagerSO()  : GlobalNamespace::PersistentScriptableObject(THROW_UNLESS(::il2cpp_utils::New<PlayerDataFileManagerSO>())) {}
 void GlobalNamespace::PlayerDataFileManagerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PlayerDataFileManagerSO>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
