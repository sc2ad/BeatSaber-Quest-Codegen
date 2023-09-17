#pragma once
namespace {
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertLevel_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Level
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::AlertLevel (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::get_Level)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22952c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "get_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.get_Description
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::Interface::AlertDescription (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::get_Description)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22952d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "get_Description",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::Alert::*)(::Mono::Security::Interface::AlertDescription)>(&::Mono::Security::Interface::Alert::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22952d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.inferAlertLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::inferAlertLevel)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2295344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "inferAlertLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::Alert.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::Interface::Alert::*)()>(&::Mono::Security::Interface::Alert::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2295384;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Interface::Alert),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::Interface::Alert::__set_level(::Mono::Security::Interface::AlertLevel value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::AlertLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::AlertLevel>(value));
}
constexpr ::Mono::Security::Interface::AlertLevel ::Mono::Security::Interface::Alert::__get_level() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::AlertLevel, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Interface::Alert::__set_description(::Mono::Security::Interface::AlertDescription value)  {
::cordl_internals::setInstanceField<::Mono::Security::Interface::AlertDescription, 0x11>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::Interface::AlertDescription>(value));
}
constexpr ::Mono::Security::Interface::AlertDescription ::Mono::Security::Interface::Alert::__get_description() const {
return ::cordl_internals::getInstanceField<::Mono::Security::Interface::AlertDescription, 0x11>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Mono::Security::Interface::AlertLevel ::Mono::Security::Interface::Alert::get_Level()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "get_Level",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertLevel, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::Interface::AlertDescription ::Mono::Security::Interface::Alert::get_Description()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "get_Description",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::AlertDescription, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "description", ty: "::Mono::Security::Interface::AlertDescription", modifiers: "", def_value: None }]
 ::Mono::Security::Interface::Alert::Alert(::Mono::Security::Interface::AlertDescription description)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<Alert>(description))) {}
 void ::Mono::Security::Interface::Alert::_ctor(::Mono::Security::Interface::AlertDescription description)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::Interface::AlertDescription>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, description);
}
 void ::Mono::Security::Interface::Alert::inferAlertLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "inferAlertLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Mono::Security::Interface::Alert::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::Alert>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
