#pragma once
#include "System/zzzz__TimeZone_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
//  Writing Method size for method: System::TimeZone.get_InternalSyncObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (*)()>(&System::TimeZone::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2458ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TimeZone._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::TimeZone::*)()>(&System::TimeZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2458b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TimeZone.get_CurrentTimeZone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeZone (*)()>(&System::TimeZone::get_CurrentTimeZone)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2458b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "get_CurrentTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TimeZone.GetUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::TimeZone::*)(System::DateTime)>(&System::TimeZone::GetUtcOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::TimeZone),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TimeZone.GetDaylightChanges
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Globalization::DaylightTime (System::TimeZone::*)(int32_t)>(&System::TimeZone::GetDaylightChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(System::TimeZone),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: System::TimeZone.CalculateUtcOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)(System::DateTime, System::Globalization::DaylightTime)>(&System::TimeZone::CalculateUtcOffset)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2458cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "CalculateUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DaylightTime>::get()}
                        )));
    return ___internal_method;
  }
};
 void System::TimeZone::__set_currentTimeZone(System::TimeZone value)  {
::cordl_internals::setStaticField<System::TimeZone, "currentTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get>(std::forward<System::TimeZone>(value));
}
 System::TimeZone System::TimeZone::__get_currentTimeZone()  {
return ::cordl_internals::getStaticField<System::TimeZone, "currentTimeZone", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get>();
}
 void System::TimeZone::__set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get>(std::forward<::bs_hook::Il2CppWrapperType>(value));
}
 ::bs_hook::Il2CppWrapperType System::TimeZone::__get_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::bs_hook::Il2CppWrapperType, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get>();
}
 ::bs_hook::Il2CppWrapperType System::TimeZone::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "get_InternalSyncObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(nullptr, ___internal_method);
}
 System::TimeZone System::TimeZone::New_ctor()  {
System::TimeZone o{THROW_UNLESS(::il2cpp_utils::New<System::TimeZone>())};
return o;
}
 void System::TimeZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::TimeZone System::TimeZone::get_CurrentTimeZone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "get_CurrentTimeZone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeZone, false>(nullptr, ___internal_method);
}
 System::TimeSpan System::TimeZone::GetUtcOffset(System::DateTime time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "GetUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method, time);
}
 System::Globalization::DaylightTime System::TimeZone::GetDaylightChanges(int32_t year)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "GetDaylightChanges",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Globalization::DaylightTime, false>(const_cast<void*>(instance), ___internal_method, year);
}
 System::TimeSpan System::TimeZone::CalculateUtcOffset(System::DateTime time, System::Globalization::DaylightTime daylightTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<System::TimeZone>::get(),
                            "CalculateUtcOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Globalization::DaylightTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::TimeSpan, false>(nullptr, ___internal_method, time, daylightTimes);
}
