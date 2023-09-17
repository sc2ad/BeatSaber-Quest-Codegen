#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_impl.hpp"
namespace {
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricEncIntegrityPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream)>(&::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1144fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::__set_version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::__get_version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::SymmetricEncIntegrityPacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  : ::Org::BouncyCastle::Bcpg::InputStreamPacket(THROW_UNLESS(::il2cpp_utils::New<SymmetricEncIntegrityPacket>(bcpgIn))) {}
 void ::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::SymmetricEncIntegrityPacket>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, bcpgIn);
}
} // end anonymous namespace
