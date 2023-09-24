#pragma once
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/zzzz____DTString_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__MonthNameStyles_def.hpp"
//  Writing Method size for method: System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::*)(::StringW, System::TokenType, int32_t)>(&System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23e3e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__set_tokenString(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__get_tokenString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__set_tokenType(System::TokenType value)  {
::cordl_internals::setInstanceField<System::TokenType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::TokenType>(value));
}
constexpr System::TokenType System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__get_tokenType() const {
return ::cordl_internals::getInstanceField<System::TokenType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__set_tokenValue(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::__get_tokenValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::New_ctor(::StringW tokenString, System::TokenType tokenType, int32_t tokenValue)  {
System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue o{THROW_UNLESS(::il2cpp_utils::New<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>(tokenString, tokenType, tokenValue))};
return o;
}
 void System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue::_ctor(::StringW tokenString, System::TokenType tokenType, int32_t tokenValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tokenString, tokenType, tokenValue);
}
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_CultureName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_CultureName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23de3b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_Culture
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CultureInfo (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_Culture)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23de3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_Culture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_LanguageName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_LanguageName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23de468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LanguageName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23de494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedDayOfWeekNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNamesCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23de4a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedDayOfWeekNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23de4f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetDayOfWeekNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNamesCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23de508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetDayOfWeekNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23de554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNamesCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23de568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedMonthNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23de5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetMonthNamesCore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23de5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23de614;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(System::Globalization::CultureData, System::Globalization::Calendar)>(&System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x23de8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.InitializeOverridableProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(System::Globalization::CultureData, int32_t)>(&System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23de7b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InitializeOverridableProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_InvariantInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (*)()>(&System::Globalization::DateTimeFormatInfo::get_InvariantInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x23debc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_InvariantInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_CurrentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (*)()>(&System::Globalization::DateTimeFormatInfo::get_CurrentInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x23dec90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CurrentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (*)(System::IFormatProvider)>(&System::Globalization::DateTimeFormatInfo::GetInstance)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23ded9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Globalization::DateTimeFormatInfo::*)(System::Type)>(&System::Globalization::DateTimeFormatInfo::GetFormat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x23def5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::Clone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23deff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AMDesignator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AMDesignator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23df0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AMDesignator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_Calendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::Calendar (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23df120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.set_Calendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(System::Globalization::Calendar)>(&System::Globalization::DateTimeFormatInfo::set_Calendar)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x23de914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "set_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_OptionalCalendars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Globalization::CalendarId> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_OptionalCalendars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23df1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_OptionalCalendars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_EraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_EraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_EraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetEraName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&System::Globalization::DateTimeFormatInfo::GetEraName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23df260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AbbreviatedEraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df33c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetAbbreviatedEraName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x23df390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AbbreviatedEnglishEraNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedEnglishEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_DateSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_DateSeparator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df4d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_FullDateTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23df524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_LongDatePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_LongDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23df598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LongDatePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_LongTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_LongTimePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23df5d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LongTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_MonthDayPattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_MonthDayPattern)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthDayPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_PMDesignator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_PMDesignator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23df6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_PMDesignator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_RFC1123Pattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23df714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_RFC1123Pattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_ShortDatePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_ShortDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23df754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_ShortDatePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_ShortTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_ShortTimePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23df7e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_ShortTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_SortableDateTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23df850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_SortableDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_GeneralShortTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23df890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_GeneralShortTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_GeneralLongTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23df904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_GeneralLongTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_DateTimeOffsetPattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x23df978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DateTimeOffsetPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_TimeSeparator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23dfb14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_TimeSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UniversalSortableDateTimePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23dfb40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UniversalSortableDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_YearMonthPattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_YearMonthPattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23dfb80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_YearMonthPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AbbreviatedDayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23dfc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_DayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_DayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23dfc94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AbbreviatedMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23dfd18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_MonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_MonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23dfd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_HasSpacesInMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23dfe20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasSpacesInMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_HasSpacesInDayNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23dfe60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasSpacesInDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetMonthName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(int32_t, System::Globalization::MonthNameStyles, bool)>(&System::Globalization::DateTimeFormatInfo::internalGetMonthName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23dfe88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::MonthNameStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetGenitiveMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)(bool)>(&System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23dfff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetGenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.internalGetLeapYearMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23e0088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetLeapYearMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetAbbreviatedDayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(System::DayOfWeek)>(&System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23e00dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DayOfWeek>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetCombinedPatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, ::ArrayW<::StringW>, ::StringW)>(&System::Globalization::DateTimeFormatInfo::GetCombinedPatterns)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23e01dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetCombinedPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetAllDateTimePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)(char16_t)>(&System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x23e0348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAllDateTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetDayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(System::DayOfWeek)>(&System::Globalization::DateTimeFormatInfo::GetDayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23e0908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DayOfWeek>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetAbbreviatedMonthName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23e0a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetMonthName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)(int32_t)>(&System::Globalization::DateTimeFormatInfo::GetMonthName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x23e0b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetMergedPatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>, ::StringW)>(&System::Globalization::DateTimeFormatInfo::GetMergedPatterns)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x23e0c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetMergedPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AllYearMonthPatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e0894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllYearMonthPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AllShortDatePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e06c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllShortDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AllShortTimePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e07ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllShortTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AllLongDatePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e0738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllLongDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_AllLongTimePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e0820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllLongTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UnclonedYearMonthPatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23dfbbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedYearMonthPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UnclonedShortDatePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedShortDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UnclonedLongDatePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x23df610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedLongDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UnclonedShortTimePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23df820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedShortTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_UnclonedLongTimePatterns
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23df664;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedLongTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_IsReadOnly
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x23df128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_MonthGenitiveNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23e0df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthGenitiveNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_FullTimeSpanPositivePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23e0e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullTimeSpanPositivePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_FullTimeSpanNegativePattern
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23e0f48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullTimeSpanNegativePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_CompareInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::CompareInfo (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23e0fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CompareInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.ValidateStyles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Globalization::DateTimeStyles, ::StringW)>(&System::Globalization::DateTimeFormatInfo::ValidateStyles)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23e1034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "ValidateStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_FormatFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatFlags (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_FormatFlags)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23dfe48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FormatFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.InitializeFormatFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatFlags (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::InitializeFormatFlags)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23e110c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InitializeFormatFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_HasForceTwoDigitYears
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23e136c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasForceTwoDigitYears",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.get_HasYearMonthAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23e13a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasYearMonthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.YearMonthAdjustment
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)(ByRef<int32_t>, ByRef<int32_t>, bool)>(&System::Globalization::DateTimeFormatInfo::YearMonthAdjustment)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23e13c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "YearMonthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetJapaneseCalendarDTFI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (*)()>(&System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x23e14fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetJapaneseCalendarDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.GetTaiwanCalendarDTFI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DateTimeFormatInfo (*)()>(&System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x23e1690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetTaiwanCalendarDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.ClearTokenHashTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::ClearTokenHashTable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23df1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "ClearTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.CreateTokenHashTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> (System::Globalization::DateTimeFormatInfo::*)()>(&System::Globalization::DateTimeFormatInfo::CreateTokenHashTable)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x23e1824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "CreateTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.PopulateSpecialTokenHashTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, ByRef<bool>)>(&System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x23e2410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "PopulateSpecialTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.IsJapaneseCalendar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Globalization::Calendar)>(&System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x23e30d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsJapaneseCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.AddMonthNames
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, ::StringW)>(&System::Globalization::DateTimeFormatInfo::AddMonthNames)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x23e2cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "AddMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.TryParseHebrewNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<System::__DTString>, ByRef<bool>, ByRef<int32_t>)>(&System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x23e3210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "TryParseHebrewNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.IsHebrewChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&System::Globalization::DateTimeFormatInfo::IsHebrewChar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23e35b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsHebrewChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.IsAllowedJapaneseTokenFollowedByNonSpaceLetter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)(::StringW, char16_t)>(&System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23e35c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsAllowedJapaneseTokenFollowedByNonSpaceLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.Tokenize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)(System::TokenType, ByRef<System::TokenType>, ByRef<int32_t>, ByRef<System::__DTString>)>(&System::Globalization::DateTimeFormatInfo::Tokenize)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x23e36cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "Tokenize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TokenType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.InsertAtCurrentHashNode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, ::StringW, char16_t, System::TokenType, int32_t, int32_t, int32_t, int32_t)>(&System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23e3c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InsertAtCurrentHashNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.InsertHash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Globalization::DateTimeFormatInfo::*)(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, ::StringW, System::TokenType, int32_t)>(&System::Globalization::DateTimeFormatInfo::InsertHash)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x23e2114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InsertHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::Globalization::DateTimeFormatInfo.CompareStringIgnoreCaseOptimized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Globalization::DateTimeFormatInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(&System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23e3e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "CompareStringIgnoreCaseOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::IFormatProvider
constexpr  System::Globalization::DateTimeFormatInfo::operator System::IFormatProvider() const noexcept {
return System::IFormatProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::ICloneable
constexpr  System::Globalization::DateTimeFormatInfo::operator System::ICloneable() const noexcept {
return System::ICloneable(::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::DateTimeFormatInfo::__set_s_invariantInfo(System::Globalization::DateTimeFormatInfo value)  {
::cordl_internals::setStaticField<System::Globalization::DateTimeFormatInfo, "s_invariantInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>(std::forward<System::Globalization::DateTimeFormatInfo>(value));
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::__get_s_invariantInfo()  {
return ::cordl_internals::getStaticField<System::Globalization::DateTimeFormatInfo, "s_invariantInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>();
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__cultureData(System::Globalization::CultureData value)  {
::cordl_internals::setInstanceField<System::Globalization::CultureData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CultureData>(value));
}
constexpr System::Globalization::CultureData System::Globalization::DateTimeFormatInfo::__get__cultureData() const {
return ::cordl_internals::getInstanceField<System::Globalization::CultureData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__langName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get__langName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__compareInfo(System::Globalization::CompareInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CompareInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CompareInfo>(value));
}
constexpr System::Globalization::CompareInfo System::Globalization::DateTimeFormatInfo::__get__compareInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::CompareInfo, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__cultureInfo(System::Globalization::CultureInfo value)  {
::cordl_internals::setInstanceField<System::Globalization::CultureInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::CultureInfo>(value));
}
constexpr System::Globalization::CultureInfo System::Globalization::DateTimeFormatInfo::__get__cultureInfo() const {
return ::cordl_internals::getInstanceField<System::Globalization::CultureInfo, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_amDesignator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_amDesignator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_pmDesignator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_pmDesignator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dateSeparator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_dateSeparator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_generalShortTimePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_generalShortTimePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_generalLongTimePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_generalLongTimePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_timeSeparator(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_timeSeparator() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_monthDayPattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_monthDayPattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dateTimeOffsetPattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_dateTimeOffsetPattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_calendar(System::Globalization::Calendar value)  {
::cordl_internals::setInstanceField<System::Globalization::Calendar, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::Calendar>(value));
}
constexpr System::Globalization::Calendar System::Globalization::DateTimeFormatInfo::__get_calendar() const {
return ::cordl_internals::getInstanceField<System::Globalization::Calendar, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_firstDayOfWeek(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::DateTimeFormatInfo::__get_firstDayOfWeek() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_calendarWeekRule(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Globalization::DateTimeFormatInfo::__get_calendarWeekRule() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_fullDateTimePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_fullDateTimePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_abbreviatedDayNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_abbreviatedDayNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_superShortDayNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_m_superShortDayNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dayNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_dayNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_abbreviatedMonthNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_abbreviatedMonthNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_monthNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_monthNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_genitiveMonthNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_genitiveMonthNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_genitiveAbbreviatedMonthNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_m_genitiveAbbreviatedMonthNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_leapYearMonthNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_leapYearMonthNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_longDatePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_longDatePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_shortDatePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_shortDatePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_yearMonthPattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_yearMonthPattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_longTimePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_longTimePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_shortTimePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get_shortTimePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allYearMonthPatterns(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_allYearMonthPatterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allShortDatePatterns(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_allShortDatePatterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allLongDatePatterns(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_allLongDatePatterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allShortTimePatterns(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_allShortTimePatterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allLongTimePatterns(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_allLongTimePatterns() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x118>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_eraNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_m_eraNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x120>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_abbrevEraNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_m_abbrevEraNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x128>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_abbrevEnglishEraNames(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::__get_m_abbrevEnglishEraNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x130>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_optionalCalendars(::ArrayW<System::Globalization::CalendarId> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Globalization::CalendarId>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Globalization::CalendarId>>(value));
}
constexpr ::ArrayW<System::Globalization::CalendarId> System::Globalization::DateTimeFormatInfo::__get_optionalCalendars() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Globalization::CalendarId>, 0x138>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__isReadOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x140>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool System::Globalization::DateTimeFormatInfo::__get__isReadOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x140>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_formatFlags(System::Globalization::DateTimeFormatFlags value)  {
::cordl_internals::setInstanceField<System::Globalization::DateTimeFormatFlags, 0x144>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Globalization::DateTimeFormatFlags>(value));
}
constexpr System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::__get_formatFlags() const {
return ::cordl_internals::getInstanceField<System::Globalization::DateTimeFormatFlags, 0x144>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::DateTimeFormatInfo::__set_s_monthSpaces(::ArrayW<char16_t> value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_monthSpaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>(std::forward<::ArrayW<char16_t>>(value));
}
 ::ArrayW<char16_t> System::Globalization::DateTimeFormatInfo::__get_s_monthSpaces()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_monthSpaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>();
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__fullTimeSpanPositivePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x148>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanPositivePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x148>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__fullTimeSpanNegativePattern(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x150>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanNegativePattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x150>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr System::Globalization::DateTimeStyles  System::Globalization::DateTimeFormatInfo::InvalidDateTimeStyles{-256};
constexpr void System::Globalization::DateTimeFormatInfo::__set__dtfiTokenHash(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> value)  {
::cordl_internals::setInstanceField<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>(value));
}
constexpr ::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> System::Globalization::DateTimeFormatInfo::__get__dtfiTokenHash() const {
return ::cordl_internals::getInstanceField<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, 0x158>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void System::Globalization::DateTimeFormatInfo::__set_s_jajpDTFI(System::Globalization::DateTimeFormatInfo value)  {
::cordl_internals::setStaticField<System::Globalization::DateTimeFormatInfo, "s_jajpDTFI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>(std::forward<System::Globalization::DateTimeFormatInfo>(value));
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::__get_s_jajpDTFI()  {
return ::cordl_internals::getStaticField<System::Globalization::DateTimeFormatInfo, "s_jajpDTFI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>();
}
 void System::Globalization::DateTimeFormatInfo::__set_s_zhtwDTFI(System::Globalization::DateTimeFormatInfo value)  {
::cordl_internals::setStaticField<System::Globalization::DateTimeFormatInfo, "s_zhtwDTFI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>(std::forward<System::Globalization::DateTimeFormatInfo>(value));
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::__get_s_zhtwDTFI()  {
return ::cordl_internals::getStaticField<System::Globalization::DateTimeFormatInfo, "s_zhtwDTFI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get>();
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_CultureName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CultureName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CultureInfo System::Globalization::DateTimeFormatInfo::get_Culture()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_Culture",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CultureInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_LanguageName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LanguageName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedDayOfWeekNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedDayOfWeekNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetDayOfWeekNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetDayOfWeekNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetAbbreviatedMonthNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetMonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthNamesCore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::New_ctor()  {
System::Globalization::DateTimeFormatInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Globalization::DateTimeFormatInfo>())};
return o;
}
 void System::Globalization::DateTimeFormatInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::New_ctor(System::Globalization::CultureData cultureData, System::Globalization::Calendar cal)  {
System::Globalization::DateTimeFormatInfo o{THROW_UNLESS(::il2cpp_utils::New<System::Globalization::DateTimeFormatInfo>(cultureData, cal))};
return o;
}
 void System::Globalization::DateTimeFormatInfo::_ctor(System::Globalization::CultureData cultureData, System::Globalization::Calendar cal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cultureData, cal);
}
 void System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties(System::Globalization::CultureData cultureData, int32_t calendarId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InitializeOverridableProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::CultureData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cultureData, calendarId);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::get_InvariantInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_InvariantInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::get_CurrentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CurrentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::GetInstance(System::IFormatProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IFormatProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(nullptr, ___internal_method, provider);
}
 ::bs_hook::Il2CppWrapperType System::Globalization::DateTimeFormatInfo::GetFormat(System::Type formatType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, formatType);
}
 ::bs_hook::Il2CppWrapperType System::Globalization::DateTimeFormatInfo::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_AMDesignator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AMDesignator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::Calendar System::Globalization::DateTimeFormatInfo::get_Calendar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::Calendar, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::DateTimeFormatInfo::set_Calendar(System::Globalization::Calendar value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "set_Calendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::ArrayW<System::Globalization::CalendarId> System::Globalization::DateTimeFormatInfo::get_OptionalCalendars()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_OptionalCalendars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Globalization::CalendarId>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_EraNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_EraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetEraName(int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, era);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName(int32_t era)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedEraName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, era);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedEnglishEraNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_DateSeparator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DateSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_LongDatePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LongDatePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_LongTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_LongTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_MonthDayPattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthDayPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_PMDesignator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_PMDesignator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_RFC1123Pattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_ShortDatePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_ShortDatePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_ShortTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_ShortTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_SortableDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_GeneralShortTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_GeneralLongTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DateTimeOffsetPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_TimeSeparator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_TimeSeparator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UniversalSortableDateTimePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_YearMonthPattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_YearMonthPattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_DayNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_DayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AbbreviatedMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_MonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasSpacesInMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasSpacesInDayNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::internalGetMonthName(int32_t month, System::Globalization::MonthNameStyles style, bool abbreviated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::MonthNameStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, month, style, abbreviated);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames(bool abbreviated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetGenitiveMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, abbreviated);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "internalGetLeapYearMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName(System::DayOfWeek dayofweek)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DayOfWeek>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, dayofweek);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetCombinedPatterns(::ArrayW<::StringW> patterns1, ::ArrayW<::StringW> patterns2, ::StringW connectString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetCombinedPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, patterns1, patterns2, connectString);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns(char16_t format)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAllDateTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method, format);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetDayName(System::DayOfWeek dayofweek)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetDayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DayOfWeek>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, dayofweek);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName(int32_t month)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetAbbreviatedMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, month);
}
 ::StringW System::Globalization::DateTimeFormatInfo::GetMonthName(int32_t month)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetMonthName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, month);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::GetMergedPatterns(::ArrayW<::StringW> patterns, ::StringW defaultPattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetMergedPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(nullptr, ___internal_method, patterns, defaultPattern);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllYearMonthPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllShortDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllShortTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllLongDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_AllLongTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedYearMonthPatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedShortDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedLongDatePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedShortTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_UnclonedLongTimePatterns",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_IsReadOnly",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::StringW> System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_MonthGenitiveNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullTimeSpanPositivePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FullTimeSpanNegativePattern",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::CompareInfo System::Globalization::DateTimeFormatInfo::get_CompareInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_CompareInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::CompareInfo, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::DateTimeFormatInfo::ValidateStyles(System::Globalization::DateTimeStyles style, ::StringW parameterName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "ValidateStyles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DateTimeStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, style, parameterName);
}
 System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::get_FormatFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_FormatFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::InitializeFormatFlags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InitializeFormatFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasForceTwoDigitYears",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "get_HasYearMonthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool System::Globalization::DateTimeFormatInfo::YearMonthAdjustment(ByRef<int32_t> year, ByRef<int32_t> month, bool parsedMonthName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "YearMonthAdjustment",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, year, month, parsedMonthName);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetJapaneseCalendarDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(nullptr, ___internal_method);
}
 System::Globalization::DateTimeFormatInfo System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "GetTaiwanCalendarDTFI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DateTimeFormatInfo, false>(nullptr, ___internal_method);
}
 void System::Globalization::DateTimeFormatInfo::ClearTokenHashTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "ClearTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> System::Globalization::DateTimeFormatInfo::CreateTokenHashTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "CreateTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>, false>(const_cast<void*>(instance), ___internal_method);
}
 void System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> temp, ByRef<bool> useDateSepAsIgnorableSymbol)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "PopulateSpecialTokenHashTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, temp, useDateSepAsIgnorableSymbol);
}
 bool System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar(System::Globalization::Calendar calendar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsJapaneseCalendar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::Calendar>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, calendar);
}
 void System::Globalization::DateTimeFormatInfo::AddMonthNames(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> temp, ::StringW monthPostfix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "AddMonthNames",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, temp, monthPostfix);
}
 bool System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber(ByRef<System::__DTString> str, ByRef<bool> badFormat, ByRef<int32_t> number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "TryParseHebrewNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, badFormat, number);
}
 bool System::Globalization::DateTimeFormatInfo::IsHebrewChar(char16_t ch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsHebrewChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
 bool System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter(::StringW tokenString, char16_t nextCh)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "IsAllowedJapaneseTokenFollowedByNonSpaceLetter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, tokenString, nextCh);
}
 bool System::Globalization::DateTimeFormatInfo::Tokenize(System::TokenType TokenMask, ByRef<System::TokenType> tokenType, ByRef<int32_t> tokenValue, ByRef<System::__DTString> str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "Tokenize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::TokenType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::__DTString>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, TokenMask, tokenType, tokenValue, str);
}
 void System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> hashTable, ::StringW str, char16_t ch, System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InsertAtCurrentHashNode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashTable, str, ch, tokenType, tokenValue, pos, hashcode, hashProbe);
}
 void System::Globalization::DateTimeFormatInfo::InsertHash(::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue> hashTable, ::StringW str, System::TokenType tokenType, int32_t tokenValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "InsertHash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<System::Globalization::System__Globalization__DateTimeFormatInfo__TokenHashValue>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hashTable, str, tokenType, tokenValue);
}
 bool System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::Globalization::DateTimeFormatInfo>::get(),
                            "CompareStringIgnoreCaseOptimized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, string1, offset1, length1, string2, offset2, length2);
}
