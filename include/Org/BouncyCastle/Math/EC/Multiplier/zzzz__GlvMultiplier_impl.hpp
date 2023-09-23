#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__GlvMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism)>(&Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xfa9734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint (Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::*)(Org::BouncyCastle::Math::EC::ECPoint, Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xfa97dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
constexpr void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__set_curve(Org::BouncyCastle::Math::EC::ECCurve value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECCurve>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECCurve Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__get_curve() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECCurve, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__set_glvEndomorphism(Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>(value));
}
constexpr Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::__get_glvEndomorphism() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "glvEndomorphism", ty: "Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism", modifiers: "", def_value: None }]
 Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::GlvMultiplier(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism)  : Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(THROW_UNLESS(::il2cpp_utils::New<GlvMultiplier>(curve, glvEndomorphism))) {}
 void Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism glvEndomorphism)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, glvEndomorphism);
}
 Org::BouncyCastle::Math::EC::ECPoint Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier::MultiplyPositive(Org::BouncyCastle::Math::EC::ECPoint p, Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Multiplier::GlvMultiplier>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p, k);
}
