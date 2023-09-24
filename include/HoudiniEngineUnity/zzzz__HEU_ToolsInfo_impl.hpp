#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ToolsInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::REPLACE{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::ADD{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::SUBTRACT{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode::MULTIPLY{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::AUTO{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::SHOW{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility::HIDE{2};
//  Writing Method size for method: HoudiniEngineUnity::HEU_ToolsInfo.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_ToolsInfo::*)(HoudiniEngineUnity::HEU_ToolsInfo)>(&HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x620;
  constexpr static std::size_t addrs = 0x2076e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ToolsInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ToolsInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_ToolsInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ToolsInfo::*)()>(&HoudiniEngineUnity::HEU_ToolsInfo::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2077430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ToolsInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ToolsInfo>
constexpr  HoudiniEngineUnity::HEU_ToolsInfo::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ToolsInfo>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ToolsInfo>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintBrushSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintBrushOpacity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_ToolsInfo::__get__paintBrushOpacity() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintIntValue(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_ToolsInfo::__get__paintIntValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintFloatValue(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_ToolsInfo::__get__paintFloatValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintStringValue(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_ToolsInfo::__get__paintStringValue() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributesGeoID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesGeoID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributesPartID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributesPartID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributeNodeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeNodeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__lastAttributeName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ToolsInfo::__get__lastAttributeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__brushHandleColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HoudiniEngineUnity::HEU_ToolsInfo::__get__brushHandleColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__affectedAreaPaintColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HoudiniEngineUnity::HEU_ToolsInfo::__get__affectedAreaPaintColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__liveUpdate(bool value)  {
::cordl_internals::setInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_ToolsInfo::__get__liveUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__isPainting(bool value)  {
::cordl_internals::setInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_ToolsInfo::__get__isPainting() const {
return ::cordl_internals::getInstanceField<bool, 0x71>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxUnselectedColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxUnselectedColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__editPointBoxSelectedColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color HoudiniEngineUnity::HEU_ToolsInfo::__get__editPointBoxSelectedColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__recacheRequired(bool value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_ToolsInfo::__get__recacheRequired() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintMergeMode(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMergeMode() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMergeMode, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__showOnlyEditGeometry(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_ToolsInfo::__get__showOnlyEditGeometry() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__alwaysCookUpstream(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool HoudiniEngineUnity::HEU_ToolsInfo::__get__alwaysCookUpstream() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ToolsInfo::__set__paintMeshVisiblity(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility HoudiniEngineUnity::HEU_ToolsInfo::__get__paintMeshVisiblity() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ToolsInfo__PaintMeshVisibility, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_ToolsInfo::IsEquivalentTo(HoudiniEngineUnity::HEU_ToolsInfo other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ToolsInfo>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_ToolsInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
 HoudiniEngineUnity::HEU_ToolsInfo HoudiniEngineUnity::HEU_ToolsInfo::New_ctor()  {
HoudiniEngineUnity::HEU_ToolsInfo o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_ToolsInfo>())};
return o;
}
 void HoudiniEngineUnity::HEU_ToolsInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ToolsInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
