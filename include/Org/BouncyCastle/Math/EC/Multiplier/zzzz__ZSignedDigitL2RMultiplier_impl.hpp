#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__ZSignedDigitL2RMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xfadc54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::*)()>(&Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfadd44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p, k);
}
 Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::New_ctor()  {
Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier>())};
return o;
}
 void Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::ZSignedDigitL2RMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
