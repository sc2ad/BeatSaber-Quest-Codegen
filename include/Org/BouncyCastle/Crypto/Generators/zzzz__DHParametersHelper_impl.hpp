#pragma once
namespace {
#include "Org/BouncyCastle/Crypto/Generators/zzzz__DHParametersHelper_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.ConstructBigPrimeProducts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (*)(::ArrayW<int32_t>)>(&::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::ConstructBigPrimeProducts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xe6be4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "ConstructBigPrimeProducts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.GenerateSafePrimes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::Math::BigInteger> (*)(int32_t, int32_t, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::GenerateSafePrimes)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xe6b878;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "GenerateSafePrimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper.SelectGenerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (*)(::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Math::BigInteger, ::Org::BouncyCastle::Security::SecureRandom)>(&::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::SelectGenerator)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xe6bd54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "SelectGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::*)()>(&::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe6c004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__set_Six(::Org::BouncyCastle::Math::BigInteger value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger, "Six", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>(std::forward<::Org::BouncyCastle::Math::BigInteger>(value));
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__get_Six()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger, "Six", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__set_primeLists(::ArrayW<::ArrayW<int32_t>> value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<int32_t>>, "primeLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>(std::forward<::ArrayW<::ArrayW<int32_t>>>(value));
}
 ::ArrayW<::ArrayW<int32_t>> ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__get_primeLists()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<int32_t>>, "primeLists", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__set_primeProducts(::ArrayW<int32_t> value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "primeProducts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>(std::forward<::ArrayW<int32_t>>(value));
}
 ::ArrayW<int32_t> ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__get_primeProducts()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "primeProducts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>();
}
 void ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__set_BigPrimeProducts(::ArrayW<::Org::BouncyCastle::Math::BigInteger> value)  {
::cordl_internals::setStaticField<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, "BigPrimeProducts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>(std::forward<::ArrayW<::Org::BouncyCastle::Math::BigInteger>>(value));
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::__get_BigPrimeProducts()  {
return ::cordl_internals::getStaticField<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, "BigPrimeProducts", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get>();
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::ConstructBigPrimeProducts(::ArrayW<int32_t> primeProducts)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "ConstructBigPrimeProducts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(nullptr, ___internal_method, primeProducts);
}
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::GenerateSafePrimes(int32_t size, int32_t certainty, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "GenerateSafePrimes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::BigInteger>, false>(nullptr, ___internal_method, size, certainty, random);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::SelectGenerator(::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Security::SecureRandom random)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            "SelectGenerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(nullptr, ___internal_method, p, q, random);
}
// Ctor Parameters []
 ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::DHParametersHelper()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DHParametersHelper>())) {}
 void ::Org::BouncyCastle::Crypto::Generators::DHParametersHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::DHParametersHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
