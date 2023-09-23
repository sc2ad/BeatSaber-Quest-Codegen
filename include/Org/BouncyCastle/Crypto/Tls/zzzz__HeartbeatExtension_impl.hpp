#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__HeartbeatExtension_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::HeartbeatExtension._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(uint8_t)>(&Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xf0455c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.get_Mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)()>(&Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf04608;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xf04610;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::HeartbeatExtension),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::HeartbeatExtension.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension (*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xf0467c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__set_mMode(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::__get_mMode() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mode", ty: "uint8_t", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::HeartbeatExtension(uint8_t mode)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<HeartbeatExtension>(mode))) {}
 void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::_ctor(uint8_t mode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mode);
}
 uint8_t Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            "get_Mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Encode(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 Org::BouncyCastle::Crypto::Tls::HeartbeatExtension Org::BouncyCastle::Crypto::Tls::HeartbeatExtension::Parse(System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::HeartbeatExtension, false>(nullptr, ___internal_method, input);
}
