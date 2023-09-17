#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Tls/zzzz__DtlsHandshakeRetransmit_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit.ReceivedHandshakeRecord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::*)(int32_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit::ReceivedHandshakeRecord(int32_t epoch, ::ArrayW<uint8_t> buf, int32_t off, int32_t len)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::DtlsHandshakeRetransmit>::get(),
                            "ReceivedHandshakeRecord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, epoch, buf, off, len);
}
} // end anonymous namespace
