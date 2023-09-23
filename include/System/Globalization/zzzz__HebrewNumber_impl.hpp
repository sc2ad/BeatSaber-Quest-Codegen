#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumber_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingContext_def.hpp"
#include "System/Globalization/zzzz__HebrewNumberParsingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken::System__Globalization__HebrewNumber__HebrewToken(int16_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::System__Globalization__HebrewNumber__HebrewToken::__set_value__(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x0>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Globalization::System__Globalization__HebrewNumber__HebrewToken::__get_value__() const {
return ::cordl_internals::getInstanceField<int16_t, 0x0>(this->__instance);
}
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Invalid{-1};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit400{0};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit200_300{1};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit100{2};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit10{3};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit1{4};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit6_7{5};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit7{6};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::Digit9{7};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::SingleQuote{8};
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken  System::Globalization::System__Globalization__HebrewNumber__HebrewToken::DoubleQuote{9};
//  Writing Method size for method: System::Globalization::System__Globalization__HebrewNumber__HebrewValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::System__Globalization__HebrewNumber__HebrewValue::*)(System::Globalization::System__Globalization__HebrewNumber__HebrewToken, int16_t)>(&System::Globalization::System__Globalization__HebrewNumber__HebrewValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23e570c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__HebrewNumber__HebrewValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__HebrewNumber__HebrewToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "token", ty: "System::Globalization::System__Globalization__HebrewNumber__HebrewToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewValue::System__Globalization__HebrewNumber__HebrewValue(System::Globalization::System__Globalization__HebrewNumber__HebrewToken token, int16_t value) noexcept : ::bs_hook::ValueTypeWrapper() {this->token = token;
this->value = value;
}
constexpr void System::Globalization::System__Globalization__HebrewNumber__HebrewValue::__set_token(System::Globalization::System__Globalization__HebrewNumber__HebrewToken value)  {
::cordl_internals::setInstanceField<System::Globalization::System__Globalization__HebrewNumber__HebrewToken, 0x0>(this->__instance, std::forward<System::Globalization::System__Globalization__HebrewNumber__HebrewToken>(value));
}
constexpr System::Globalization::System__Globalization__HebrewNumber__HebrewToken System::Globalization::System__Globalization__HebrewNumber__HebrewValue::__get_token() const {
return ::cordl_internals::getInstanceField<System::Globalization::System__Globalization__HebrewNumber__HebrewToken, 0x0>(this->__instance);
}
constexpr void System::Globalization::System__Globalization__HebrewNumber__HebrewValue::__set_value(int16_t value)  {
::cordl_internals::setInstanceField<int16_t, 0x2>(this->__instance, std::forward<int16_t>(value));
}
constexpr int16_t System::Globalization::System__Globalization__HebrewNumber__HebrewValue::__get_value() const {
return ::cordl_internals::getInstanceField<int16_t, 0x2>(this->__instance);
}
 void System::Globalization::System__Globalization__HebrewNumber__HebrewValue::_ctor(System::Globalization::System__Globalization__HebrewNumber__HebrewToken token, int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__HebrewNumber__HebrewValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::System__Globalization__HebrewNumber__HebrewToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, token, value);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__HebrewNumber__HS::System__Globalization__HebrewNumber__HS(int8_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::System__Globalization__HebrewNumber__HS::__set_value__(int8_t value)  {
::cordl_internals::setInstanceField<int8_t, 0x0>(this->__instance, std::forward<int8_t>(value));
}
constexpr int8_t System::Globalization::System__Globalization__HebrewNumber__HS::__get_value__() const {
return ::cordl_internals::getInstanceField<int8_t, 0x0>(this->__instance);
}
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::_err{-1};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::Start{0};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400{1};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_400{2};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_X00{3};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_X0{4};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X00_DQ{5};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_X00_X0{6};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X0_DQ{7};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X{8};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X0{9};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X00{10};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_DQ{11};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_400_DQ{12};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S400_400_100{13};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S9{14};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::X00_S9{15};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::S9_DQ{16};
constexpr System::Globalization::System__Globalization__HebrewNumber__HS  System::Globalization::System__Globalization__HebrewNumber__HS::END{100};
//  Writing Method size for method: System::Globalization::HebrewNumber.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&System::Globalization::HebrewNumber::ToString)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x23e5204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::HebrewNumber.ParseByChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::HebrewNumberParsingState (*)(char16_t, ByRef<System::Globalization::HebrewNumberParsingContext>)>(&System::Globalization::HebrewNumber::ParseByChar)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23e3420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "ParseByChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::HebrewNumberParsingContext>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::HebrewNumber.IsDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Globalization::HebrewNumber::IsDigit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23e3344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::Globalization::HebrewNumber::__set_s_hebrewValues(::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue>, "s_hebrewValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>(std::forward<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue>>(value));
}
 ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue> System::Globalization::HebrewNumber::__get_s_hebrewValues()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HebrewValue>, "s_hebrewValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>();
}
 void System::Globalization::HebrewNumber::__set_s_maxHebrewNumberCh(char16_t value)  {
::cordl_internals::setStaticField<char16_t, "s_maxHebrewNumberCh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>(std::forward<char16_t>(value));
}
 char16_t System::Globalization::HebrewNumber::__get_s_maxHebrewNumberCh()  {
return ::cordl_internals::getStaticField<char16_t, "s_maxHebrewNumberCh", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>();
}
 void System::Globalization::HebrewNumber::__set_s_numberPasingState(::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS>, "s_numberPasingState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>(std::forward<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS>>(value));
}
 ::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS> System::Globalization::HebrewNumber::__get_s_numberPasingState()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Globalization::System__Globalization__HebrewNumber__HS>, "s_numberPasingState", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get>();
}
 ::StringW System::Globalization::HebrewNumber::ToString(int32_t Number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, Number);
}
 System::Globalization::HebrewNumberParsingState System::Globalization::HebrewNumber::ParseByChar(char16_t ch, ByRef<System::Globalization::HebrewNumberParsingContext> context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "ParseByChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::HebrewNumberParsingContext>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::HebrewNumberParsingState, false>(nullptr, ___internal_method, ch, context);
}
 bool System::Globalization::HebrewNumber::IsDigit(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::HebrewNumber>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
