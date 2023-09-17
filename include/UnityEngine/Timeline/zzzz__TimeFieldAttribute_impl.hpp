#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__TimeFieldAttribute_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode  ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode::None{0};
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode  ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode::ApplyEditMode{1};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute.get_useEditMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode (::UnityEngine::Timeline::TimeFieldAttribute::*)()>(&::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad5de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute>::get(),
                            "get_useEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeFieldAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeFieldAttribute::*)(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode)>(&::UnityEngine::Timeline::TimeFieldAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2ad5dec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::Timeline::TimeFieldAttribute::__set__useEditMode_k__BackingField(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode value)  {
::cordl_internals::setInstanceField<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode>(value));
}
constexpr ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode ::UnityEngine::Timeline::TimeFieldAttribute::__get__useEditMode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode ::UnityEngine::Timeline::TimeFieldAttribute::get_useEditMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute>::get(),
                            "get_useEditMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "useEditMode", ty: "::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode", modifiers: "", def_value: Some("1") }]
 ::UnityEngine::Timeline::TimeFieldAttribute::TimeFieldAttribute(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode useEditMode)  : ::UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<TimeFieldAttribute>(useEditMode))) {}
/// @param useEditMode: ::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode (default: 1)
 void ::UnityEngine::Timeline::TimeFieldAttribute::_ctor(::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode useEditMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeFieldAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::____UnityEngine__Timeline__TimeFieldAttribute__UseEditMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, useEditMode);
}
} // end anonymous namespace
