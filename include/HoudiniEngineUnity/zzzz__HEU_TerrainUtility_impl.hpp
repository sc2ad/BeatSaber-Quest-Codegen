#pragma once
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_TerrainUtility_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TreePrototypeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GenerateTerrainFromVolume
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>, int32_t, int32_t, ::UnityEngine::GameObject, ByRef<::UnityEngine::TerrainData>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Terrain>, ::StringW)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GenerateTerrainFromVolume)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x206a5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GenerateTerrainFromVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TerrainData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Terrain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.SetTerrainMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Terrain, ::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_TerrainUtility::SetTerrainMaterial)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x206af60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "SetTerrainMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetDefaultTerrainShaderName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainShaderName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x206b83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDefaultTerrainShaderName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetDefaultTerrainMaterialPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainMaterialPath)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x206b8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDefaultTerrainMaterialPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetNormalizedHeightmapFromPartWithMinMax
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, int32_t, int32_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, bool)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetNormalizedHeightmapFromPartWithMinMax)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x206b138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetNormalizedHeightmapFromPartWithMinMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetDetailMapFromPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetDetailMapFromPart)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x206bb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDetailMapFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetHeightmapFromPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, int32_t, int32_t, ByRef<::ArrayW<float_t>>, ByRef<float_t>, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightmapFromPart)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x206b97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightmapFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.ConvertHeightMapHoudiniToUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (*)(int32_t, int32_t, ::ArrayW<float_t>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightMapHoudiniToUnity)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x206b73c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ConvertHeightMapHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.ConvertHeightFieldToAlphaMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (*)(int32_t, int32_t, ::System::Collections::Generic::List_1<::ArrayW<float_t>>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightFieldToAlphaMap)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x206be78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ConvertHeightFieldToAlphaMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<float_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.AppendConvertedHeightFieldToAlphaMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (*)(int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, ::System::Collections::Generic::List_1<::ArrayW<float_t>>, ::ArrayW<float_t>, ::System::Collections::Generic::List_1<int32_t>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::AppendConvertedHeightFieldToAlphaMap)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x206c014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "AppendConvertedHeightFieldToAlphaMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetVolumePositionOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::UnityEngine::Vector3, float_t, float_t, int32_t, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetVolumePositionOffset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x206c2c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetVolumePositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetTreePrototypeInfosFromPart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo> (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetTreePrototypeInfosFromPart)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x206c388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTreePrototypeInfosFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.PopulateScatterTrees
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, int32_t, ByRef<::HoudiniEngineUnity::HEU_VolumeScatterTrees>, bool)>(&::HoudiniEngineUnity::HEU_TerrainUtility::PopulateScatterTrees)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x206c648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateScatterTrees",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_VolumeScatterTrees>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.ApplyScatterTrees
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData, ::HoudiniEngineUnity::HEU_VolumeScatterTrees, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::ApplyScatterTrees)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x206d2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ApplyScatterTrees",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.PopulateDetailPrototype
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ByRef<::HoudiniEngineUnity::HEU_DetailPrototype>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailPrototype)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x206d7bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateDetailPrototype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_DetailPrototype>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.PopulateDetailProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ByRef<::HoudiniEngineUnity::HEU_DetailProperties>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailProperties)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x206dbac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateDetailProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_DetailProperties>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.ApplyDetailLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Terrain, ::UnityEngine::TerrainData, ::HoudiniEngineUnity::HEU_DetailProperties, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>, ::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::ApplyDetailLayers)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x206dec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ApplyDetailLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetTerrainLayerIndexByName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<::UnityEngine::TerrainLayer>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndexByName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x206e394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainLayerIndexByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TerrainLayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetTerrainLayerIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::TerrainLayer, ::ArrayW<::UnityEngine::TerrainLayer>)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x206e4f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainLayerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TerrainLayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.VolumeLayerHasAttributes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::VolumeLayerHasAttributes)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x206e5b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "VolumeLayerHasAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetHeightfieldLayerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HFLayerType (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightfieldLayerType)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x206e908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightfieldLayerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetHeightRangeFromHeightfield
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightRangeFromHeightfield)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x206bb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightRangeFromHeightfield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.GetTerrainDataExportPathFromHeightfieldAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainDataExportPathFromHeightfieldAttribute)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x206ea50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainDataExportPathFromHeightfieldAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_TerrainUtility.ResampleData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t> (*)(::ArrayW<float_t>, int32_t, int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_TerrainUtility::ResampleData)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2059280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ResampleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
 bool ::HoudiniEngineUnity::HEU_TerrainUtility::GenerateTerrainFromVolume(::HoudiniEngineUnity::HEU_SessionBase session, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo, int32_t geoID, int32_t partID, ::UnityEngine::GameObject gameObject, ByRef<::UnityEngine::TerrainData> terrainData, ByRef<::UnityEngine::Vector3> volumePositionOffset, ByRef<::UnityEngine::Terrain> terrain, ::StringW bakedMaterialPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GenerateTerrainFromVolume",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::TerrainData>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Terrain>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, volumeInfo, geoID, partID, gameObject, terrainData, volumePositionOffset, terrain, bakedMaterialPath);
}
/// @param bakedMaterialPath: ::StringW (default: u"")
 void ::HoudiniEngineUnity::HEU_TerrainUtility::SetTerrainMaterial(::UnityEngine::Terrain terrain, ::StringW specifiedMaterialName, ::StringW bakedMaterialPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "SetTerrainMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrain, specifiedMaterialName, bakedMaterialPath);
}
 ::StringW ::HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainShaderName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDefaultTerrainShaderName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::StringW ::HoudiniEngineUnity::HEU_TerrainUtility::GetDefaultTerrainMaterialPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDefaultTerrainMaterialPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
 ::ArrayW<float_t> ::HoudiniEngineUnity::HEU_TerrainUtility::GetNormalizedHeightmapFromPartWithMinMax(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, int32_t heightMapWidth, int32_t heightMapHeight, ByRef<float_t> minHeight, ByRef<float_t> maxHeight, ByRef<float_t> heightRange, bool bUseHeightRangeOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetNormalizedHeightmapFromPartWithMinMax",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(nullptr, ___internal_method, session, geoID, partID, heightMapWidth, heightMapHeight, minHeight, maxHeight, heightRange, bUseHeightRangeOverride);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_TerrainUtility::GetDetailMapFromPart(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<int32_t> detailResolution)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetDetailMapFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(nullptr, ___internal_method, session, geoID, partID, detailResolution);
}
 bool ::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightmapFromPart(::HoudiniEngineUnity::HEU_SessionBase session, int32_t xLength, int32_t yLength, int32_t geoID, int32_t partID, ByRef<::ArrayW<float_t>> heightValues, ByRef<float_t> minHeight, ByRef<float_t> maxHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightmapFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, xLength, yLength, geoID, partID, heightValues, minHeight, maxHeight);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightMapHoudiniToUnity(int32_t heightMapWidth, int32_t heightMapHeight, ::ArrayW<float_t> heightValues)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ConvertHeightMapHoudiniToUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(nullptr, ___internal_method, heightMapWidth, heightMapHeight, heightValues);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_TerrainUtility::ConvertHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, ::System::Collections::Generic::List_1<::ArrayW<float_t>> heightFields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ConvertHeightFieldToAlphaMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<float_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(nullptr, ___internal_method, heightMapWidth, heightMapHeight, heightFields);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_TerrainUtility::AppendConvertedHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ existingAlphaMaps, ::System::Collections::Generic::List_1<::ArrayW<float_t>> heightFields, ::ArrayW<float_t> strengths, ::System::Collections::Generic::List_1<int32_t> alphaMapIndices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "AppendConvertedHeightFieldToAlphaMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<float_t>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(nullptr, ___internal_method, heightMapWidth, heightMapHeight, existingAlphaMaps, heightFields, strengths, alphaMapIndices);
}
 ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_TerrainUtility::GetVolumePositionOffset(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::UnityEngine::Vector3 volumePosition, float_t terrainSizeX, float_t heightMapSize, int32_t mapWidth, int32_t mapHeight, float_t minHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetVolumePositionOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, session, geoID, partID, volumePosition, terrainSizeX, heightMapSize, mapWidth, mapHeight, minHeight);
}
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo> ::HoudiniEngineUnity::HEU_TerrainUtility::GetTreePrototypeInfosFromPart(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTreePrototypeInfosFromPart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TreePrototypeInfo>, false>(nullptr, ___internal_method, session, geoID, partID);
}
 void ::HoudiniEngineUnity::HEU_TerrainUtility::PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, int32_t pointCount, ByRef<::HoudiniEngineUnity::HEU_VolumeScatterTrees> scatterTrees, bool throwWarningIfNoTileAttribute)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateScatterTrees",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_VolumeScatterTrees>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, pointCount, scatterTrees, throwWarningIfNoTileAttribute);
}
 void ::HoudiniEngineUnity::HEU_TerrainUtility::ApplyScatterTrees(::UnityEngine::TerrainData terrainData, ::HoudiniEngineUnity::HEU_VolumeScatterTrees scatterTrees, int32_t tileIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ApplyScatterTrees",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeScatterTrees>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData, scatterTrees, tileIndex);
}
 void ::HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<::HoudiniEngineUnity::HEU_DetailPrototype> detailPrototype)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateDetailPrototype",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_DetailPrototype>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, detailPrototype);
}
 void ::HoudiniEngineUnity::HEU_TerrainUtility::PopulateDetailProperties(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<::HoudiniEngineUnity::HEU_DetailProperties> detailProperties)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "PopulateDetailProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HEU_DetailProperties>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, geoID, partID, detailProperties);
}
 void ::HoudiniEngineUnity::HEU_TerrainUtility::ApplyDetailLayers(::UnityEngine::Terrain terrain, ::UnityEngine::TerrainData terrainData, ::HoudiniEngineUnity::HEU_DetailProperties detailProperties, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype> heuDetailPrototypes, ::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> convertedDetailMaps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ApplyDetailLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrain, terrainData, detailProperties, heuDetailPrototypes, convertedDetailMaps);
}
 int32_t ::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndexByName(::StringW layerName, ::ArrayW<::UnityEngine::TerrainLayer> terrainLayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainLayerIndexByName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TerrainLayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, layerName, terrainLayers);
}
 int32_t ::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainLayerIndex(::UnityEngine::TerrainLayer layer, ::ArrayW<::UnityEngine::TerrainLayer> terrainLayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainLayerIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::TerrainLayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, layer, terrainLayers);
}
 bool ::HoudiniEngineUnity::HEU_TerrainUtility::VolumeLayerHasAttributes(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "VolumeLayerHasAttributes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, geoID, partID);
}
 ::HoudiniEngineUnity::HFLayerType ::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightfieldLayerType(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW volumeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightfieldLayerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HFLayerType, false>(nullptr, ___internal_method, session, geoID, partID, volumeName);
}
 float_t ::HoudiniEngineUnity::HEU_TerrainUtility::GetHeightRangeFromHeightfield(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetHeightRangeFromHeightfield",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, session, geoID, partID);
}
 ::StringW ::HoudiniEngineUnity::HEU_TerrainUtility::GetTerrainDataExportPathFromHeightfieldAttribute(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "GetTerrainDataExportPathFromHeightfieldAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, session, geoID, partID);
}
 ::ArrayW<float_t> ::HoudiniEngineUnity::HEU_TerrainUtility::ResampleData(::ArrayW<float_t> data, int32_t oldWidth, int32_t oldHeight, int32_t newWidth, int32_t newHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_TerrainUtility>::get(),
                            "ResampleData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>, false>(nullptr, ___internal_method, data, oldWidth, oldHeight, newWidth, newHeight);
}
} // end anonymous namespace
