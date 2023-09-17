#pragma once
namespace {
#include "Org/BouncyCastle/Crmf/zzzz__PKMacStreamCalculator_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacSink_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)(::Org::BouncyCastle::Crypto::IMac)>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1186cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.get_Stream
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1186d74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::PKMacStreamCalculator.GetResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Crmf::PKMacStreamCalculator::*)()>(&::Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1186d7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IStreamCalculator
constexpr  ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::operator ::Org::BouncyCastle::Crypto::IStreamCalculator() const noexcept {
return ::Org::BouncyCastle::Crypto::IStreamCalculator(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::__set__stream(::Org::BouncyCastle::Crypto::IO::MacSink value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Crypto::IO::MacSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Crypto::IO::MacSink>(value));
}
constexpr ::Org::BouncyCastle::Crypto::IO::MacSink ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::__get__stream() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Crypto::IO::MacSink, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "mac", ty: "::Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::PKMacStreamCalculator(::Org::BouncyCastle::Crypto::IMac mac)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<PKMacStreamCalculator>(mac))) {}
 void ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::_ctor(::Org::BouncyCastle::Crypto::IMac mac)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, mac);
}
 ::System::IO::Stream ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::get_Stream()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            "get_Stream",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Crmf::PKMacStreamCalculator::GetResult()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::PKMacStreamCalculator>::get(),
                            "GetResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
