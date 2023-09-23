#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HFLayerType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_VolumeLayer.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_VolumeLayer::*)(HoudiniEngineUnity::HEU_VolumeLayer)>(&HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2077538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeLayer>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_VolumeLayer>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_VolumeLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_VolumeLayer::*)()>(&HoudiniEngineUnity::HEU_VolumeLayer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x20778a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeLayer>
constexpr  HoudiniEngineUnity::HEU_VolumeLayer::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeLayer>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeLayer>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__layerName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_VolumeLayer::__get__layerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__part(HoudiniEngineUnity::HEU_PartData value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_PartData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_PartData>(value));
}
constexpr HoudiniEngineUnity::HEU_PartData HoudiniEngineUnity::HEU_VolumeLayer::__get__part() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_PartData, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__strength(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_VolumeLayer::__get__strength() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__uiExpanded(bool value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_VolumeLayer::__get__uiExpanded() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__tile(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_VolumeLayer::__get__tile() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__xLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_VolumeLayer::__get__xLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__yLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_VolumeLayer::__get__yLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__hasLayerAttributes(bool value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_VolumeLayer::__get__hasLayerAttributes() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__terrainLayer(UnityEngine::TerrainLayer value)  {
::cordl_internals::setInstanceField<UnityEngine::TerrainLayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::TerrainLayer>(value));
}
constexpr UnityEngine::TerrainLayer HoudiniEngineUnity::HEU_VolumeLayer::__get__terrainLayer() const {
return ::cordl_internals::getInstanceField<UnityEngine::TerrainLayer, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__layerType(HoudiniEngineUnity::HFLayerType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HFLayerType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HFLayerType>(value));
}
constexpr HoudiniEngineUnity::HFLayerType HoudiniEngineUnity::HEU_VolumeLayer::__get__layerType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HFLayerType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_VolumeLayer::__set__detailPrototype(HoudiniEngineUnity::HEU_DetailPrototype value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HEU_DetailPrototype, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HEU_DetailPrototype>(value));
}
constexpr HoudiniEngineUnity::HEU_DetailPrototype HoudiniEngineUnity::HEU_VolumeLayer::__get__detailPrototype() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HEU_DetailPrototype, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_VolumeLayer::IsEquivalentTo(HoudiniEngineUnity::HEU_VolumeLayer other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeLayer>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_VolumeLayer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_VolumeLayer::HEU_VolumeLayer()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_VolumeLayer>())) {}
 void HoudiniEngineUnity::HEU_VolumeLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_VolumeLayer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
