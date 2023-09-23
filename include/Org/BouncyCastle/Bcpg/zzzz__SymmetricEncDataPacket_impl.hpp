#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricEncDataPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Bcpg::SymmetricEncDataPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::*)(Org::BouncyCastle::Bcpg::BcpgInputStream)>(&Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1144924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SymmetricEncDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::SymmetricEncDataPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : Org::BouncyCastle::Bcpg::InputStreamPacket(THROW_UNLESS(::il2cpp_utils::New<SymmetricEncDataPacket>(bcpgIn))) {}
 void Org::BouncyCastle::Bcpg::SymmetricEncDataPacket::_ctor(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Bcpg::SymmetricEncDataPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
