#pragma once
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedDataStreamGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1EncodableVector_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CipherKeyGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__BerSequenceGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(Org::BouncyCastle::Cms::CmsEnvelopedGenerator, Org::BouncyCastle::Crypto::IO::CipherStream, Org::BouncyCastle::Asn1::BerSequenceGenerator, Org::BouncyCastle::Asn1::BerSequenceGenerator, Org::BouncyCastle::Asn1::BerSequenceGenerator)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1156c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IO::CipherStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.WriteByte
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(uint8_t)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1156c88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1156cac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream.Close
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::*)()>(&Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Close)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x1156cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__outer(Org::BouncyCastle::Cms::CmsEnvelopedGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Cms::CmsEnvelopedGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>(value));
}
constexpr Org::BouncyCastle::Cms::CmsEnvelopedGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__outer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Cms::CmsEnvelopedGenerator, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__out(Org::BouncyCastle::Crypto::IO::CipherStream value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::IO::CipherStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::IO::CipherStream>(value));
}
constexpr Org::BouncyCastle::Crypto::IO::CipherStream Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__out() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::IO::CipherStream, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__cGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__cGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__envGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__envGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__set__eiGen(Org::BouncyCastle::Asn1::BerSequenceGenerator value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Asn1::BerSequenceGenerator>(value));
}
constexpr Org::BouncyCastle::Asn1::BerSequenceGenerator Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::__get__eiGen() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Asn1::BerSequenceGenerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "outer", ty: "Org::BouncyCastle::Cms::CmsEnvelopedGenerator", modifiers: "", def_value: None }, CppParam { name: "outStream", ty: "Org::BouncyCastle::Crypto::IO::CipherStream", modifiers: "", def_value: None }, CppParam { name: "cGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "envGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }, CppParam { name: "eiGen", ty: "Org::BouncyCastle::Asn1::BerSequenceGenerator", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream(Org::BouncyCastle::Cms::CmsEnvelopedGenerator outer, Org::BouncyCastle::Crypto::IO::CipherStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator envGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  : Org::BouncyCastle::Utilities::IO::BaseOutputStream(THROW_UNLESS(::il2cpp_utils::New<Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>(outer, outStream, cGen, envGen, eiGen))) {}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::_ctor(Org::BouncyCastle::Cms::CmsEnvelopedGenerator outer, Org::BouncyCastle::Crypto::IO::CipherStream outStream, Org::BouncyCastle::Asn1::BerSequenceGenerator cGen, Org::BouncyCastle::Asn1::BerSequenceGenerator envGen, Org::BouncyCastle::Asn1::BerSequenceGenerator eiGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Cms::CmsEnvelopedGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::IO::CipherStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::BerSequenceGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, outer, outStream, cGen, envGen, eiGen);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::WriteByte(uint8_t b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                            "WriteByte",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, b);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Write(::ArrayW<uint8_t> bytes, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bytes, off, len);
}
 void Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream::Close()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::Org__BouncyCastle__Cms__CmsEnvelopedDataStreamGenerator__CmsEnvelopedDataOutputStream>::get(),
                            "Close",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1155aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(Org::BouncyCastle::Security::SecureRandom)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1155b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBufferSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(int32_t)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1155b68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.SetBerEncodeRecipients
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(bool)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1155b70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "SetBerEncodeRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.get_Version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerInteger (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)()>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1155b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(System::IO::Stream, ::StringW, Org::BouncyCastle::Crypto::CipherKeyGenerator)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x1155bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::CipherKeyGenerator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(System::IO::Stream, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier, Org::BouncyCastle::Crypto::ICipherParameters, Org::BouncyCastle::Asn1::Asn1EncodableVector)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x11561fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(System::IO::Stream, ::StringW)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1156a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator.Open
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IO::Stream (Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::*)(System::IO::Stream, ::StringW, int32_t)>(&Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1156b58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__originatorInfo(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__originatorInfo() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__unprotectedAttributes(::bs_hook::Il2CppWrapperType value)  {
::cordl_internals::setInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::bs_hook::Il2CppWrapperType>(value));
}
constexpr ::bs_hook::Il2CppWrapperType Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__unprotectedAttributes() const {
return ::cordl_internals::getInstanceField<::bs_hook::Il2CppWrapperType, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__set__berEncodeRecipientSet(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::__get__berEncodeRecipientSet() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataStreamGenerator()  : Org::BouncyCastle::Cms::CmsEnvelopedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsEnvelopedDataStreamGenerator>())) {}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
 Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::CmsEnvelopedDataStreamGenerator(Org::BouncyCastle::Security::SecureRandom rand)  : Org::BouncyCastle::Cms::CmsEnvelopedGenerator(THROW_UNLESS(::il2cpp_utils::New<CmsEnvelopedDataStreamGenerator>(rand))) {}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::_ctor(Org::BouncyCastle::Security::SecureRandom rand)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, rand);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBufferSize(int32_t bufferSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "SetBufferSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bufferSize);
}
 void Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::SetBerEncodeRecipients(bool berEncodeRecipientSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "SetBerEncodeRecipients",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, berEncodeRecipientSet);
}
 Org::BouncyCastle::Asn1::DerInteger Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::get_Version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "get_Version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(System::IO::Stream outStream, ::StringW encryptionOid, Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::CipherKeyGenerator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encryptionOid, keyGen);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(System::IO::Stream outStream, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier encAlgID, Org::BouncyCastle::Crypto::ICipherParameters cipherParameters, Org::BouncyCastle::Asn1::Asn1EncodableVector recipientInfos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::ICipherParameters>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1EncodableVector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encAlgID, cipherParameters, recipientInfos);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(System::IO::Stream outStream, ::StringW encryptionOid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encryptionOid);
}
 System::IO::Stream Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator::Open(System::IO::Stream outStream, ::StringW encryptionOid, int32_t keySize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Cms::CmsEnvelopedDataStreamGenerator>::get(),
                            "Open",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method, outStream, encryptionOid, keySize);
}
