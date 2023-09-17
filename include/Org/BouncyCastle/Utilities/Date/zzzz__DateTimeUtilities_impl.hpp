#pragma once
namespace {
#include "Org/BouncyCastle/Utilities/Date/zzzz__DateTimeUtilities_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10cf590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.DateTimeToUnixMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::System::DateTime)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x10cf598;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "DateTimeToUnixMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.UnixMsToDateTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(int64_t)>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10cf6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "UnixMsToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities.CurrentUnixMs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10cf788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "CurrentUnixMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::__set_UnixEpoch(::System::DateTime value)  {
::cordl_internals::setStaticField<::System::DateTime, "UnixEpoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get>(std::forward<::System::DateTime>(value));
}
 ::System::DateTime ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::__get_UnixEpoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "UnixEpoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get>();
}
// Ctor Parameters []
 ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeUtilities()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DateTimeUtilities>())) {}
 void ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 int64_t ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::DateTimeToUnixMs(::System::DateTime dateTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "DateTimeToUnixMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, dateTime);
}
 ::System::DateTime ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::UnixMsToDateTime(int64_t unixMs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "UnixMsToDateTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, unixMs);
}
 int64_t ::Org::BouncyCastle::Utilities::Date::DateTimeUtilities::CurrentUnixMs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Date::DateTimeUtilities>::get(),
                            "CurrentUnixMs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
