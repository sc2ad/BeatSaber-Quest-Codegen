#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DigitallySigned_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__SignatureAndHashAlgorithm_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigitallySigned._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, ::ArrayW<uint8_t>)>(&Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xed9780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Algorithm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm (Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(&Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed97fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DigitallySigned),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigitallySigned.get_Signature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)()>(&Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xed9804;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DigitallySigned),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigitallySigned.Encode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Crypto::Tls::DigitallySigned::*)(System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xed980c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Crypto::Tls::DigitallySigned),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Crypto::Tls::DigitallySigned.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Crypto::Tls::DigitallySigned (*)(Org::BouncyCastle::Crypto::Tls::TlsContext, System::IO::Stream)>(&Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xecc4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__set_mAlgorithm(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>(value));
}
constexpr Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm Org::BouncyCastle::Crypto::Tls::DigitallySigned::__get_mAlgorithm() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Crypto::Tls::DigitallySigned::__set_mSignature(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DigitallySigned::__get_mSignature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm", modifiers: "", def_value: None }, CppParam { name: "signature", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 Org::BouncyCastle::Crypto::Tls::DigitallySigned::DigitallySigned(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> signature)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DigitallySigned>(algorithm, signature))) {}
 void Org::BouncyCastle::Crypto::Tls::DigitallySigned::_ctor(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> signature)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, algorithm, signature);
}
 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Algorithm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            "get_Algorithm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::Tls::DigitallySigned::get_Signature()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            "get_Signature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 void Org::BouncyCastle::Crypto::Tls::DigitallySigned::Encode(System::IO::Stream output)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            "Encode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, output);
}
 Org::BouncyCastle::Crypto::Tls::DigitallySigned Org::BouncyCastle::Crypto::Tls::DigitallySigned::Parse(Org::BouncyCastle::Crypto::Tls::TlsContext context, System::IO::Stream input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Crypto::Tls::DigitallySigned>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Tls::TlsContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::IO::Stream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Crypto::Tls::DigitallySigned, false>(nullptr, ___internal_method, context, input);
}
