#pragma once
namespace {
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ECMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier.Multiply
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint (::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier::Multiply)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier::Multiply(::Org::BouncyCastle::Math::EC::ECPoint p, ::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier>::get(),
                            "Multiply",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p, k);
}
} // end anonymous namespace
