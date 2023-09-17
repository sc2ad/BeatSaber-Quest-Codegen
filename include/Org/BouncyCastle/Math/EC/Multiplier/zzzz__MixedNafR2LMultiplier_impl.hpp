#pragma once
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__AbstractECMultiplier_impl.hpp"
namespace {
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__MixedNafR2LMultiplier_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)()>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa9a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(int32_t, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfa9a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.MultiplyPositive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECPoint, ::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xfa9a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier.ConfigureCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECCurve (::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::*)(::Org::BouncyCastle::Math::EC::ECCurve, int32_t)>(&::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xfa9ef4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__set_additionCoord(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_additionCoord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__set_doublingCoord(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::__get_doublingCoord() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MixedNafR2LMultiplier()  : ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(THROW_UNLESS(::il2cpp_utils::New<MixedNafR2LMultiplier>())) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "additionCoord", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doublingCoord", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MixedNafR2LMultiplier(int32_t additionCoord, int32_t doublingCoord)  : ::Org::BouncyCastle::Math::EC::Multiplier::AbstractECMultiplier(THROW_UNLESS(::il2cpp_utils::New<MixedNafR2LMultiplier>(additionCoord, doublingCoord))) {}
 void ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::_ctor(int32_t additionCoord, int32_t doublingCoord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, additionCoord, doublingCoord);
}
 ::Org::BouncyCastle::Math::EC::ECPoint ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::MultiplyPositive(::Org::BouncyCastle::Math::EC::ECPoint p, ::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            "MultiplyPositive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECPoint>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPoint, false>(const_cast<void*>(instance), ___internal_method, p, k);
}
 ::Org::BouncyCastle::Math::EC::ECCurve ::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier::ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve c, int32_t coord)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::MixedNafR2LMultiplier>::get(),
                            "ConfigureCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECCurve, false>(const_cast<void*>(instance), ___internal_method, c, coord);
}
} // end anonymous namespace
