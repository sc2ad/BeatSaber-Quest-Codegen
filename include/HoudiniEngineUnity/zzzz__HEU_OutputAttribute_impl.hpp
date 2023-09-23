#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_OutputAttribute_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HEU_OutputAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_OutputAttribute::*)()>(&HoudiniEngineUnity::HEU_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2011154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_OutputAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW HoudiniEngineUnity::HEU_OutputAttribute::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__class(HoudiniEngineUnity::HAPI_AttributeOwner value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_AttributeOwner>(value));
}
constexpr HoudiniEngineUnity::HAPI_AttributeOwner HoudiniEngineUnity::HEU_OutputAttribute::__get__class() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_AttributeOwner, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__type(HoudiniEngineUnity::HAPI_StorageType value)  {
::cordl_internals::setInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<HoudiniEngineUnity::HAPI_StorageType>(value));
}
constexpr HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HEU_OutputAttribute::__get__type() const {
return ::cordl_internals::getInstanceField<HoudiniEngineUnity::HAPI_StorageType, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__count(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_OutputAttribute::__get__count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__tupleSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t HoudiniEngineUnity::HEU_OutputAttribute::__get__tupleSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__intValues(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> HoudiniEngineUnity::HEU_OutputAttribute::__get__intValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__floatValues(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HEU_OutputAttribute::__get__floatValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void HoudiniEngineUnity::HEU_OutputAttribute::__set__stringValues(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> HoudiniEngineUnity::HEU_OutputAttribute::__get__stringValues() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 HoudiniEngineUnity::HEU_OutputAttribute::HEU_OutputAttribute()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HEU_OutputAttribute>())) {}
 void HoudiniEngineUnity::HEU_OutputAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HEU_OutputAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
