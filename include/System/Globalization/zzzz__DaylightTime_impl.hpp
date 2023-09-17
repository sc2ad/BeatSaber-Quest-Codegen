#pragma once
namespace {
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Globalization::DaylightTime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DaylightTime::*)(::System::DateTime, ::System::DateTime, ::System::TimeSpan)>(&::System::Globalization::DaylightTime::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23e51a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e51e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_End
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_End)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e51e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DaylightTime.get_Delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Globalization::DaylightTime::*)()>(&::System::Globalization::DaylightTime::get_Delta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e51f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_Delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::System::Globalization::DaylightTime::__set__start(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Globalization::DaylightTime::__get__start() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Globalization::DaylightTime::__set__end(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::System::Globalization::DaylightTime::__get__end() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::System::Globalization::DaylightTime::__set__delta(::System::TimeSpan value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan ::System::Globalization::DaylightTime::__get__delta() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "start", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "end", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
 ::System::Globalization::DaylightTime::DaylightTime(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DaylightTime>(start, end, delta))) {}
 void ::System::Globalization::DaylightTime::_ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, start, end, delta);
}
 ::System::DateTime ::System::Globalization::DaylightTime::get_Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::System::Globalization::DaylightTime::get_End()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_End",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::TimeSpan ::System::Globalization::DaylightTime::get_Delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DaylightTime>::get(),
                            "get_Delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
