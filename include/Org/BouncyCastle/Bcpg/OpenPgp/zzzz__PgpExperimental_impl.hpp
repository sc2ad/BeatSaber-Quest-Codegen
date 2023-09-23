#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpExperimental_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ExperimentalPacket_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x102159c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::__set_p(Org::BouncyCastle::Bcpg::ExperimentalPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::ExperimentalPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::ExperimentalPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::ExperimentalPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::__get_p() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::ExperimentalPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::PgpExperimental(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(THROW_UNLESS(::il2cpp_utils::New<PgpExperimental>(bcpgIn))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpExperimental>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
