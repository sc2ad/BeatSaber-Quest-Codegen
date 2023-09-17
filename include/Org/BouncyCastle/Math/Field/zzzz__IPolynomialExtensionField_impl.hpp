#pragma once
namespace {
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomialExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IExtensionField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IFiniteField_def.hpp"
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomial_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField.get_MinimalPolynomial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::Field::IPolynomial (::Org::BouncyCastle::Math::Field::IPolynomialExtensionField::*)()>(&::Org::BouncyCastle::Math::Field::IPolynomialExtensionField::get_MinimalPolynomial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::Field::IPolynomialExtensionField),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IExtensionField
constexpr  ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField::operator ::Org::BouncyCastle::Math::Field::IExtensionField() const noexcept {
return ::Org::BouncyCastle::Math::Field::IExtensionField(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::Org::BouncyCastle::Math::Field::IFiniteField
constexpr  ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField::operator ::Org::BouncyCastle::Math::Field::IFiniteField() const noexcept {
return ::Org::BouncyCastle::Math::Field::IFiniteField(::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Math::Field::IPolynomial ::Org::BouncyCastle::Math::Field::IPolynomialExtensionField::get_MinimalPolynomial()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomialExtensionField>::get(),
                            "get_MinimalPolynomial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::Field::IPolynomial, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
