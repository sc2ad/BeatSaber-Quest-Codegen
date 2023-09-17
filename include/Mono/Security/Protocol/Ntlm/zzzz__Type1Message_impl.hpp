#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
namespace {
#include "Mono/Security/Protocol/Ntlm/zzzz__Type1Message_def.hpp"
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2293df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Domain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2293e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "set_Domain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.set_Host
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&::Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2293ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "set_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Protocol::Ntlm::Type1Message::*)(::ArrayW<uint8_t>)>(&::Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2293f74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Protocol::Ntlm::Type1Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Protocol::Ntlm::Type1Message.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&::Mono::Security::Protocol::Ntlm::Type1Message::GetBytes)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2294064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Security::Protocol::Ntlm::Type1Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::Protocol::Ntlm::Type1Message::__set__host(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::Protocol::Ntlm::Type1Message::__get__host() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::Protocol::Ntlm::Type1Message::__set__domain(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::Protocol::Ntlm::Type1Message::__get__domain() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Mono::Security::Protocol::Ntlm::Type1Message::Type1Message()  : ::Mono::Security::Protocol::Ntlm::MessageBase(THROW_UNLESS(::il2cpp_utils::New<Type1Message>())) {}
 void ::Mono::Security::Protocol::Ntlm::Type1Message::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::Mono::Security::Protocol::Ntlm::Type1Message::set_Domain(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "set_Domain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::Protocol::Ntlm::Type1Message::set_Host(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "set_Host",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void ::Mono::Security::Protocol::Ntlm::Type1Message::Decode(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::ArrayW<uint8_t> ::Mono::Security::Protocol::Ntlm::Type1Message::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Protocol::Ntlm::Type1Message>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
