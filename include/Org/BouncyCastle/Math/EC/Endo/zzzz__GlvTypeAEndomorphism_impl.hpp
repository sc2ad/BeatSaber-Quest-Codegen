#pragma once
namespace {
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECCurve_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ECEndomorphism_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__ECPointMap_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)(::Org::BouncyCastle::Math::EC::ECCurve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfa8224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.DecomposeScalar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)(::Org::BouncyCastle::Math::BigInteger)>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::DecomposeScalar)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xfa82dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.get_PointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPointMap (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)()>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_PointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa8358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism.get_HasEfficientPointMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::*)()>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_HasEfficientPointMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa8360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism
constexpr  ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism() const noexcept {
return ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
constexpr  ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() const noexcept {
return ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__get_m_parameters() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Math::EC::ECPointMap>(value));
}
constexpr ::Org::BouncyCastle::Math::EC::ECPointMap ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::__get_m_pointMap() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Math::EC::ECPointMap, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "curve", ty: "::Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::GlvTypeAEndomorphism(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters parameters)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlvTypeAEndomorphism>(curve, parameters))) {}
 void ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::_ctor(::Org::BouncyCastle::Math::EC::ECCurve curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::ECCurve>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curve, parameters);
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::DecomposeScalar(::Org::BouncyCastle::Math::BigInteger k)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                            "DecomposeScalar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(const_cast<void*>(instance), ___internal_method, k);
}
 ::Org::BouncyCastle::Math::EC::ECPointMap ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_PointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                            "get_PointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::ECPointMap, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism::get_HasEfficientPointMap()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism>::get(),
                            "get_HasEfficientPointMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
