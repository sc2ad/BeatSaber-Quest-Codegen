#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__TreePrototype_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__DetailPrototype_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType::UnityEngine__TerrainData__BoundaryValueType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UnityEngine__TerrainData__BoundaryValueType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UnityEngine__TerrainData__BoundaryValueType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxHeightmapRes{0};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MinDetailResPerPatch{1};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxDetailResPerPatch{2};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxDetailPatchCount{3};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxDetailsPerRes{4};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MinAlphamapRes{5};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxAlphamapRes{6};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MinBaseMapRes{7};
constexpr UnityEngine::UnityEngine__TerrainData__BoundaryValueType  UnityEngine::UnityEngine__TerrainData__BoundaryValueType::MaxBaseMapRes{8};
//  Writing Method size for method: UnityEngine::TerrainData.GetBoundaryValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(UnityEngine::UnityEngine__TerrainData__BoundaryValueType)>(&UnityEngine::TerrainData::GetBoundaryValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba5678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetBoundaryValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__TerrainData__BoundaryValueType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ba56b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::TerrainData)>(&UnityEngine::TerrainData::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba5758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TerrainData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_heightmapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_heightmapResolution)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba5794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_heightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_heightmapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t)>(&UnityEngine::TerrainData::set_heightmapResolution)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2ba580c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_heightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_internalHeightmapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_internalHeightmapResolution)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba57d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_internalHeightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_internalHeightmapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t)>(&UnityEngine::TerrainData::set_internalHeightmapResolution)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba59b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_internalHeightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_size
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_size)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2ba59f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_size
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(UnityEngine::Vector3)>(&UnityEngine::TerrainData::set_size)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ba5a98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.GetHeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::TerrainData::GetHeights)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2ba5b30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_GetHeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::TerrainData::Internal_GetHeights)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ba5c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.SetHeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::SetHeights)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x2ba5cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_SetHeights
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::Internal_SetHeights)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ba5fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.SetDetailResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t)>(&UnityEngine::TerrainData::SetDetailResolution)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2ba6054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetDetailResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_SetDetailResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t)>(&UnityEngine::TerrainData::Internal_SetDetailResolution)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ba648c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetDetailResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_detailResolutionPerPatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_detailResolutionPerPatch)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba64e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_detailResolutionPerPatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.RefreshPrototypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::RefreshPrototypes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba651c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "RefreshPrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_detailPrototypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(::ArrayW<UnityEngine::DetailPrototype>)>(&UnityEngine::TerrainData::set_detailPrototypes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba6558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_detailPrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::DetailPrototype>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.SetDetailLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::SetDetailLayer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ba659c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetDetailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_SetDetailLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::Internal_SetDetailLayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2ba6648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetDetailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_treeInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TreeInstance> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_treeInstances)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba66cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_treeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_GetTreeInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TreeInstance> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::Internal_GetTreeInstances)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.SetTreeInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(::ArrayW<UnityEngine::TreeInstance>, bool)>(&UnityEngine::TerrainData::SetTreeInstances)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2ba6744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TreeInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_treePrototypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TreePrototype> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_treePrototypes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_treePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_treePrototypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(::ArrayW<UnityEngine::TreePrototype>)>(&UnityEngine::TerrainData::set_treePrototypes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba67d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_treePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TreePrototype>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_alphamapLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapLayers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.GetAlphamaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::TerrainData::GetAlphamaps)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2ba6854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_GetAlphamaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t)>(&UnityEngine::TerrainData::Internal_GetAlphamaps)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ba691c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_alphamapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapResolution)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_alphamapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t)>(&UnityEngine::TerrainData::set_alphamapResolution)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2ba6a00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.GetAlphamapResolutionInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::GetAlphamapResolutionInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetAlphamapResolutionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_Internal_alphamapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_Internal_alphamapResolution)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba69c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_Internal_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_Internal_alphamapResolution
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t)>(&UnityEngine::TerrainData::set_Internal_alphamapResolution)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba6cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_Internal_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_alphamapWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapWidth)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_alphamapHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_alphamapHeight)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba6db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.SetAlphamaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::SetAlphamaps)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2ba6df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.Internal_SetAlphamaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(int32_t, int32_t, int32_t, int32_t, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */)>(&UnityEngine::TerrainData::Internal_SetAlphamaps)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ba6f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_terrainLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::TerrainLayer> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_terrainLayers)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba7008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_terrainLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_terrainLayers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(::ArrayW<UnityEngine::TerrainLayer>)>(&UnityEngine::TerrainData::set_terrainLayers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba7044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_terrainLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TerrainLayer>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_users
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Terrain> (UnityEngine::TerrainData::*)()>(&UnityEngine::TerrainData::get_users)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba7088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_users",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.get_size_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::TerrainData::get_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba5a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_size_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::TerrainData.set_size_Injected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::TerrainData::*)(ByRef<UnityEngine::Vector3>)>(&UnityEngine::TerrainData::set_size_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2ba5aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_size_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::TerrainData::__set_k_MaximumResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MinimumDetailResolutionPerPatch(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MinimumDetailResolutionPerPatch()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MaximumDetailResolutionPerPatch(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumDetailResolutionPerPatch()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailResolutionPerPatch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MaximumDetailPatchCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumDetailPatchCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumDetailPatchCount()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailPatchCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MaximumDetailsPerRes(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumDetailsPerRes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumDetailsPerRes()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumDetailsPerRes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MinimumAlphamapResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MinimumAlphamapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MaximumAlphamapResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumAlphamapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumAlphamapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MinimumBaseMapResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MinimumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MinimumBaseMapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MinimumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 void UnityEngine::TerrainData::__set_k_MaximumBaseMapResolution(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "k_MaximumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::TerrainData::__get_k_MaximumBaseMapResolution()  {
return ::cordl_internals::getStaticField<int32_t, "k_MaximumBaseMapResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get>();
}
 int32_t UnityEngine::TerrainData::GetBoundaryValue(UnityEngine::UnityEngine__TerrainData__BoundaryValueType type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetBoundaryValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UnityEngine__TerrainData__BoundaryValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
 UnityEngine::TerrainData::TerrainData()  : UnityEngine::Object(THROW_UNLESS(::il2cpp_utils::New<TerrainData>())) {}
 void UnityEngine::TerrainData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::Internal_Create(UnityEngine::TerrainData terrainData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::TerrainData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData);
}
 int32_t UnityEngine::TerrainData::get_heightmapResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_heightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_heightmapResolution(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_heightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::TerrainData::get_internalHeightmapResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_internalHeightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_internalHeightmapResolution(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_internalHeightmapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Vector3 UnityEngine::TerrainData::get_size()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_size(UnityEngine::Vector3 value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_size",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ UnityEngine::TerrainData::GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, width, height);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ UnityEngine::TerrainData::Internal_GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, width, height);
}
 void UnityEngine::TerrainData::SetHeights(int32_t xBase, int32_t yBase, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ heights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, heights);
}
 void UnityEngine::TerrainData::Internal_SetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ heights)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetHeights",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, width, height, heights);
}
 void UnityEngine::TerrainData::SetDetailResolution(int32_t detailResolution, int32_t resolutionPerPatch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetDetailResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, detailResolution, resolutionPerPatch);
}
 void UnityEngine::TerrainData::Internal_SetDetailResolution(int32_t patchCount, int32_t resolutionPerPatch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetDetailResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, patchCount, resolutionPerPatch);
}
 int32_t UnityEngine::TerrainData::get_detailResolutionPerPatch()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_detailResolutionPerPatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::RefreshPrototypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "RefreshPrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_detailPrototypes(::ArrayW<UnityEngine::DetailPrototype> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_detailPrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::DetailPrototype>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::TerrainData::SetDetailLayer(int32_t xBase, int32_t yBase, int32_t layer, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ details)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetDetailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, layer, details);
}
 void UnityEngine::TerrainData::Internal_SetDetailLayer(int32_t xBase, int32_t yBase, int32_t totalWidth, int32_t totalHeight, int32_t detailIndex, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetDetailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, xBase, yBase, totalWidth, totalHeight, detailIndex, data);
}
 ::ArrayW<UnityEngine::TreeInstance> UnityEngine::TerrainData::get_treeInstances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_treeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TreeInstance>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::TreeInstance> UnityEngine::TerrainData::Internal_GetTreeInstances()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TreeInstance>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::SetTreeInstances(::ArrayW<UnityEngine::TreeInstance> instances, bool snapToHeightmap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TreeInstance>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, instances, snapToHeightmap);
}
 ::ArrayW<UnityEngine::TreePrototype> UnityEngine::TerrainData::get_treePrototypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_treePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TreePrototype>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_treePrototypes(::ArrayW<UnityEngine::TreePrototype> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_treePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TreePrototype>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::TerrainData::get_alphamapLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ UnityEngine::TerrainData::GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(const_cast<void*>(instance), ___internal_method, x, y, width, height);
}
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ UnityEngine::TerrainData::Internal_GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_GetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */, false>(const_cast<void*>(instance), ___internal_method, x, y, width, height);
}
 int32_t UnityEngine::TerrainData::get_alphamapResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_alphamapResolution(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::TerrainData::GetAlphamapResolutionInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "GetAlphamapResolutionInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::TerrainData::get_Internal_alphamapResolution()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_Internal_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_Internal_alphamapResolution(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_Internal_alphamapResolution",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t UnityEngine::TerrainData::get_alphamapWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::TerrainData::get_alphamapHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_alphamapHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::SetAlphamaps(int32_t x, int32_t y, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "SetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x, y, map);
}
 void UnityEngine::TerrainData::Internal_SetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "Internal_SetAlphamaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, x, y, width, height, map);
}
 ::ArrayW<UnityEngine::TerrainLayer> UnityEngine::TerrainData::get_terrainLayers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_terrainLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::TerrainLayer>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::set_terrainLayers(::ArrayW<UnityEngine::TerrainLayer> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_terrainLayers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::TerrainLayer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<UnityEngine::Terrain> UnityEngine::TerrainData::get_users()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_users",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Terrain>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::TerrainData::get_size_Injected(ByRef<UnityEngine::Vector3> ret)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "get_size_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, ret);
}
 void UnityEngine::TerrainData::set_size_Injected(ByRef<UnityEngine::Vector3> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::TerrainData>::get(),
                            "set_size_Injected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
