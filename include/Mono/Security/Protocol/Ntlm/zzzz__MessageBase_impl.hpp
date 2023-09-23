#pragma once
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "Mono/Security/Protocol/Ntlm/zzzz__NtlmFlags_def.hpp"
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(&Mono::Security::Protocol::Ntlm::MessageBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22938c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.get_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::Protocol::Ntlm::NtlmFlags (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22938e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.set_Flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::MessageBase::*)(Mono::Security::Protocol::Ntlm::NtlmFlags)>(&Mono::Security::Protocol::Ntlm::MessageBase::set_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22938f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Protocol::Ntlm::NtlmFlags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22938f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.PrepareMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::MessageBase::*)(int32_t)>(&Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2293900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "PrepareMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.Decode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::MessageBase::Decode)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2293a00;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Protocol::Ntlm::MessageBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.CheckHeader
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Protocol::Ntlm::MessageBase::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2293ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "CheckHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Security::Protocol::Ntlm::MessageBase.GetBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::MessageBase::*)()>(&Mono::Security::Protocol::Ntlm::MessageBase::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Mono::Security::Protocol::Ntlm::MessageBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
 void Mono::Security::Protocol::Ntlm::MessageBase::__set_header(::ArrayW<uint8_t> value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "header", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get>(std::forward<::ArrayW<uint8_t>>(value));
}
 ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::__get_header()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "header", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get>();
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__set__type(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Security::Protocol::Ntlm::MessageBase::__get__type() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Mono::Security::Protocol::Ntlm::MessageBase::__set__flags(Mono::Security::Protocol::Ntlm::NtlmFlags value)  {
::cordl_internals::setInstanceField<Mono::Security::Protocol::Ntlm::NtlmFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Mono::Security::Protocol::Ntlm::NtlmFlags>(value));
}
constexpr Mono::Security::Protocol::Ntlm::NtlmFlags Mono::Security::Protocol::Ntlm::MessageBase::__get__flags() const {
return ::cordl_internals::getInstanceField<Mono::Security::Protocol::Ntlm::NtlmFlags, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "messageType", ty: "int32_t", modifiers: "", def_value: None }]
 Mono::Security::Protocol::Ntlm::MessageBase::MessageBase(int32_t messageType)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<MessageBase>(messageType))) {}
 void Mono::Security::Protocol::Ntlm::MessageBase::_ctor(int32_t messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, messageType);
}
 Mono::Security::Protocol::Ntlm::NtlmFlags Mono::Security::Protocol::Ntlm::MessageBase::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "get_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Mono::Security::Protocol::Ntlm::NtlmFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 void Mono::Security::Protocol::Ntlm::MessageBase::set_Flags(Mono::Security::Protocol::Ntlm::NtlmFlags value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "set_Flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Security::Protocol::Ntlm::NtlmFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 int32_t Mono::Security::Protocol::Ntlm::MessageBase::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::PrepareMessage(int32_t messageSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "PrepareMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, messageSize);
}
 void Mono::Security::Protocol::Ntlm::MessageBase::Decode(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "Decode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, message);
}
 bool Mono::Security::Protocol::Ntlm::MessageBase::CheckHeader(::ArrayW<uint8_t> message)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "CheckHeader",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, message);
}
 ::ArrayW<uint8_t> Mono::Security::Protocol::Ntlm::MessageBase::GetBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Security::Protocol::Ntlm::MessageBase>::get(),
                            "GetBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
