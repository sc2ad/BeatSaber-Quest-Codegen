#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__TrustPacket_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::*)()>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1021d4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadOptionalTrustPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Bcpg::TrustPacket (*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadOptionalTrustPacket)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1021d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadOptionalTrustPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadSignaturesAndTrust
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IList (*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadSignaturesAndTrust)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x1021df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadSignaturesAndTrust",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing.ReadUserIDs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Org::BouncyCastle::Bcpg::BcpgInputStream, ByRef<System::Collections::IList>, ByRef<System::Collections::IList>, ByRef<System::Collections::IList>)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadUserIDs)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x10220bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadUserIDs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::PgpKeyRing()  : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(THROW_UNLESS(::il2cpp_utils::New<PgpKeyRing>())) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 Org::BouncyCastle::Bcpg::TrustPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadOptionalTrustPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadOptionalTrustPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Bcpg::TrustPacket, false>(nullptr, ___internal_method, bcpgInput);
}
 System::Collections::IList Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadSignaturesAndTrust(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadSignaturesAndTrust",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IList, false>(nullptr, ___internal_method, bcpgInput);
}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing::ReadUserIDs(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput, ByRef<System::Collections::IList> ids, ByRef<System::Collections::IList> idTrusts, ByRef<System::Collections::IList> idSigs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing>::get(),
                            "ReadUserIDs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::IList>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, bcpgInput, ids, idTrusts, idSigs);
}
