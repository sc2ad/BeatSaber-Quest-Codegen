#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__DTSubString_def.hpp"
#include "System/zzzz__DTSubStringType_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::DTSubString.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::DTSubString::*)(int32_t)>(&::System::DTSubString::get_Item)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24389ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DTSubString>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "s", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::System::DTSubStringType", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubString::DTSubString(::System::ReadOnlySpan_1<char16_t> s, int32_t index, int32_t length, ::System::DTSubStringType type, int32_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->s = s;
this->index = index;
this->length = length;
this->type = type;
this->value = value;
}
constexpr void ::System::DTSubString::__set_s(::System::ReadOnlySpan_1<char16_t> value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->__instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t> ::System::DTSubString::__get_s() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->__instance);
}
constexpr void ::System::DTSubString::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DTSubString::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::System::DTSubString::__set_length(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DTSubString::__get_length() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::System::DTSubString::__set_type(::System::DTSubStringType value)  {
::cordl_internals::setInstanceField<::System::DTSubStringType, 0x18>(this->__instance, std::forward<::System::DTSubStringType>(value));
}
constexpr ::System::DTSubStringType ::System::DTSubString::__get_type() const {
return ::cordl_internals::getInstanceField<::System::DTSubStringType, 0x18>(this->__instance);
}
constexpr void ::System::DTSubString::__set_value(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DTSubString::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
 char16_t ::System::DTSubString::get_Item(int32_t relativeIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DTSubString>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, relativeIndex);
}
} // end anonymous namespace
