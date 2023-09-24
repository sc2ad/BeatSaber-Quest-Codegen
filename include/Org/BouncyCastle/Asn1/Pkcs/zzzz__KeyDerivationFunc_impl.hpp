#pragma once
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_impl.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__KeyDerivationFunc_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::*)(Org::BouncyCastle::Asn1::Asn1Sequence)>(&Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xefad34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Asn1::Asn1Encodable)>(&Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xefad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>(seq))};
return o;
}
 void Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
 Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier id, Org::BouncyCastle::Asn1::Asn1Encodable parameters)  {
Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>(id, parameters))};
return o;
}
 void Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier id, Org::BouncyCastle::Asn1::Asn1Encodable parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Asn1::Pkcs::KeyDerivationFunc>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::Asn1Encodable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, id, parameters);
}
