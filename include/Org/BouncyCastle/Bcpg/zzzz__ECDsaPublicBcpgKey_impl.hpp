#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECDsaPublicBcpgKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x114728c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Math::EC::ECPoint)>(&Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1147290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::*)(Org::BouncyCastle::Asn1::DerObjectIdentifier, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1147294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::New_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>(bcpgIn))};
return o;
}
 void Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
 Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Math::EC::ECPoint point)  {
Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>(oid, point))};
return o;
}
 void Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Math::EC::ECPoint point)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, point);
}
 Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Math::BigInteger encodedPoint)  {
Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>(oid, encodedPoint))};
return o;
}
 void Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey::_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, Org::BouncyCastle::Math::BigInteger encodedPoint)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::ECDsaPublicBcpgKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Asn1::DerObjectIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oid, encodedPoint);
}
