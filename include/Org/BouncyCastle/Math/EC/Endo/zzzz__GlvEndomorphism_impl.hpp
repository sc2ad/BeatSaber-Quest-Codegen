#pragma once
namespace {
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism.DecomposeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
constexpr  ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() const noexcept {
return ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism(::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get(),
                            "DecomposeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, k);
}
} // end anonymous namespace
