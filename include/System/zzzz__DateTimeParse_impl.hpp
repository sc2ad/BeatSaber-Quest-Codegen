#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__ParsingInfo_def.hpp"
#include "System/zzzz____DTString_def.hpp"
#include "System/zzzz__DateTimeResult_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/zzzz__DateTimeToken_def.hpp"
#include "System/zzzz__DateTimeRawInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: System::System__DateTimeParse__MatchNumberDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__DateTimeParse__MatchNumberDelegate::*)(::bs_hook::Il2CppWrapperType, ::cordl_internals::intptr_t)>(&System::System__DateTimeParse__MatchNumberDelegate::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2436e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse__MatchNumberDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__DateTimeParse__MatchNumberDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::System__DateTimeParse__MatchNumberDelegate::*)(ByRef<System::__DTString>, int32_t, ByRef<int32_t>)>(&System::System__DateTimeParse__MatchNumberDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2436f24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::System__DateTimeParse__MatchNumberDelegate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse__MatchNumberDelegate>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
 System::System__DateTimeParse__MatchNumberDelegate::System__DateTimeParse__MatchNumberDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  : System::MulticastDelegate(THROW_UNLESS(::il2cpp_utils::New<System__DateTimeParse__MatchNumberDelegate>(object, method))) {}
 void System::System__DateTimeParse__MatchNumberDelegate::_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse__MatchNumberDelegate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, object, method);
}
 bool System::System__DateTimeParse__MatchNumberDelegate::Invoke(ByRef<System::__DTString> str, int32_t digitLen, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse__MatchNumberDelegate>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, str, digitLen, result);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__DateTimeParse__DTT::System__DateTimeParse__DTT(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__DateTimeParse__DTT::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__DateTimeParse__DTT::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::End{0};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumEnd{1};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumAmpm{2};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumSpace{3};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumDatesep{4};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumTimesep{5};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::MonthEnd{6};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::MonthSpace{7};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::MonthDatesep{8};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumDatesuff{9};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumTimesuff{10};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::DayOfWeek{11};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::YearSpace{12};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::YearDateSep{13};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::YearEnd{14};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::TimeZone{15};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::Era{16};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumUTCTimeMark{17};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::Unk{18};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::NumLocalTimeMark{19};
constexpr System::System__DateTimeParse__DTT  System::System__DateTimeParse__DTT::Max{20};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__DateTimeParse__TM::System__DateTimeParse__TM(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__DateTimeParse__TM::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__DateTimeParse__TM::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__DateTimeParse__TM  System::System__DateTimeParse__TM::NotSet{-1};
constexpr System::System__DateTimeParse__TM  System::System__DateTimeParse__TM::AM{0};
constexpr System::System__DateTimeParse__TM  System::System__DateTimeParse__TM::PM{1};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::System__DateTimeParse__DS::System__DateTimeParse__DS(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::System__DateTimeParse__DS::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::System__DateTimeParse__DS::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::BEGIN{0};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::N{1};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::NN{2};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_Nd{3};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_NN{4};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_NNd{5};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_M{6};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_MN{7};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_NM{8};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_MNd{9};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_NDS{10};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_Y{11};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_YN{12};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_YNd{13};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_YM{14};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_YMd{15};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::D_S{16};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::T_S{17};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::T_Nt{18};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::T_NNt{19};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::ERROR{20};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NN{21};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NNN{22};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_MN{23};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NM{24};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_MNN{25};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_DS{26};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_DSN{27};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NDS{28};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NNDS{29};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_YNN{30};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_YMN{31};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_YN{32};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_YM{33};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::TX_N{34};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::TX_NN{35};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::TX_NNN{36};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::TX_TS{37};
constexpr System::System__DateTimeParse__DS  System::System__DateTimeParse__DS::DX_NNY{38};
//  Writing Method size for method: System::System__DateTimeParse____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::System__DateTimeParse____c::*)()>(&System::System__DateTimeParse____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2436f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::System__DateTimeParse____c._DoStrictParse_b__98_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::System__DateTimeParse__MatchNumberDelegate (System::System__DateTimeParse____c::*)()>(&System::System__DateTimeParse____c::_DoStrictParse_b__98_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2436fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get(),
                            "<DoStrictParse>b__98_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void System::System__DateTimeParse____c::__set___9(System::System__DateTimeParse____c value)  {
::cordl_internals::setStaticField<System::System__DateTimeParse____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get>(std::forward<System::System__DateTimeParse____c>(value));
}
 System::System__DateTimeParse____c System::System__DateTimeParse____c::__get___9()  {
return ::cordl_internals::getStaticField<System::System__DateTimeParse____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get>();
}
 void System::System__DateTimeParse____c::__set___9__98_0(System::Func_1<System::System__DateTimeParse__MatchNumberDelegate> value)  {
::cordl_internals::setStaticField<System::Func_1<System::System__DateTimeParse__MatchNumberDelegate>, "<>9__98_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get>(std::forward<System::Func_1<System::System__DateTimeParse__MatchNumberDelegate>>(value));
}
 System::Func_1<System::System__DateTimeParse__MatchNumberDelegate> System::System__DateTimeParse____c::__get___9__98_0()  {
return ::cordl_internals::getStaticField<System::Func_1<System::System__DateTimeParse__MatchNumberDelegate>, "<>9__98_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get>();
}
// Ctor Parameters []
 System::System__DateTimeParse____c::System__DateTimeParse____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<System__DateTimeParse____c>())) {}
 void System::System__DateTimeParse____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::System__DateTimeParse__MatchNumberDelegate System::System__DateTimeParse____c::_DoStrictParse_b__98_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::System__DateTimeParse____c>::get(),
                            "<DoStrictParse>b__98_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::System__DateTimeParse__MatchNumberDelegate, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: System::DateTimeParse.ParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles)>(&System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2423060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::TimeSpan>)>(&System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2426344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTime>)>(&System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2423c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTime>, ByRef<System::TimeSpan>)>(&System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2427160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x242cb94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseExactMultiple
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTime>, ByRef<System::TimeSpan>)>(&System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x242746c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExactMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseExactMultiple
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x242d604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExactMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ::StringW)>(&System::DateTimeParse::MatchWord)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x242d86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetTimeZoneName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>)>(&System::DateTimeParse::GetTimeZoneName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x242d9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeZoneName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.IsDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::DateTimeParse::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x242da90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseFraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<double_t>)>(&System::DateTimeParse::ParseFraction)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x242daa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseFraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<System::TimeSpan>)>(&System::DateTimeParse::ParseTimeZone)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x242db70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.HandleTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::HandleTimeZone)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x242dd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "HandleTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.Lex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::System__DateTimeParse__DS, ByRef<System::__DTString>, ByRef<System::DateTimeToken>, ByRef<System::DateTimeRawInfo>, ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeFormatInfo>, System::Globalization::DateTimeStyles)>(&System::DateTimeParse::Lex)> {
  constexpr static std::size_t size = 0xc84;
  constexpr static std::size_t addrs = 0x242defc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Lex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeFormatInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetJapaneseCalendarDefaultInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar (*)()>(&System::DateTimeParse::GetJapaneseCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x242ee84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetJapaneseCalendarDefaultInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetTaiwanCalendarDefaultInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar (*)()>(&System::DateTimeParse::GetTaiwanCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x242ef74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTaiwanCalendarDefaultInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.VerifyValidPunctuation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>)>(&System::DateTimeParse::VerifyValidPunctuation)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x242f064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "VerifyValidPunctuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetYearMonthDayOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::GetYearMonthDayOrder)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x242f1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetYearMonthDayOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetYearMonthOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::GetYearMonthOrder)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x242f4a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetYearMonthOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetMonthDayOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::GetMonthDayOrder)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x242f658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetMonthDayOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryAdjustYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, int32_t, ByRef<int32_t>)>(&System::DateTimeParse::TryAdjustYear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x242f850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryAdjustYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.SetDateYMD
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, int32_t, int32_t, int32_t)>(&System::DateTimeParse::SetDateYMD)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x242f914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateYMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.SetDateMDY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, int32_t, int32_t, int32_t)>(&System::DateTimeParse::SetDateMDY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x242f988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateMDY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.SetDateDMY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, int32_t, int32_t, int32_t)>(&System::DateTimeParse::SetDateDMY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x242fa04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateDMY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.SetDateYDM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, int32_t, int32_t, int32_t)>(&System::DateTimeParse::SetDateYDM)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x242fa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateYDM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDefaultYear
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>)>(&System::DateTimeParse::GetDefaultYear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x242fafc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDefaultYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfNN)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x242fc60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfNNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfNNN)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x242fdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfMN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfMN)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2430088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfMN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetHebrewDayOfNM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetHebrewDayOfNM)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x24302ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetHebrewDayOfNM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfNM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfNM)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2430408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfMNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfMNN)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x243062c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfMNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfYNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfYNN)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2430910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfNNY
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDayOfNNY)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2430a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNNY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfYMN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetDayOfYMN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2430bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYMN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfYN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetDayOfYN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2430c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDayOfYM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetDayOfYM)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2430d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.AdjustTimeMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::DateTimeFormatInfo, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::AdjustTimeMark)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2430dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.AdjustHour
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<int32_t>, System::System__DateTimeParse__TM)>(&System::DateTimeParse::AdjustHour)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2430e90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustHour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__TM>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetTimeOfN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetTimeOfN)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2430ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetTimeOfNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetTimeOfNN)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2430f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetTimeOfNNN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetTimeOfNNN)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2430fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfNNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDateOfDSN
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetDateOfDSN)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2431030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfDSN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDateOfNDS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>)>(&System::DateTimeParse::GetDateOfNDS)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2431084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfNDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDateOfNNDS
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::GetDateOfNNDS)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2431138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfNNDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ProcessDateTimeSuffix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::DateTimeRawInfo>, ByRef<System::DateTimeToken>)>(&System::DateTimeParse::ProcessDateTimeSuffix)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x243135c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessDateTimeSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeToken>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ProcessHebrewTerminalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::System__DateTimeParse__DS, ByRef<System::__DTString>, ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::ProcessHebrewTerminalState)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2431454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessHebrewTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ProcessTerminalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::System__DateTimeParse__DS, ByRef<System::__DTString>, ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>, ByRef<System::DateTimeRawInfo>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x242eb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles)>(&System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2422cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::TimeSpan>)>(&System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2426064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTime>)>(&System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x242398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTime>, ByRef<System::TimeSpan>)>(&System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2426e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeFormatInfo, System::Globalization::DateTimeStyles, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x2431794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.DetermineTimeZoneAdjustments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<System::DateTimeResult>, System::Globalization::DateTimeStyles, bool)>(&System::DateTimeParse::DetermineTimeZoneAdjustments)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2432650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DetermineTimeZoneAdjustments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.DateTimeOffsetTimeZonePostProcessing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<System::DateTimeResult>, System::Globalization::DateTimeStyles)>(&System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x24328a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DateTimeOffsetTimeZonePostProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.AdjustTimeZoneToUniversal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>)>(&System::DateTimeParse::AdjustTimeZoneToUniversal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2432aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeZoneToUniversal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.AdjustTimeZoneToLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, bool)>(&System::DateTimeParse::AdjustTimeZoneToLocal)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2432b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeZoneToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseISO8601
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeRawInfo>, ByRef<System::__DTString>, System::Globalization::DateTimeStyles, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::ParseISO8601)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x2431ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseISO8601",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchHebrewDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, int32_t, ByRef<int32_t>)>(&System::DateTimeParse::MatchHebrewDigits)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2432df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchHebrewDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, int32_t, ByRef<int32_t>)>(&System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2432d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, int32_t, int32_t, ByRef<int32_t>)>(&System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2432ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseFractionExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, int32_t, ByRef<double_t>)>(&System::DateTimeParse::ParseFractionExact)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2433008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseFractionExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseSign
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<bool>)>(&System::DateTimeParse::ParseSign)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24331d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseTimeZoneOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, int32_t, ByRef<System::TimeSpan>)>(&System::DateTimeParse::ParseTimeZoneOffset)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2433238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseTimeZoneOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchAbbreviatedMonthName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::MatchAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x24333b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchMonthName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::MatchMonthName)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x24335dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchAbbreviatedDayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::MatchAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2433840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchDayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::MatchDayName)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x24339fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchEraName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<int32_t>)>(&System::DateTimeParse::MatchEraName)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2433bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchTimeMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<System::System__DateTimeParse__TM>)>(&System::DateTimeParse::MatchTimeMark)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2433e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__DateTimeParse__TM>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.MatchAbbreviatedTimeMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo, ByRef<System::System__DateTimeParse__TM>)>(&System::DateTimeParse::MatchAbbreviatedTimeMark)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24340b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__DateTimeParse__TM>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.CheckNewValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<int32_t>, int32_t, char16_t, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::CheckNewValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24341a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "CheckNewValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDateTimeNow
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::DateTimeStyles>)>(&System::DateTimeParse::GetDateTimeNow)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x242fb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateTimeNow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.CheckDefaultDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::DateTimeResult>, ByRef<System::Globalization::Calendar>, System::Globalization::DateTimeStyles)>(&System::DateTimeParse::CheckDefaultDateTime)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x24323d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "CheckDefaultDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::Calendar>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ExpandPredefinedFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(System::ReadOnlySpan_1<char16_t>, ByRef<System::Globalization::DateTimeFormatInfo>, ByRef<System::ParsingInfo>, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::ExpandPredefinedFormat)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2434260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ExpandPredefinedFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeFormatInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseJapaneseEraStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, System::Globalization::DateTimeFormatInfo)>(&System::DateTimeParse::ParseJapaneseEraStart)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2434588;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseJapaneseEraStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.ParseByFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<System::__DTString>, ByRef<System::ParsingInfo>, System::Globalization::DateTimeFormatInfo, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::ParseByFormat)> {
  constexpr static std::size_t size = 0xf78;
  constexpr static std::size_t addrs = 0x243466c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseByFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.TryParseQuoteString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, int32_t, System::Text::StringBuilder, ByRef<int32_t>)>(&System::DateTimeParse::TryParseQuoteString)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x24355e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseQuoteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.DoStrictParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::ReadOnlySpan_1<char16_t>, System::ReadOnlySpan_1<char16_t>, System::Globalization::DateTimeStyles, System::Globalization::DateTimeFormatInfo, ByRef<System::DateTimeResult>)>(&System::DateTimeParse::DoStrictParse)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x242ce58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DoStrictParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::DateTimeParse.GetDateTimeParseException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Exception (*)(ByRef<System::DateTimeResult>)>(&System::DateTimeParse::GetDateTimeParseException)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x242cc98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateTimeParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::DateTimeParse::__set_m_hebrewNumberParser(System::System__DateTimeParse__MatchNumberDelegate value)  {
::cordl_internals::setStaticField<System::System__DateTimeParse__MatchNumberDelegate, "m_hebrewNumberParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get>(std::forward<System::System__DateTimeParse__MatchNumberDelegate>(value));
}
 System::System__DateTimeParse__MatchNumberDelegate System::DateTimeParse::__get_m_hebrewNumberParser()  {
return ::cordl_internals::getStaticField<System::System__DateTimeParse__MatchNumberDelegate, "m_hebrewNumberParser", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get>();
}
 void System::DateTimeParse::__set_dateParsingStates(::ArrayW<::ArrayW<System::System__DateTimeParse__DS>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<System::System__DateTimeParse__DS>>, "dateParsingStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get>(std::forward<::ArrayW<::ArrayW<System::System__DateTimeParse__DS>>>(value));
}
 ::ArrayW<::ArrayW<System::System__DateTimeParse__DS>> System::DateTimeParse::__get_dateParsingStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<System::System__DateTimeParse__DS>>, "dateParsingStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get>();
}
 System::DateTime System::DateTimeParse::ParseExact(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, s, format, dtfi, style);
}
 System::DateTime System::DateTimeParse::ParseExact(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, s, format, dtfi, style, offset);
}
 bool System::DateTimeParse::TryParseExact(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::DateTime> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
 bool System::DateTimeParse::TryParseExact(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::DateTime> result, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result, offset);
}
 bool System::DateTimeParse::TryParseExact(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
 bool System::DateTimeParse::TryParseExactMultiple(System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::DateTime> result, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExactMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formats, dtfi, style, result, offset);
}
 bool System::DateTimeParse::TryParseExactMultiple(System::ReadOnlySpan_1<char16_t> s, ::ArrayW<::StringW> formats, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles style, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseExactMultiple",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formats, dtfi, style, result);
}
 bool System::DateTimeParse::MatchWord(ByRef<System::__DTString> str, ::StringW target)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, target);
}
 bool System::DateTimeParse::GetTimeZoneName(ByRef<System::__DTString> str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeZoneName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
 bool System::DateTimeParse::IsDigit(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "IsDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::DateTimeParse::ParseFraction(ByRef<System::__DTString> str, ByRef<double_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseFraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
 bool System::DateTimeParse::ParseTimeZone(ByRef<System::__DTString> str, ByRef<System::TimeSpan> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
 bool System::DateTimeParse::HandleTimeZone(ByRef<System::__DTString> str, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "HandleTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
 bool System::DateTimeParse::Lex(System::System__DateTimeParse__DS dps, ByRef<System::__DTString> str, ByRef<System::DateTimeToken> dtok, ByRef<System::DateTimeRawInfo> raw, ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeFormatInfo> dtfi, System::Globalization::DateTimeStyles styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Lex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeFormatInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, dtok, raw, result, dtfi, styles);
}
 System::Globalization::Calendar System::DateTimeParse::GetJapaneseCalendarDefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetJapaneseCalendarDefaultInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::Calendar, false>(nullptr, ___internal_method);
}
 System::Globalization::Calendar System::DateTimeParse::GetTaiwanCalendarDefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTaiwanCalendarDefaultInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::Calendar, false>(nullptr, ___internal_method);
}
 bool System::DateTimeParse::VerifyValidPunctuation(ByRef<System::__DTString> str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "VerifyValidPunctuation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str);
}
 bool System::DateTimeParse::GetYearMonthDayOrder(::StringW datePattern, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetYearMonthDayOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, datePattern, dtfi, order);
}
 bool System::DateTimeParse::GetYearMonthOrder(::StringW pattern, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetYearMonthOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, dtfi, order);
}
 bool System::DateTimeParse::GetMonthDayOrder(::StringW pattern, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> order)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetMonthDayOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pattern, dtfi, order);
}
 bool System::DateTimeParse::TryAdjustYear(ByRef<System::DateTimeResult> result, int32_t year, ByRef<int32_t> adjustedYear)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryAdjustYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, adjustedYear);
}
 bool System::DateTimeParse::SetDateYMD(ByRef<System::DateTimeResult> result, int32_t year, int32_t month, int32_t day)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateYMD",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, month, day);
}
 bool System::DateTimeParse::SetDateMDY(ByRef<System::DateTimeResult> result, int32_t month, int32_t day, int32_t year)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateMDY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, month, day, year);
}
 bool System::DateTimeParse::SetDateDMY(ByRef<System::DateTimeResult> result, int32_t day, int32_t month, int32_t year)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateDMY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, day, month, year);
}
 bool System::DateTimeParse::SetDateYDM(ByRef<System::DateTimeResult> result, int32_t year, int32_t day, int32_t month)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "SetDateYDM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, year, day, month);
}
 void System::DateTimeParse::GetDefaultYear(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDefaultYear",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, result, styles);
}
 bool System::DateTimeParse::GetDayOfNN(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfNNN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfMN(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfMN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
 bool System::DateTimeParse::GetHebrewDayOfNM(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetHebrewDayOfNM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfNM(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfMNN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfMNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfYNN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfNNY(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfNNY",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::GetDayOfYMN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYMN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetDayOfYN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetDayOfYM(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDayOfYM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 void System::DateTimeParse::AdjustTimeMark(System::Globalization::DateTimeFormatInfo dtfi, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, dtfi, raw);
}
 bool System::DateTimeParse::AdjustHour(ByRef<int32_t> hour, System::System__DateTimeParse__TM timeMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustHour",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__TM>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, hour, timeMark);
}
 bool System::DateTimeParse::GetTimeOfN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetTimeOfNN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetTimeOfNNN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetTimeOfNNN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetDateOfDSN(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfDSN",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetDateOfNDS(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfNDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw);
}
 bool System::DateTimeParse::GetDateOfNNDS(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateOfNNDS",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtfi);
}
 bool System::DateTimeParse::ProcessDateTimeSuffix(ByRef<System::DateTimeResult> result, ByRef<System::DateTimeRawInfo> raw, ByRef<System::DateTimeToken> dtok)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessDateTimeSuffix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeToken>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, raw, dtok);
}
 bool System::DateTimeParse::ProcessHebrewTerminalState(System::System__DateTimeParse__DS dps, ByRef<System::__DTString> str, ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessHebrewTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
 bool System::DateTimeParse::ProcessTerminalState(System::System__DateTimeParse__DS dps, ByRef<System::__DTString> str, ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles, ByRef<System::DateTimeRawInfo> raw, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ProcessTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::System__DateTimeParse__DS>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
 System::DateTime System::DateTimeParse::Parse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, s, dtfi, styles);
}
 System::DateTime System::DateTimeParse::Parse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles styles, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, s, dtfi, styles, offset);
}
 bool System::DateTimeParse::TryParse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles styles, ByRef<System::DateTime> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result);
}
 bool System::DateTimeParse::TryParse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles styles, ByRef<System::DateTime> result, ByRef<System::TimeSpan> offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTime>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result, offset);
}
 bool System::DateTimeParse::TryParse(System::ReadOnlySpan_1<char16_t> s, System::Globalization::DateTimeFormatInfo dtfi, System::Globalization::DateTimeStyles styles, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, dtfi, styles, result);
}
 bool System::DateTimeParse::DetermineTimeZoneAdjustments(ByRef<System::__DTString> str, ByRef<System::DateTimeResult> result, System::Globalization::DateTimeStyles styles, bool bTimeOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DetermineTimeZoneAdjustments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result, styles, bTimeOnly);
}
 bool System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(ByRef<System::__DTString> str, ByRef<System::DateTimeResult> result, System::Globalization::DateTimeStyles styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DateTimeOffsetTimeZonePostProcessing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result, styles);
}
 bool System::DateTimeParse::AdjustTimeZoneToUniversal(ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeZoneToUniversal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result);
}
 bool System::DateTimeParse::AdjustTimeZoneToLocal(ByRef<System::DateTimeResult> result, bool bTimeOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "AdjustTimeZoneToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, bTimeOnly);
}
 bool System::DateTimeParse::ParseISO8601(ByRef<System::DateTimeRawInfo> raw, ByRef<System::__DTString> str, System::Globalization::DateTimeStyles styles, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseISO8601",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, str, styles, result);
}
 bool System::DateTimeParse::MatchHebrewDigits(ByRef<System::__DTString> str, int32_t digitLen, ByRef<int32_t> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchHebrewDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, digitLen, number);
}
 bool System::DateTimeParse::ParseDigits(ByRef<System::__DTString> str, int32_t digitLen, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, digitLen, result);
}
 bool System::DateTimeParse::ParseDigits(ByRef<System::__DTString> str, int32_t minDigitLen, int32_t maxDigitLen, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, minDigitLen, maxDigitLen, result);
}
 bool System::DateTimeParse::ParseFractionExact(ByRef<System::__DTString> str, int32_t maxDigitLen, ByRef<double_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseFractionExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, maxDigitLen, result);
}
 bool System::DateTimeParse::ParseSign(ByRef<System::__DTString> str, ByRef<bool> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseSign",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, result);
}
 bool System::DateTimeParse::ParseTimeZoneOffset(ByRef<System::__DTString> str, int32_t len, ByRef<System::TimeSpan> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseTimeZoneOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, len, result);
}
 bool System::DateTimeParse::MatchAbbreviatedMonthName(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchMonthName(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchAbbreviatedDayName(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchDayName(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchEraName(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<int32_t> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchTimeMark(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<System::System__DateTimeParse__TM> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__DateTimeParse__TM>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::MatchAbbreviatedTimeMark(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi, ByRef<System::System__DateTimeParse__TM> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "MatchAbbreviatedTimeMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::System__DateTimeParse__TM>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi, result);
}
 bool System::DateTimeParse::CheckNewValue(ByRef<int32_t> currentValue, int32_t newValue, char16_t patternChar, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "CheckNewValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, currentValue, newValue, patternChar, result);
}
 System::DateTime System::DateTimeParse::GetDateTimeNow(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::DateTimeStyles> styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateTimeNow",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeStyles>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::DateTime, false>(nullptr, ___internal_method, result, styles);
}
 bool System::DateTimeParse::CheckDefaultDateTime(ByRef<System::DateTimeResult> result, ByRef<System::Globalization::Calendar> cal, System::Globalization::DateTimeStyles styles)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "CheckDefaultDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::Calendar>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, result, cal, styles);
}
 ::StringW System::DateTimeParse::ExpandPredefinedFormat(System::ReadOnlySpan_1<char16_t> format, ByRef<System::Globalization::DateTimeFormatInfo> dtfi, ByRef<System::ParsingInfo> parseInfo, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ExpandPredefinedFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Globalization::DateTimeFormatInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, format, dtfi, parseInfo, result);
}
 bool System::DateTimeParse::ParseJapaneseEraStart(ByRef<System::__DTString> str, System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseJapaneseEraStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, dtfi);
}
 bool System::DateTimeParse::ParseByFormat(ByRef<System::__DTString> str, ByRef<System::__DTString> format, ByRef<System::ParsingInfo> parseInfo, System::Globalization::DateTimeFormatInfo dtfi, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "ParseByFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::ParsingInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, format, parseInfo, dtfi, result);
}
 bool System::DateTimeParse::TryParseQuoteString(System::ReadOnlySpan_1<char16_t> format, int32_t pos, System::Text::StringBuilder result, ByRef<int32_t> returnValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "TryParseQuoteString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Text::StringBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, format, pos, result, returnValue);
}
 bool System::DateTimeParse::DoStrictParse(System::ReadOnlySpan_1<char16_t> s, System::ReadOnlySpan_1<char16_t> formatParam, System::Globalization::DateTimeStyles styles, System::Globalization::DateTimeFormatInfo dtfi, ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "DoStrictParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, formatParam, styles, dtfi, result);
}
 System::Exception System::DateTimeParse::GetDateTimeParseException(ByRef<System::DateTimeResult> result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::DateTimeParse>::get(),
                            "GetDateTimeParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::DateTimeResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Exception, false>(nullptr, ___internal_method, result);
}
