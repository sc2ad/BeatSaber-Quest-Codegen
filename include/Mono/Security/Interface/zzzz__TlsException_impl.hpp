#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Mono/Security/Interface/zzzz__TlsException_def.hpp"
#include "Mono/Security/Interface/zzzz__Alert_def.hpp"
#include "Mono/Security/Interface/zzzz__AlertDescription_def.hpp"
//  Writing Method size for method: Mono::Security::Interface::TlsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::TlsException::*)(Mono::Security::Interface::Alert, ::StringW)>(&Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2295b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Interface::TlsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::Alert>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Interface::TlsException._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Interface::TlsException::*)(Mono::Security::Interface::AlertDescription, ::StringW)>(&Mono::Security::Interface::TlsException::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2295c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Interface::TlsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::AlertDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Interface::TlsException::__set_alert(Mono::Security::Interface::Alert value)  {
::cordl_internals::setInstanceField<Mono::Security::Interface::Alert, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Interface::Alert>(value));
}
constexpr Mono::Security::Interface::Alert Mono::Security::Interface::TlsException::__get_alert() const {
return ::cordl_internals::getInstanceField<Mono::Security::Interface::Alert, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "alert", ty: "Mono::Security::Interface::Alert", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 Mono::Security::Interface::TlsException::TlsException(Mono::Security::Interface::Alert alert, ::StringW message)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<TlsException>(alert, message))) {}
 void Mono::Security::Interface::TlsException::_ctor(Mono::Security::Interface::Alert alert, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Interface::TlsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::Alert>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, alert, message);
}
// Ctor Parameters [CppParam { name: "description", ty: "Mono::Security::Interface::AlertDescription", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
 Mono::Security::Interface::TlsException::TlsException(Mono::Security::Interface::AlertDescription description, ::StringW message)  : System::Exception(THROW_UNLESS(::il2cpp_utils::New<TlsException>(description, message))) {}
 void Mono::Security::Interface::TlsException::_ctor(Mono::Security::Interface::AlertDescription description, ::StringW message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Interface::TlsException>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::AlertDescription>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, description, message);
}
