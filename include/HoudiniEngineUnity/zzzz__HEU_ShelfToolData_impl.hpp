#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ShelfToolData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::HoudiniEngineUnity__HEU_ShelfToolData__ToolType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::GENERATOR{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::OPERATOR_SINGLE{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::OPERATOR_MULTI{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType::BATCH{3};
//  Writing Method size for method: HoudiniEngineUnity::HEU_ShelfToolData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_ShelfToolData::*)()>(&HoudiniEngineUnity::HEU_ShelfToolData::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x205ee18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ShelfToolData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType HoudiniEngineUnity::HEU_ShelfToolData::__get__toolType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_ShelfToolData__ToolType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__toolTip(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__toolTip() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__iconPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__iconPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__assetPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__assetPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__helpURL(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__helpURL() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__targets(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_ShelfToolData::__get__targets() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_ShelfToolData::__set__jsonPath(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_ShelfToolData::__get__jsonPath() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 HoudiniEngineUnity::HEU_ShelfToolData HoudiniEngineUnity::HEU_ShelfToolData::New_ctor()  {
HoudiniEngineUnity::HEU_ShelfToolData o{THROW_UNLESS(::il2cpp_utils::New<HoudiniEngineUnity::HEU_ShelfToolData>())};
return o;
}
 void HoudiniEngineUnity::HEU_ShelfToolData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_ShelfToolData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
