#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/zzzz__Decimal_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__MidpointRounding_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::______System__Decimal__DecCalc__RoundingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode  ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::ToEven{0};
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode  ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::AwayFromZero{1};
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode  ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::Truncate{2};
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode  ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::Floor{3};
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode  ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode::Ceiling{4};
//  Writing Method size for method: ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::*)(uint32_t, uint32_t, uint32_t)>(&::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24a25e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "Hi", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MidLo", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::______System__Decimal__DecCalc__PowerOvfl(uint32_t Hi, uint64_t MidLo) noexcept : ::bs_hook::ValueTypeWrapper() {this->Hi = Hi;
this->MidLo = MidLo;
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::__set_Hi(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::__get_Hi() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::__set_MidLo(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::__get_MidLo() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
 void ::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl::_ctor(uint32_t hi, uint32_t mid, uint32_t lo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, hi, mid, lo);
}
//  Writing Method size for method: ::GlobalNamespace::______System__Decimal__DecCalc__Buf24.get_Low64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::______System__Decimal__DecCalc__Buf24::*)()>(&::GlobalNamespace::______System__Decimal__DecCalc__Buf24::get_Low64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a2164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______System__Decimal__DecCalc__Buf24.set_Low64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______System__Decimal__DecCalc__Buf24::*)(uint64_t)>(&::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_Low64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a206c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______System__Decimal__DecCalc__Buf24.set_Mid64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______System__Decimal__DecCalc__Buf24::*)(uint64_t)>(&::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_Mid64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a20e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_Mid64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::______System__Decimal__DecCalc__Buf24.set_High64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::______System__Decimal__DecCalc__Buf24::*)(uint64_t)>(&::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_High64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a2350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_High64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "U0", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U1", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U2", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U3", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U4", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "U5", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulo64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "umid64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uhigh64LE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::______System__Decimal__DecCalc__Buf24(uint32_t U0, uint32_t U1, uint32_t U2, uint32_t U3, uint32_t U4, uint32_t U5, uint64_t ulo64LE, uint64_t umid64LE, uint64_t uhigh64LE) noexcept : ::bs_hook::ValueTypeWrapper() {this->U0 = U0;
this->U1 = U1;
this->U2 = U2;
this->U3 = U3;
this->U4 = U4;
this->U5 = U5;
this->ulo64LE = ulo64LE;
this->umid64LE = umid64LE;
this->uhigh64LE = uhigh64LE;
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U0(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U0() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U1(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U1() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U2(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U2() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U3(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U3() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U4(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U4() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_U5(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x14>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_U5() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x14>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_ulo64LE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_ulo64LE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_umid64LE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_umid64LE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__set_uhigh64LE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x10>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::__get_uhigh64LE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x10>(this->__instance);
}
 uint64_t ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_Low64(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_Mid64(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_Mid64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::GlobalNamespace::______System__Decimal__DecCalc__Buf24::set_High64(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::______System__Decimal__DecCalc__Buf24>::get(),
                            "set_High64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.get_High
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::____System__Decimal__DecCalc::*)()>(&::System::____System__Decimal__DecCalc::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.set_High
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__Decimal__DecCalc::*)(uint32_t)>(&::System::____System__Decimal__DecCalc::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.get_Low
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::____System__Decimal__DecCalc::*)()>(&::System::____System__Decimal__DecCalc::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.set_Low
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__Decimal__DecCalc::*)(uint32_t)>(&::System::____System__Decimal__DecCalc::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.get_Mid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::____System__Decimal__DecCalc::*)()>(&::System::____System__Decimal__DecCalc::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.set_Mid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__Decimal__DecCalc::*)(uint32_t)>(&::System::____System__Decimal__DecCalc::set_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a0f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.get_IsNegative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::____System__Decimal__DecCalc::*)()>(&::System::____System__Decimal__DecCalc::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a0f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.get_Low64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::____System__Decimal__DecCalc::*)()>(&::System::____System__Decimal__DecCalc::get_Low64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.set_Low64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::____System__Decimal__DecCalc::*)(uint64_t)>(&::System::____System__Decimal__DecCalc::set_Low64)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24a0f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.GetExponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(float_t)>(&::System::____System__Decimal__DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a1000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.GetExponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(double_t)>(&::System::____System__Decimal__DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a100c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.UInt32x32To64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::System::____System__Decimal__DecCalc::UInt32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a1018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "UInt32x32To64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.UInt64x64To128
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, uint64_t, ByRef<::System::____System__Decimal__DecCalc>)>(&::System::____System__Decimal__DecCalc::UInt64x64To128)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24a1020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "UInt64x64To128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.Div96ByConst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<uint64_t>, ByRef<uint32_t>, uint32_t)>(&::System::____System__Decimal__DecCalc::Div96ByConst)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24a1134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "Div96ByConst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.Unscale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<uint32_t>, ByRef<uint64_t>, ByRef<int32_t>)>(&::System::____System__Decimal__DecCalc::Unscale)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x24a1178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "Unscale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.ScaleResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, uint32_t, int32_t)>(&::System::____System__Decimal__DecCalc::ScaleResult)> {
  constexpr static std::size_t size = 0xbdc;
  constexpr static std::size_t addrs = 0x24a13d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "ScaleResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.DivByConst
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(void*, uint32_t, ByRef<uint32_t>, ByRef<uint32_t>, uint32_t)>(&::System::____System__Decimal__DecCalc::DivByConst)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24a1fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DivByConst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.LeadingZeroCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(uint32_t)>(&::System::____System__Decimal__DecCalc::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24a2004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "LeadingZeroCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.DecAddSub
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::____System__Decimal__DecCalc>, ByRef<::System::____System__Decimal__DecCalc>, bool)>(&::System::____System__Decimal__DecCalc::DecAddSub)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x249f880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DecAddSub",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarDecCmp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::System::Decimal>, ByRef<::System::Decimal>)>(&::System::____System__Decimal__DecCalc::VarDecCmp)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x249d45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecCmp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarDecCmpSub
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::System::Decimal>, ByRef<::System::Decimal>)>(&::System::____System__Decimal__DecCalc::VarDecCmpSub)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x24a21c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecCmpSub",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarDecMul
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::____System__Decimal__DecCalc>, ByRef<::System::____System__Decimal__DecCalc>)>(&::System::____System__Decimal__DecCalc::VarDecMul)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x24a0078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecMul",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarDecFromR4
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ByRef<::System::____System__Decimal__DecCalc>)>(&::System::____System__Decimal__DecCalc::VarDecFromR4)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x249c7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecFromR4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarDecFromR8
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(double_t, ByRef<::System::____System__Decimal__DecCalc>)>(&::System::____System__Decimal__DecCalc::VarDecFromR8)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x249cc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecFromR8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarR4FromDec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(ByRef<::System::Decimal>)>(&::System::____System__Decimal__DecCalc::VarR4FromDec)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x249f2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarR4FromDec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.VarR8FromDec
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(ByRef<::System::Decimal>)>(&::System::____System__Decimal__DecCalc::VarR8FromDec)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x249ed28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarR8FromDec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<::System::Decimal>)>(&::System::____System__Decimal__DecCalc::GetHashCode)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x249d784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.InternalRound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::____System__Decimal__DecCalc>, uint32_t, ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode)>(&::System::____System__Decimal__DecCalc::InternalRound)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x249e2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "InternalRound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::____System__Decimal__DecCalc.DecDivMod1E9
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(ByRef<::System::____System__Decimal__DecCalc>)>(&::System::____System__Decimal__DecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x249c688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DecDivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::____System__Decimal__DecCalc::____System__Decimal__DecCalc(uint32_t uflags, uint32_t uhi, uint32_t ulo, uint32_t umid, uint64_t ulomidLE) noexcept : ::bs_hook::ValueTypeWrapper() {this->uflags = uflags;
this->uhi = uhi;
this->ulo = ulo;
this->umid = umid;
this->ulomidLE = ulomidLE;
}
constexpr void ::System::____System__Decimal__DecCalc::__set_uflags(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__Decimal__DecCalc::__get_uflags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void ::System::____System__Decimal__DecCalc::__set_uhi(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__Decimal__DecCalc::__get_uhi() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
constexpr void ::System::____System__Decimal__DecCalc::__set_ulo(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__Decimal__DecCalc::__get_ulo() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void ::System::____System__Decimal__DecCalc::__set_umid(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::System::____System__Decimal__DecCalc::__get_umid() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void ::System::____System__Decimal__DecCalc::__set_ulomidLE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::System::____System__Decimal__DecCalc::__get_ulomidLE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
 void ::System::____System__Decimal__DecCalc::__set_s_powers10(::ArrayW<uint32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_powers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>(std::forward<::ArrayW<uint32_t>>(value));
}
 ::ArrayW<uint32_t> ::System::____System__Decimal__DecCalc::__get_s_powers10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_powers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>();
}
 void ::System::____System__Decimal__DecCalc::__set_s_ulongPowers10(::ArrayW<uint64_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>(std::forward<::ArrayW<uint64_t>>(value));
}
 ::ArrayW<uint64_t> ::System::____System__Decimal__DecCalc::__get_s_ulongPowers10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>();
}
 void ::System::____System__Decimal__DecCalc::__set_s_doublePowers10(::ArrayW<double_t> value)  {
::cordl_internals::setStaticField<::ArrayW<double_t>, "s_doublePowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>(std::forward<::ArrayW<double_t>>(value));
}
 ::ArrayW<double_t> ::System::____System__Decimal__DecCalc::__get_s_doublePowers10()  {
return ::cordl_internals::getStaticField<::ArrayW<double_t>, "s_doublePowers10", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>();
}
 void ::System::____System__Decimal__DecCalc::__set_PowerOvflValues(::ArrayW<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl> value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl>, "PowerOvflValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>(std::forward<::ArrayW<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl>>(value));
}
 ::ArrayW<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl> ::System::____System__Decimal__DecCalc::__get_PowerOvflValues()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::______System__Decimal__DecCalc__PowerOvfl>, "PowerOvflValues", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get>();
}
 uint32_t ::System::____System__Decimal__DecCalc::get_High()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::____System__Decimal__DecCalc::set_High(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t ::System::____System__Decimal__DecCalc::get_Low()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::____System__Decimal__DecCalc::set_Low(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t ::System::____System__Decimal__DecCalc::get_Mid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::____System__Decimal__DecCalc::set_Mid(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::System::____System__Decimal__DecCalc::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint64_t ::System::____System__Decimal__DecCalc::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::System::____System__Decimal__DecCalc::set_Low64(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "set_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t ::System::____System__Decimal__DecCalc::GetExponent(float_t f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, f);
}
 uint32_t ::System::____System__Decimal__DecCalc::GetExponent(double_t d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetExponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, d);
}
 uint64_t ::System::____System__Decimal__DecCalc::UInt32x32To64(uint32_t a, uint32_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "UInt32x32To64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, a, b);
}
 void ::System::____System__Decimal__DecCalc::UInt64x64To128(uint64_t a, uint64_t b, ByRef<::System::____System__Decimal__DecCalc> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "UInt64x64To128",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b, result);
}
 bool ::System::____System__Decimal__DecCalc::Div96ByConst(ByRef<uint64_t> high64, ByRef<uint32_t> low, uint32_t pow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "Div96ByConst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, high64, low, pow);
}
 void ::System::____System__Decimal__DecCalc::Unscale(ByRef<uint32_t> low, ByRef<uint64_t> high64, ByRef<int32_t> scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "Unscale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, low, high64, scale);
}
 int32_t ::System::____System__Decimal__DecCalc::ScaleResult(void* bufRes, uint32_t hiRes, int32_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "ScaleResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bufRes, hiRes, scale);
}
 uint32_t ::System::____System__Decimal__DecCalc::DivByConst(void* result, uint32_t hiRes, ByRef<uint32_t> quotient, ByRef<uint32_t> remainder, uint32_t power)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DivByConst",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, result, hiRes, quotient, remainder, power);
}
 int32_t ::System::____System__Decimal__DecCalc::LeadingZeroCount(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "LeadingZeroCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 void ::System::____System__Decimal__DecCalc::DecAddSub(ByRef<::System::____System__Decimal__DecCalc> d1, ByRef<::System::____System__Decimal__DecCalc> d2, bool sign)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DecAddSub",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d1, d2, sign);
}
 int32_t ::System::____System__Decimal__DecCalc::VarDecCmp(ByRef<::System::Decimal> d1, ByRef<::System::Decimal> d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecCmp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d1, d2);
}
 int32_t ::System::____System__Decimal__DecCalc::VarDecCmpSub(ByRef<::System::Decimal> d1, ByRef<::System::Decimal> d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecCmpSub",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d1, d2);
}
 void ::System::____System__Decimal__DecCalc::VarDecMul(ByRef<::System::____System__Decimal__DecCalc> d1, ByRef<::System::____System__Decimal__DecCalc> d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecMul",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d1, d2);
}
 void ::System::____System__Decimal__DecCalc::VarDecFromR4(float_t input, ByRef<::System::____System__Decimal__DecCalc> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecFromR4",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, result);
}
 void ::System::____System__Decimal__DecCalc::VarDecFromR8(double_t input, ByRef<::System::____System__Decimal__DecCalc> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarDecFromR8",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, input, result);
}
 float_t ::System::____System__Decimal__DecCalc::VarR4FromDec(ByRef<::System::Decimal> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarR4FromDec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 double_t ::System::____System__Decimal__DecCalc::VarR8FromDec(ByRef<::System::Decimal> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "VarR8FromDec",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 int32_t ::System::____System__Decimal__DecCalc::GetHashCode(ByRef<::System::Decimal> d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
 void ::System::____System__Decimal__DecCalc::InternalRound(ByRef<::System::____System__Decimal__DecCalc> d, uint32_t scale, ::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "InternalRound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::______System__Decimal__DecCalc__RoundingMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d, scale, mode);
}
 uint32_t ::System::____System__Decimal__DecCalc::DecDivMod1E9(ByRef<::System::____System__Decimal__DecCalc> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::____System__Decimal__DecCalc>::get(),
                            "DecDivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::____System__Decimal__DecCalc>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
//  Writing Method size for method: ::System::Decimal.get_High
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Mid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_IsNegative
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)()>(&::System::Decimal::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249c53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Scale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249c548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Decimal::*)()>(&::System::Decimal::get_Low64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x249c550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.AsMutable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::System::____System__Decimal__DecCalc> (*)(ByRef<::System::Decimal>)>(&::System::Decimal::AsMutable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x249c5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "AsMutable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.DecDivMod1E9
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(ByRef<::System::Decimal>)>(&::System::Decimal::DecDivMod1E9)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x249c5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "DecDivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x249c6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(uint32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249c714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x249c720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(uint64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x249c748;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(float_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x249c758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(double_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x249cbe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.IsValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t)>(&::System::Decimal::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x249d078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(::ArrayW<int32_t>)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x249d098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(int32_t, int32_t, int32_t, bool, uint8_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x249d1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(::bs_hook::Il2CppWrapperType)>(&::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x249d274;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Decimal::*)(ByRef<::System::Decimal>, int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x249d32c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::bs_hook::Il2CppWrapperType)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x249d33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x249d52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::bs_hook::Il2CppWrapperType)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x249d5bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Decimal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x249d698;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x249d730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Decimal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)()>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x249da14;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::System::Decimal),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x249dac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Decimal::*)(::StringW, ::System::IFormatProvider)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x249db7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::Span_1<char16_t>, ByRef<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider)>(&::System::Decimal::TryFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x249dc54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "TryFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x249dd20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x249ddf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider, ByRef<::System::Decimal>)>(&::System::Decimal::TryParse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x249ded8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetBits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (*)(::System::Decimal)>(&::System::Decimal::GetBits)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x249dfd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "GetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Negate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Negate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249e06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Negate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, int32_t)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x249e074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Round",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(ByRef<::System::Decimal>, int32_t, ::System::MidpointRounding)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x249e108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Round",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MidpointRounding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Decimal::ToByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x249e544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Decimal::ToSByte)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x249e830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Decimal::ToInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x249eb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::ToDouble)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x249eca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::ToInt32)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x249e9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::ToInt64)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x249edf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt16)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x249ef60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt32)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x249e6c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt64)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x249f0e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::ToSingle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x249f244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x249f320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Truncate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Decimal>)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x249f420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Truncate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249f4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x249f4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x249f4dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249f4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(char16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249f500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x249f50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249f520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x249f52c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249f544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(float_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x249f550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(double_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x249f594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int32_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249f5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int64_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249f63c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_uint64_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249f6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_float_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249f704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_double_t
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x249f768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Addition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Addition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x249f7cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Subtraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Subtraction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x249ff14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Multiply)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x249ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Equality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Equality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a04e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Inequality
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Inequality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a0570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24a0600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_LessThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThanOrEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a068c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_LessThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThan)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a071c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_GreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThanOrEqual
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24a07ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_GreaterThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetTypeCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (::System::Decimal::*)()>(&::System::Decimal::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a083c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToBoolean
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24a08a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a09f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt16
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt32
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0b10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt64
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSingle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDouble
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x24a0c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDecimal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24a0cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Decimal::*)(::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24a0cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::System::Decimal::*)(::System::Type, ::System::IFormatProvider)>(&::System::Decimal::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24a0d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::System::IFormattable
constexpr  ::System::Decimal::operator ::System::IFormattable() const {
return ::System::IFormattable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IComparable
constexpr  ::System::Decimal::operator ::System::IComparable() const {
return ::System::IComparable(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IConvertible
constexpr  ::System::Decimal::operator ::System::IConvertible() const {
return ::System::IConvertible(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IComparable_1<::System::Decimal>
constexpr  ::System::Decimal::operator ::System::IComparable_1<::System::Decimal>() const {
return ::System::IComparable_1<::System::Decimal>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::IEquatable_1<::System::Decimal>
constexpr  ::System::Decimal::operator ::System::IEquatable_1<::System::Decimal>() const {
return ::System::IEquatable_1<::System::Decimal>(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::Runtime::Serialization::IDeserializationCallback
constexpr  ::System::Decimal::operator ::System::Runtime::Serialization::IDeserializationCallback() const {
return ::System::Runtime::Serialization::IDeserializationCallback(::cordl_internals::Box(this).convert());
}
/// @brief Convert operator to ::System::ISpanFormattable
constexpr  ::System::Decimal::operator ::System::ISpanFormattable() const {
return ::System::ISpanFormattable(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Decimal::Decimal(int32_t flags, int32_t hi, int32_t lo, int32_t mid, uint64_t ulomidLE) noexcept : ::bs_hook::ValueTypeWrapper() {this->flags = flags;
this->hi = hi;
this->lo = lo;
this->mid = mid;
this->ulomidLE = ulomidLE;
}
 void ::System::Decimal::__set_Zero(::System::Decimal value)  {
::cordl_internals::setStaticField<::System::Decimal, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
 ::System::Decimal ::System::Decimal::__get_Zero()  {
return ::cordl_internals::getStaticField<::System::Decimal, "Zero", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
 void ::System::Decimal::__set_One(::System::Decimal value)  {
::cordl_internals::setStaticField<::System::Decimal, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
 ::System::Decimal ::System::Decimal::__get_One()  {
return ::cordl_internals::getStaticField<::System::Decimal, "One", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
 void ::System::Decimal::__set_MinusOne(::System::Decimal value)  {
::cordl_internals::setStaticField<::System::Decimal, "MinusOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
 ::System::Decimal ::System::Decimal::__get_MinusOne()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MinusOne", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
 void ::System::Decimal::__set_MaxValue(::System::Decimal value)  {
::cordl_internals::setStaticField<::System::Decimal, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
 ::System::Decimal ::System::Decimal::__get_MaxValue()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MaxValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
 void ::System::Decimal::__set_MinValue(::System::Decimal value)  {
::cordl_internals::setStaticField<::System::Decimal, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>(std::forward<::System::Decimal>(value));
}
 ::System::Decimal ::System::Decimal::__get_MinValue()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MinValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get>();
}
constexpr void ::System::Decimal::__set_flags(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Decimal::__get_flags() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void ::System::Decimal::__set_hi(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Decimal::__get_hi() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void ::System::Decimal::__set_lo(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Decimal::__get_lo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::System::Decimal::__set_mid(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Decimal::__get_mid() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::System::Decimal::__set_ulomidLE(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::System::Decimal::__get_ulomidLE() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
 uint32_t ::System::Decimal::get_High()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_High",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint32_t ::System::Decimal::get_Low()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Low",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint32_t ::System::Decimal::get_Mid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Mid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Decimal::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_IsNegative",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 int32_t ::System::Decimal::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Scale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 uint64_t ::System::Decimal::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "get_Low64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ByRef<::System::____System__Decimal__DecCalc> ::System::Decimal::AsMutable(ByRef<::System::Decimal> d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "AsMutable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<ByRef<::System::____System__Decimal__DecCalc>, false>(nullptr, ___internal_method, d);
}
 uint32_t ::System::Decimal::DecDivMod1E9(ByRef<::System::Decimal> value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "DecDivMod1E9",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, value);
}
 void ::System::Decimal::_ctor(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Decimal::_ctor(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Decimal::_ctor(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Decimal::_ctor(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Decimal::_ctor(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 void ::System::Decimal::_ctor(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::System::Decimal::IsValid(int32_t flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "IsValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, flags);
}
 void ::System::Decimal::_ctor(::ArrayW<int32_t> bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, bits);
}
 void ::System::Decimal::_ctor(int32_t lo, int32_t mid, int32_t hi, bool isNegative, uint8_t scale)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, lo, mid, hi, isNegative, scale);
}
 void ::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, sender);
}
 void ::System::Decimal::_ctor(ByRef<::System::Decimal> d, int32_t flags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, d, flags);
}
 int32_t ::System::Decimal::CompareTo(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t ::System::Decimal::CompareTo(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::System::Decimal::Equals(::bs_hook::Il2CppWrapperType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 bool ::System::Decimal::Equals(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 int32_t ::System::Decimal::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::System::Decimal::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::StringW ::System::Decimal::ToString(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 ::StringW ::System::Decimal::ToString(::StringW format, ::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, format, provider);
}
/// @param format: ::System::ReadOnlySpan_1<char16_t> (default: {})
/// @param provider: ::System::IFormatProvider (default: csnull)
 bool ::System::Decimal::TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "TryFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, destination, charsWritten, format, provider);
}
 ::System::Decimal ::System::Decimal::Parse(::StringW s, ::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, s, provider);
}
 ::System::Decimal ::System::Decimal::Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, s, style, provider);
}
 bool ::System::Decimal::TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider provider, ByRef<::System::Decimal> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, style, provider, result);
}
 ::ArrayW<int32_t> ::System::Decimal::GetBits(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "GetBits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(nullptr, ___internal_method, d);
}
 ::System::Decimal ::System::Decimal::Negate(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Negate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
 ::System::Decimal ::System::Decimal::Round(::System::Decimal d, int32_t decimals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Round",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d, decimals);
}
 ::System::Decimal ::System::Decimal::Round(ByRef<::System::Decimal> d, int32_t decimals, ::System::MidpointRounding mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Round",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::MidpointRounding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d, decimals, mode);
}
 uint8_t ::System::Decimal::ToByte(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, value);
}
 int8_t ::System::Decimal::ToSByte(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, value);
}
 int16_t ::System::Decimal::ToInt16(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, value);
}
 double_t ::System::Decimal::ToDouble(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, d);
}
 int32_t ::System::Decimal::ToInt32(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, d);
}
 int64_t ::System::Decimal::ToInt64(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, d);
}
 uint16_t ::System::Decimal::ToUInt16(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, value);
}
 uint32_t ::System::Decimal::ToUInt32(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, d);
}
 uint64_t ::System::Decimal::ToUInt64(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, d);
}
 float_t ::System::Decimal::ToSingle(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, d);
}
 ::System::Decimal ::System::Decimal::Truncate(::System::Decimal d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Truncate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d);
}
 void ::System::Decimal::Truncate(ByRef<::System::Decimal> d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "Truncate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Decimal>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, d);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(uint8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(int8_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(int16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(uint16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(char16_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(int32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(int64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Implicit___System__Decimal(uint64_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Implicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Explicit___System__Decimal(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Explicit___System__Decimal(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, value);
}
 int32_t ::System::Decimal::op_Explicit_int32_t(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value);
}
 int64_t ::System::Decimal::op_Explicit_int64_t(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, value);
}
 uint64_t ::System::Decimal::op_Explicit_uint64_t(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, value);
}
 float_t ::System::Decimal::op_Explicit_float_t(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value);
}
 double_t ::System::Decimal::op_Explicit_double_t(::System::Decimal value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Explicit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value);
}
 ::System::Decimal ::System::Decimal::op_Addition(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Addition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
 ::System::Decimal ::System::Decimal::op_Subtraction(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Subtraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
 ::System::Decimal ::System::Decimal::op_Multiply(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_Equality(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Equality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_Inequality(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_Inequality",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_LessThan(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_LessThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_LessThanOrEqual(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_LessThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_GreaterThan(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_GreaterThan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 bool ::System::Decimal::op_GreaterThanOrEqual(::System::Decimal d1, ::System::Decimal d2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "op_GreaterThanOrEqual",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, d1, d2);
}
 ::System::TypeCode ::System::Decimal::GetTypeCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "GetTypeCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::System::Decimal::System_IConvertible_ToBoolean(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToBoolean",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 char16_t ::System::Decimal::System_IConvertible_ToChar(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 int8_t ::System::Decimal::System_IConvertible_ToSByte(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToSByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int8_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 uint8_t ::System::Decimal::System_IConvertible_ToByte(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 int16_t ::System::Decimal::System_IConvertible_ToInt16(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 uint16_t ::System::Decimal::System_IConvertible_ToUInt16(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt16",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint16_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 int32_t ::System::Decimal::System_IConvertible_ToInt32(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 uint32_t ::System::Decimal::System_IConvertible_ToUInt32(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt32",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 int64_t ::System::Decimal::System_IConvertible_ToInt64(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 uint64_t ::System::Decimal::System_IConvertible_ToUInt64(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToUInt64",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 float_t ::System::Decimal::System_IConvertible_ToSingle(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToSingle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 double_t ::System::Decimal::System_IConvertible_ToDouble(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDouble",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 ::System::Decimal ::System::Decimal::System_IConvertible_ToDecimal(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDecimal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 ::System::DateTime ::System::Decimal::System_IConvertible_ToDateTime(::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, provider);
}
 ::bs_hook::Il2CppWrapperType ::System::Decimal::System_IConvertible_ToType(::System::Type type, ::System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Decimal>::get(),
                            "System.IConvertible.ToType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, type, provider);
}
} // end anonymous namespace
