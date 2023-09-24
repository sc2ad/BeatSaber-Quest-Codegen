#pragma once
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeBParameters_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)(Org::BouncyCastle::Math::EC::ECCurve, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters)>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfa83bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.DecomposeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<Org::BouncyCastle::Math::BigInteger> (Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)(Org::BouncyCastle::Math::BigInteger)>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xfa8474;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.get_PointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPointMap (Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)()>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa84f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism.get_HasEfficientPointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::*)()>(&Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa84f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism
constexpr  Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::operator Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism() const noexcept {
return Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
constexpr  Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::operator Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() const noexcept {
return Org::BouncyCastle::Math::EC::Endo::ECEndomorphism(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__set_m_parameters(Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters>(value));
}
constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__get_m_parameters() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__set_m_pointMap(Org::BouncyCastle::Math::EC::ECPointMap value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Math::EC::ECPointMap>(value));
}
constexpr Org::BouncyCastle::Math::EC::ECPointMap Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::__get_m_pointMap() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::New_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters parameters)  {
Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism o{THROW_UNLESS(::il2cpp_utils::New<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>(curve, parameters))};
return o;
}
 void Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::_ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, parameters);
}
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::DecomposeScalar(Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                            "DecomposeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, k);
}
 Org::BouncyCastle::Math::EC::ECPointMap Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_PointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                            "get_PointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<Org::BouncyCastle::Math::EC::ECPointMap, false>(const_cast<void*>(instance), ___internal_method);
}
 bool Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism::get_HasEfficientPointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism>::get(),
                            "get_HasEfficientPointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
