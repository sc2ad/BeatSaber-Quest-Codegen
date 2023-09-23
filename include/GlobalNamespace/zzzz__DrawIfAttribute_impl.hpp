#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType::GlobalNamespace__DrawIfAttribute__DisablingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType  GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType::ReadOnly{0};
constexpr GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType  GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType::DontDraw{1};
//  Writing Method size for method: GlobalNamespace::DrawIfAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DrawIfAttribute::*)(::StringW, ::bs_hook::Il2CppWrapperType, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType)>(&GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1f8f2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DrawIfAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DrawIfAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DrawIfAttribute::*)(::StringW, ::bs_hook::Il2CppWrapperType, ::bs_hook::Il2CppWrapperType, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType)>(&GlobalNamespace::DrawIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f8f30c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DrawIfAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DrawIfAttribute::__set_propertyName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::DrawIfAttribute::__get_propertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_value(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::DrawIfAttribute::__get_value() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_orValue(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType GlobalNamespace::DrawIfAttribute::__get_orValue() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DrawIfAttribute::__set_disablingType(GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType>(value));
}
constexpr GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType GlobalNamespace::DrawIfAttribute::__get_disablingType() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "disablingType", ty: "GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType", modifiers: "", def_value: Some("1") }]
 GlobalNamespace::DrawIfAttribute::DrawIfAttribute(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType)  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<DrawIfAttribute>(propertyName, value, disablingType))) {}
/// @param disablingType: GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType (default: 1)
 void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DrawIfAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, propertyName, value, disablingType);
}
// Ctor Parameters [CppParam { name: "propertyName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "orValue", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "disablingType", ty: "GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType", modifiers: "", def_value: Some("1") }]
 GlobalNamespace::DrawIfAttribute::DrawIfAttribute(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType orValue, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType)  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<DrawIfAttribute>(propertyName, value, orValue, disablingType))) {}
/// @param disablingType: GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType (default: 1)
 void GlobalNamespace::DrawIfAttribute::_ctor(::StringW propertyName, ::bs_hook::Il2CppWrapperType value, ::bs_hook::Il2CppWrapperType orValue, GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType disablingType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DrawIfAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__DrawIfAttribute__DisablingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, propertyName, value, orValue, disablingType);
}
