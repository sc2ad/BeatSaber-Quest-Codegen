#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolume_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferVolumeLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_LoadBufferVolume._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_LoadBufferVolume::*)()>(&::HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x203a390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__tileIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__tileIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__splatLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer> ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatLayers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_LoadBufferVolumeLayer>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMapWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMapHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMapHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightMap(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ value)  {
::cordl_internals::setInstanceField</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */>(value));
}
constexpr /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightMap() const {
return ::cordl_internals::getInstanceField</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__splatMaps(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ value)  {
::cordl_internals::setInstanceField</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */>(value));
}
constexpr /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__splatMaps() const {
return ::cordl_internals::getInstanceField</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainSizeX(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeX() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainSizeY(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainSizeY() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__heightRange(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__heightRange() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__position(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__position() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainDataPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__terrainDataExportPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__terrainDataExportPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_VolumeScatterTrees, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_VolumeScatterTrees>(value));
}
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__scatterTrees() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_VolumeScatterTrees, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailPrototypes(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>>(value));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype> ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailPrototypes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_DetailPrototype>, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailMaps(::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>>(value));
}
constexpr ::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailMaps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties value)  {
::cordl_internals::setInstanceField<::HoudiniEngineUnity::HEU_DetailProperties, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::HoudiniEngineUnity::HEU_DetailProperties>(value));
}
constexpr ::HoudiniEngineUnity::HEU_DetailProperties ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__detailProperties() const {
return ::cordl_internals::getInstanceField<::HoudiniEngineUnity::HEU_DetailProperties, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::HoudiniEngineUnity::HEU_LoadBufferVolume::__set__specifiedTerrainMaterialName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::HoudiniEngineUnity::HEU_LoadBufferVolume::__get__specifiedTerrainMaterialName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::HoudiniEngineUnity::HEU_LoadBufferVolume::HEU_LoadBufferVolume()  : ::HoudiniEngineUnity::HEU_LoadBufferBase(THROW_UNLESS(::il2cpp_utils::New<HEU_LoadBufferVolume>())) {}
 void ::HoudiniEngineUnity::HEU_LoadBufferVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_LoadBufferVolume>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
