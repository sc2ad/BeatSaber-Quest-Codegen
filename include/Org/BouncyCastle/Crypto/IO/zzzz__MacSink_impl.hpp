#pragma once
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::IO::MacSink._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IO::MacSink::*)(Org::BouncyCastle::Crypto::IMac)>(&Org::BouncyCastle::Crypto::IO::MacSink::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe7c140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::IO::MacSink.get_Mac
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::IMac (Org::BouncyCastle::Crypto::IO::MacSink::*)()>(&Org::BouncyCastle::Crypto::IO::MacSink::get_Mac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7c168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IO::MacSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::IO::MacSink.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IO::MacSink::*)(uint8_t)>(&Org::BouncyCastle::Crypto::IO::MacSink::WriteByte)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe7c170;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IO::MacSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::IO::MacSink.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::IO::MacSink::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Crypto::IO::MacSink::Write)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xe7c21c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::IO::MacSink),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::IO::MacSink::__set_mMac(Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IMac, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crypto::IO::MacSink::__get_mMac() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IMac, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::IO::MacSink::MacSink(Org::BouncyCastle::Crypto::IMac mac)  : Org::BouncyCastle::Utilities::IO::BaseOutputStream(THROW_UNLESS(::il2cpp_utils::New<MacSink>(mac))) {}
 void Org::BouncyCastle::Crypto::IO::MacSink::_ctor(Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mac);
}
 Org::BouncyCastle::Crypto::IMac Org::BouncyCastle::Crypto::IO::MacSink::get_Mac()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                            "get_Mac",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::IMac, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::IO::MacSink::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Crypto::IO::MacSink::Write(::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::IO::MacSink>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, buf, off, len);
}
