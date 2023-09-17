#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_InputData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_InputInterfaceTerrain_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::*)()>(&::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2059c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightFieldName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightFieldName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__parentNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__parentNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__voxelSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__voxelSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__terrain(::UnityEngine::Terrain value)  {
::cordl_internals::setInstanceField<::UnityEngine::Terrain, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Terrain>(value));
}
constexpr ::UnityEngine::Terrain ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrain() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Terrain, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__terrainData(::UnityEngine::TerrainData value)  {
::cordl_internals::setInstanceField<::UnityEngine::TerrainData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::TerrainData>(value));
}
constexpr ::UnityEngine::TerrainData ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__terrainData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::TerrainData, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__numPointsX(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsX() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__numPointsY(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__numPointsY() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__transform(::HoudiniEngineUnity::HAPI_Transform value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HAPI_Transform>(value));
}
constexpr ::HoudiniEngineUnity::HAPI_Transform ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__transform() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HAPI_Transform, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightfieldNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightfieldNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x6c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__heightNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__heightNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__maskNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__maskNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__set__mergeNodeID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::__get__mergeNodeID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain()  : ::HoudiniEngineUnity::HEU_InputData(THROW_UNLESS(::il2cpp_utils::New<____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>())) {}
 void ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)()>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x205770c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateInputNodeWithDataUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, ::UnityEngine::GameObject, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2057718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetMaskLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2058d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetMaskLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.IsThisInputObjectSupported
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x20590e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::HoudiniEngineUnity::HEU_InputInterfaceTerrain),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.CreateHeightFieldInputNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2057d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "CreateHeightFieldInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadHeightValuesWithTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x2057ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "UploadHeightValuesWithTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.UploadAlphaMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>, ByRef<bool>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0x20586a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "UploadAlphaMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetHeightFieldData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::ArrayW<float_t>, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2058e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetHeightFieldData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainDataAttributesToHeightField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::UnityEngine::TerrainData)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x20595d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTerrainDataAttributesToHeightField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTerrainLayerAttributesToHeightField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::UnityEngine::TerrainLayer)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2059a4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTerrainLayerAttributesToHeightField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreePrototypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::UnityEngine::TerrainData)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x2059784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTreePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.SetTreeInstances
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::HoudiniEngineUnity::HEU_SessionBase, int32_t, int32_t, ::UnityEngine::TerrainData)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2059c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputInterfaceTerrain.GenerateTerrainDataFromGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain (::HoudiniEngineUnity::HEU_InputInterfaceTerrain::*)(::UnityEngine::GameObject)>(&::HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x205791c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "GenerateTerrainDataFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::HEU_InputInterfaceTerrain()  : ::HoudiniEngineUnity::HEU_InputInterface(THROW_UNLESS(::il2cpp_utils::New<HEU_InputInterfaceTerrain>())) {}
 void ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateInputNodeWithDataUpload(::HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, ::UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "CreateInputNodeWithDataUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, connectNodeID, inputObject, inputNodeID);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetMaskLayer(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetMaskLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, idt, baseVolumeInfo);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::IsThisInputObjectSupported(::UnityEngine::GameObject inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "IsThisInputObjectSupported",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, inputObject);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::CreateHeightFieldInputNode(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "CreateHeightFieldInputNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, idt);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadHeightValuesWithTransform(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "UploadHeightValuesWithTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, idt, volumeInfo);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::UploadAlphaMaps(::HoudiniEngineUnity::HEU_SessionBase session, ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain idt, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo, ByRef<bool> bMaskSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "UploadAlphaMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, idt, baseVolumeInfo, bMaskSet);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetHeightFieldData(::HoudiniEngineUnity::HEU_SessionBase session, int32_t volumeNodeID, int32_t partID, ::ArrayW<float_t> heightValues, ::StringW heightFieldName, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo> baseVolumeInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetHeightFieldData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, volumeNodeID, partID, heightValues, heightFieldName, baseVolumeInfo);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainDataAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData terrainData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTerrainDataAttributesToHeightField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, geoNodeID, partID, terrainData);
}
 bool ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTerrainLayerAttributesToHeightField(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainLayer terrainLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTerrainLayerAttributesToHeightField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, session, geoNodeID, partID, terrainLayer);
}
 void ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreePrototypes(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData terrainData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTreePrototypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoNodeID, partID, terrainData);
}
 void ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::SetTreeInstances(::HoudiniEngineUnity::HEU_SessionBase session, int32_t geoNodeID, int32_t partID, ::UnityEngine::TerrainData terrainData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "SetTreeInstances",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, session, geoNodeID, partID, terrainData);
}
 ::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain ::HoudiniEngineUnity::HEU_InputInterfaceTerrain::GenerateTerrainDataFromGameObject(::UnityEngine::GameObject inputObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputInterfaceTerrain>::get(),
                            "GenerateTerrainDataFromGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::____HoudiniEngineUnity__HEU_InputInterfaceTerrain__HEU_InputDataTerrain, false>(const_cast<void*>(instance), ___internal_method, inputObject);
}
} // end anonymous namespace
