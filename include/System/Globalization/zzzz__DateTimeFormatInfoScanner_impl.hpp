#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfoScanner_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__FORMATFLAGS_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern  System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::None{0};
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern  System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::FoundYearPatternFlag{1};
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern  System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::FoundMonthPatternFlag{2};
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern  System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::FoundDayPatternFlag{4};
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern  System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern::FoundYMDPatternFlag{7};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.get_KnownWords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<::StringW,::StringW> (*)()>(&System::Globalization::DateTimeFormatInfoScanner::get_KnownWords)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x23e401c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "get_KnownWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.SkipWhiteSpacesAndNonLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x23e441c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "SkipWhiteSpacesAndNonLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.AddDateWordOrPostfix
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, ::StringW)>(&System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x23e4518;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddDateWordOrPostfix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.AddDateWords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (System::Globalization::DateTimeFormatInfoScanner::*)(::StringW, int32_t, ::StringW)>(&System::Globalization::DateTimeFormatInfoScanner::AddDateWords)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23e4914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddDateWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.ScanRepeatChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, char16_t, int32_t, ByRef<int32_t>)>(&System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23e4aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ScanRepeatChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.AddIgnorableSymbols
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(&System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23e47c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddIgnorableSymbols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.ScanDateWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)(::StringW)>(&System::Globalization::DateTimeFormatInfoScanner::ScanDateWord)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x23e4b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ScanDateWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.GetDateWordsOfDTFI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfoScanner::*)(System::Globalization::DateTimeFormatInfo)>(&System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x23e2e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetDateWordsOfDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagGenitiveMonth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23e1248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagGenitiveMonth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23e1288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseSpaceInMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseSpaceInDayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23e132c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseSpaceInDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.GetFormatFlagUseHebrewCalendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::FORMATFLAGS (*)(int32_t)>(&System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23e135c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseHebrewCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.EqualStringArrays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23e4dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "EqualStringArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.ArrayElementsHaveSpace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23e50b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ArrayElementsHaveSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner.ArrayElementsBeginWithDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<::StringW>)>(&System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x23e4e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ArrayElementsBeginWithDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfoScanner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfoScanner::*)()>(&System::Globalization::DateTimeFormatInfoScanner::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23e2d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::DateTimeFormatInfoScanner::__set_m_dateWords(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> System::Globalization::DateTimeFormatInfoScanner::__get_m_dateWords() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::DateTimeFormatInfoScanner::__set_s_knownWords(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_knownWords", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> System::Globalization::DateTimeFormatInfoScanner::__get_s_knownWords()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "s_knownWords", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get>();
}
constexpr void System::Globalization::DateTimeFormatInfoScanner::__set__ymdFlags(System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern value)  {
::cordl_internals::setInstanceField<System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern>(value));
}
constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern System::Globalization::DateTimeFormatInfoScanner::__get__ymdFlags() const {
return ::cordl_internals::getInstanceField<System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> System::Globalization::DateTimeFormatInfoScanner::get_KnownWords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "get_KnownWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, false>(nullptr, ___internal_method);
}
 int32_t System::Globalization::DateTimeFormatInfoScanner::SkipWhiteSpacesAndNonLetter(::StringW pattern, int32_t currentIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "SkipWhiteSpacesAndNonLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pattern, currentIndex);
}
 void System::Globalization::DateTimeFormatInfoScanner::AddDateWordOrPostfix(::StringW formatPostfix, ::StringW str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddDateWordOrPostfix",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, formatPostfix, str);
}
 int32_t System::Globalization::DateTimeFormatInfoScanner::AddDateWords(::StringW pattern, int32_t index, ::StringW formatPostfix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddDateWords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method, pattern, index, formatPostfix);
}
 int32_t System::Globalization::DateTimeFormatInfoScanner::ScanRepeatChar(::StringW pattern, char16_t ch, int32_t index, ByRef<int32_t> count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ScanRepeatChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pattern, ch, index, count);
}
 void System::Globalization::DateTimeFormatInfoScanner::AddIgnorableSymbols(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "AddIgnorableSymbols",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, text);
}
 void System::Globalization::DateTimeFormatInfoScanner::ScanDateWord(::StringW pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ScanDateWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pattern);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfoScanner::GetDateWordsOfDTFI(System::Globalization::DateTimeFormatInfo dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetDateWordsOfDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeFormatInfo>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, dtfi);
}
 System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagGenitiveMonth(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames, ::ArrayW<::StringW> abbrevMonthNames, ::ArrayW<::StringW> genetiveAbbrevMonthNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagGenitiveMonth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
 System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames, ::ArrayW<::StringW> abbrevMonthNames, ::ArrayW<::StringW> genetiveAbbrevMonthNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseSpaceInMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, monthNames, genitveMonthNames, abbrevMonthNames, genetiveAbbrevMonthNames);
}
 System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW> dayNames, ::ArrayW<::StringW> abbrevDayNames)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseSpaceInDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, dayNames, abbrevDayNames);
}
 System::Globalization::FORMATFLAGS System::Globalization::DateTimeFormatInfoScanner::GetFormatFlagUseHebrewCalendar(int32_t calID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "GetFormatFlagUseHebrewCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::FORMATFLAGS, false>(nullptr, ___internal_method, calID);
}
 bool System::Globalization::DateTimeFormatInfoScanner::EqualStringArrays(::ArrayW<::StringW> array1, ::ArrayW<::StringW> array2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "EqualStringArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array1, array2);
}
 bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsHaveSpace(::ArrayW<::StringW> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ArrayElementsHaveSpace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array);
}
 bool System::Globalization::DateTimeFormatInfoScanner::ArrayElementsBeginWithDigit(::ArrayW<::StringW> array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            "ArrayElementsBeginWithDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, array);
}
 System::Globalization::DateTimeFormatInfoScanner System::Globalization::DateTimeFormatInfoScanner::New_ctor()  {
System::Globalization::DateTimeFormatInfoScanner o{THROW_UNLESS(::il2cpp_utils::New<System::Globalization::DateTimeFormatInfoScanner>())};
return o;
}
 void System::Globalization::DateTimeFormatInfoScanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfoScanner>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
