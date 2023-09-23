#pragma once
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsStream_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsSettings_def.hpp"
#include "System/Net/Security/zzzz__SslStream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsContext_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
//  Writing Method size for method: Mono::Unity::UnityTlsStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Unity::UnityTlsStream::*)(System::IO::Stream, bool, System::Net::Security::SslStream, Mono::Security::Interface::MonoTlsSettings, Mono::Net::Security::MobileTlsProvider)>(&Mono::Unity::UnityTlsStream::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x268b378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Unity::UnityTlsStream.CreateContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Net::Security::MobileTlsContext (Mono::Unity::UnityTlsStream::*)(Mono::Net::Security::MonoSslAuthenticationOptions)>(&Mono::Unity::UnityTlsStream::CreateContext)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x268bec8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Unity::UnityTlsStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsStream>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "System::Net::Security::SslStream", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Net::Security::MobileTlsProvider", modifiers: "", def_value: None }]
 Mono::Unity::UnityTlsStream::UnityTlsStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider)  : Mono::Net::Security::MobileAuthenticatedStream(THROW_UNLESS(::il2cpp_utils::New<UnityTlsStream>(innerStream, leaveInnerStreamOpen, owner, settings, provider))) {}
 void Mono::Unity::UnityTlsStream::_ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream owner, Mono::Security::Interface::MonoTlsSettings settings, Mono::Net::Security::MobileTlsProvider provider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Net::Security::SslStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Interface::MonoTlsSettings>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MobileTlsProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, innerStream, leaveInnerStreamOpen, owner, settings, provider);
}
 Mono::Net::Security::MobileTlsContext Mono::Unity::UnityTlsStream::CreateContext(Mono::Net::Security::MonoSslAuthenticationOptions options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Unity::UnityTlsStream>::get(),
                            "CreateContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Net::Security::MonoSslAuthenticationOptions>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Net::Security::MobileTlsContext, false>(const_cast<void*>(instance), ___internal_method, options);
}
