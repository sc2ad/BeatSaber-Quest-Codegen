#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
namespace {
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(::System::IO::Stream, ::Org::BouncyCastle::Crypto::IMac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator, ::Org::BouncyCastle::Asn1::BerSequenceGenerator, ::Org::BouncyCastle::Asn1::BerSequenceGenerator)>(&::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1151e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1152024;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1152048;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::*)()>(&::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x115206c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__set_macStream(::System::IO::Stream value)  {
::cordl_internals::setInstanceField<::System::IO::Stream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::IO::Stream>(value));
}
constexpr ::System::IO::Stream ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__get_macStream() const {
return ::cordl_internals::getInstanceField<::System::IO::Stream, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__set_mac(::Org::BouncyCastle::Crypto::IMac value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IMac>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IMac ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__get_mac() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IMac, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__set_cGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__get_cGen() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__set_authGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__get_authGen() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__set_eiGen(::Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr ::Org::BouncyCastle::Asn1::BerSequenceGenerator ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::__get_eiGen() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "macStream", ty: "::System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "mac", ty: "::Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }, CppParam { name: "cGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "authGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "eiGen", ty: "::Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream(::System::IO::Stream macStream, ::Org::BouncyCastle::Crypto::IMac mac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator authGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  : ::Org::BouncyCastle::Utilities::IO::BaseOutputStream(THROW_UNLESS(::il2cpp_utils::New<____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>(macStream, mac, cGen, authGen, eiGen))) {}
 void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::_ctor(::System::IO::Stream macStream, ::Org::BouncyCastle::Crypto::IMac mac, ::Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator authGen, ::Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, macStream, mac, cGen, authGen, eiGen);
}
 void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytes, off, len);
}
 void ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsAuthenticatedDataStreamGenerator__CmsAuthenticatedDataOutputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)()>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1150f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1150f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(int32_t)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1150f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.SetBerEncodeRecipients
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(bool)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1150f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "SetBerEncodeRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream, ::StringW, ::Org::BouncyCastle::Crypto::CipherKeyGenerator)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x1150f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, ::Org::BouncyCastle::Crypto::ICipherParameters, ::Org::BouncyCastle::Asn1::Asn1EncodableVector)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x8ac;
  constexpr static std::size_t addrs = 0x115156c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream, ::StringW)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1151e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::*)(::System::IO::Stream, ::StringW, int32_t)>(&::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1151f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__set__bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__set__berEncodeRecipientSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::__get__berEncodeRecipientSet() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataStreamGenerator()  : ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsAuthenticatedDataStreamGenerator>())) {}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::CmsAuthenticatedDataStreamGenerator(::Org::BouncyCastle::Security::SecureRandom rand)  : ::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsAuthenticatedDataStreamGenerator>(rand))) {}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::_ctor(::Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBufferSize(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferSize);
}
 void ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "SetBerEncodeRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, berEncodeRecipientSet);
}
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream outStr, ::StringW macOid, ::Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::CipherKeyGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr, macOid, keyGen);
}
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream outStr, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier macAlgId, ::Org::BouncyCastle::Crypto::ICipherParameters cipherParameters, ::Org::BouncyCastle::Asn1::Asn1EncodableVector recipientInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr, macAlgId, cipherParameters, recipientInfos);
}
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream outStr, ::StringW encryptionOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr, encryptionOid);
}
 ::System::IO::Stream ::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator::Open(::System::IO::Stream outStr, ::StringW encryptionOid, int32_t keySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::CmsAuthenticatedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStr, encryptionOid, keySize);
}
} // end anonymous namespace
