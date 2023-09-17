#pragma once
namespace {
#include "Org/BouncyCastle/Math/Field/zzzz__IPolynomial_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IPolynomial.get_Degree
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&::Org::BouncyCastle::Math::Field::IPolynomial::get_Degree)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::Field::IPolynomial),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomial>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::Field::IPolynomial.GetExponentsPresent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t> (::Org::BouncyCastle::Math::Field::IPolynomial::*)()>(&::Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Math::Field::IPolynomial),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomial>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
 int32_t ::Org::BouncyCastle::Math::Field::IPolynomial::get_Degree()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomial>::get(),
                            "get_Degree",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Math::Field::IPolynomial::GetExponentsPresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::Field::IPolynomial>::get(),
                            "GetExponentsPresent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
