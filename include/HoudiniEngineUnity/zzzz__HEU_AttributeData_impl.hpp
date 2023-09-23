#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_AttributeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::HoudiniEngineUnity__HEU_AttributeData__AttributeType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::UNDEFINED{-1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::BOOL{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::INT{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::FLOAT{2};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::STRING{3};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType::MAX{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::HoudiniEngineUnity__HEU_AttributeData__AttributeState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::INVALID{0};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::SYNCED{1};
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState  HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState::LOCAL_DIRTY{2};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AttributeData.IsColorAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_AttributeData::*)()>(&HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x200bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "IsColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AttributeData.CopyValuesTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AttributeData::*)(HoudiniEngineUnity::HEU_AttributeData)>(&HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x200bfb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "CopyValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AttributeData.IsEquivalentTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::HEU_AttributeData::*)(HoudiniEngineUnity::HEU_AttributeData)>(&HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x200c0d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: HoudiniEngineUnity::HEU_AttributeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_AttributeData::*)()>(&HoudiniEngineUnity::HEU_AttributeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x200c3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributeData>
constexpr  HoudiniEngineUnity::HEU_AttributeData::operator HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributeData>() const noexcept {
return HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_AttributeData>(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeInfo(HoudiniEngineUnity::HAPI_AttributeInfo value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeInfo>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeInfo HoudiniEngineUnity::HEU_AttributeData::__get__attributeInfo() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeInfo, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_AttributeData::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeType(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType HoudiniEngineUnity::HEU_AttributeData::__get__attributeType() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeType, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__intValues(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_AttributeData::__get__intValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__floatValues(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_AttributeData::__get__floatValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__stringValues(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_AttributeData::__get__stringValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_AttributeData::__set__attributeState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState>(value));
}
constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState HoudiniEngineUnity::HEU_AttributeData::__get__attributeState() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HoudiniEngineUnity__HEU_AttributeData__AttributeState, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 bool HoudiniEngineUnity::HEU_AttributeData::IsColorAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "IsColorAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void HoudiniEngineUnity::HEU_AttributeData::CopyValuesTo(HoudiniEngineUnity::HEU_AttributeData destAttrData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "CopyValuesTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, destAttrData);
}
 bool HoudiniEngineUnity::HEU_AttributeData::IsEquivalentTo(HoudiniEngineUnity::HEU_AttributeData other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            "IsEquivalentTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<HoudiniEngineUnity::HEU_AttributeData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, other);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_AttributeData::HEU_AttributeData()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_AttributeData>())) {}
 void HoudiniEngineUnity::HEU_AttributeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_AttributeData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
