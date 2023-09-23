#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__LazyAsn1InputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSet_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerSequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(::ArrayW<uint8_t>)>(&Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x113b1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::LazyAsn1InputStream._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(System::IO::Stream)>(&Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x113b1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSequence
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerSequence (Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream)>(&Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x113b214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::LazyAsn1InputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::LazyAsn1InputStream.CreateDerSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::DerSet (Org::BouncyCastle::Asn1::LazyAsn1InputStream::*)(Org::BouncyCastle::Asn1::DefiniteLengthInputStream)>(&Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x113b2f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Asn1::LazyAsn1InputStream),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "input", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::LazyAsn1InputStream::LazyAsn1InputStream(::ArrayW<uint8_t> input)  : Org::BouncyCastle::Asn1::Asn1InputStream(THROW_UNLESS(::il2cpp_utils::New<LazyAsn1InputStream>(input))) {}
 void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(::ArrayW<uint8_t> input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, input);
}
// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Asn1::LazyAsn1InputStream::LazyAsn1InputStream(System::IO::Stream inputStream)  : Org::BouncyCastle::Asn1::Asn1InputStream(THROW_UNLESS(::il2cpp_utils::New<LazyAsn1InputStream>(inputStream))) {}
 void Org::BouncyCastle::Asn1::LazyAsn1InputStream::_ctor(System::IO::Stream inputStream)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, inputStream);
}
 Org::BouncyCastle::Asn1::DerSequence Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSequence(Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            "CreateDerSequence",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DefiniteLengthInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerSequence, false>(const_cast<void*>(instance), ___internal_method, dIn);
}
 Org::BouncyCastle::Asn1::DerSet Org::BouncyCastle::Asn1::LazyAsn1InputStream::CreateDerSet(Org::BouncyCastle::Asn1::DefiniteLengthInputStream dIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::LazyAsn1InputStream>::get(),
                            "CreateDerSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DefiniteLengthInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Asn1::DerSet, false>(const_cast<void*>(instance), ___internal_method, dIn);
}
