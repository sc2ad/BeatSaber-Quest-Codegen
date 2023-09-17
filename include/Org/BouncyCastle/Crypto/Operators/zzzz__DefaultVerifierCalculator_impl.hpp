#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Operators/zzzz__DefaultVerifierCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__SignerSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)(::Org::BouncyCastle::Crypto::ISigner)>(&::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe9fea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)()>(&::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xea0d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::*)()>(&::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::GetResult)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xea0d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IStreamCalculator
constexpr  ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator() const noexcept {
return ::Org::BouncyCastle::Crypto::IStreamCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::__set_mSignerSink(::Org::BouncyCastle::Crypto::IO::SignerSink value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::SignerSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IO::SignerSink>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::__get_mSignerSink() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::SignerSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "signer", ty: "::Org::BouncyCastle::Crypto::ISigner", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::DefaultVerifierCalculator(::Org::BouncyCastle::Crypto::ISigner signer)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DefaultVerifierCalculator>(signer))) {}
 void ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::_ctor(::Org::BouncyCastle::Crypto::ISigner signer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ISigner>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, signer);
}
 ::System::IO::Stream ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
