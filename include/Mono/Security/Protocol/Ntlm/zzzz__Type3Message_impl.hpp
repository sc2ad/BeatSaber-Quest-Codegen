#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_impl.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type3Message_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__Type2Message_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmAuthLevel_def.hpp"
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(Mono::Security::Protocol::Ntlm::Type2Message)>(&Mono::Security::Protocol::Ntlm::Type3Message::_ctor)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x229463c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Protocol::Ntlm::Type2Message>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.Finalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&Mono::Security::Protocol::Ntlm::Type3Message::Finalize)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2294828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Protocol::Ntlm::Type3Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.set_Domain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Domain)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2294908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Domain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.set_Password
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Password)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2294988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.set_Username
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Username)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2294990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Username",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::Type3Message::Decode)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2294998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Protocol::Ntlm::Type3Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.DecodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Mono::Security::Protocol::Ntlm::Type3Message::DecodeString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2294bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "DecodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.EncodeString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::EncodeString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2294c10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "EncodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::Type3Message.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&Mono::Security::Protocol::Ntlm::Type3Message::GetBytes)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0x2294ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Protocol::Ntlm::Type3Message),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__level(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value)  {
::cordl_internals::setInstanceField<Mono::Security::Protocol::Ntlm::NtlmAuthLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Protocol::Ntlm::NtlmAuthLevel>(value));
}
constexpr Mono::Security::Protocol::Ntlm::NtlmAuthLevel Mono::Security::Protocol::Ntlm::Type3Message::__get__level() const {
return ::cordl_internals::getInstanceField<Mono::Security::Protocol::Ntlm::NtlmAuthLevel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__challenge(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::__get__challenge() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__host(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Security::Protocol::Ntlm::Type3Message::__get__host() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__domain(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Security::Protocol::Ntlm::Type3Message::__get__domain() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__username(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Security::Protocol::Ntlm::Type3Message::__get__username() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__password(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW Mono::Security::Protocol::Ntlm::Type3Message::__get__password() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__type2(Mono::Security::Protocol::Ntlm::Type2Message value)  {
::cordl_internals::setInstanceField<Mono::Security::Protocol::Ntlm::Type2Message, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Protocol::Ntlm::Type2Message>(value));
}
constexpr Mono::Security::Protocol::Ntlm::Type2Message Mono::Security::Protocol::Ntlm::Type3Message::__get__type2() const {
return ::cordl_internals::getInstanceField<Mono::Security::Protocol::Ntlm::Type2Message, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__lm(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::__get__lm() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::Type3Message::__set__nt(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::__get__nt() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "type2", ty: "Mono::Security::Protocol::Ntlm::Type2Message", modifiers: "", def_value: None }]
 Mono::Security::Protocol::Ntlm::Type3Message::Type3Message(Mono::Security::Protocol::Ntlm::Type2Message type2)  : Mono::Security::Protocol::Ntlm::MessageBase(THROW_UNLESS(::il2cpp_utils::New<Type3Message>(type2))) {}
 void Mono::Security::Protocol::Ntlm::Type3Message::_ctor(Mono::Security::Protocol::Ntlm::Type2Message type2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Protocol::Ntlm::Type2Message>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type2);
}
 void Mono::Security::Protocol::Ntlm::Type3Message::Finalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "Finalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Security::Protocol::Ntlm::Type3Message::set_Domain(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Domain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Mono::Security::Protocol::Ntlm::Type3Message::set_Password(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Password",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Mono::Security::Protocol::Ntlm::Type3Message::set_Username(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "set_Username",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void Mono::Security::Protocol::Ntlm::Type3Message::Decode(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::StringW Mono::Security::Protocol::Ntlm::Type3Message::DecodeString(::ArrayW<uint8_t> buffer, int32_t offset, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "DecodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, buffer, offset, len);
}
 ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::EncodeString(::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "EncodeString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, text);
}
 ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::Type3Message::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::Type3Message>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
