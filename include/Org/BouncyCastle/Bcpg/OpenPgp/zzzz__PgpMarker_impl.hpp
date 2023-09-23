#pragma once
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpObject_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpMarker_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__MarkerPacket_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1024560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::__set_data(Org::BouncyCastle::Bcpg::MarkerPacket value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Bcpg::MarkerPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Bcpg::MarkerPacket>(value));
}
constexpr Org::BouncyCastle::Bcpg::MarkerPacket Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::__get_data() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Bcpg::MarkerPacket, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgInput", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::PgpMarker(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  : Org::BouncyCastle::Bcpg::OpenPgp::PgpObject(THROW_UNLESS(::il2cpp_utils::New<PgpMarker>(bcpgInput))) {}
 void Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::OpenPgp::PgpMarker>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgInput);
}
