#pragma once
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_impl.hpp"
namespace {
#include "Mono/Math/Prime/Generator/zzzz__SequentialSearchPrimeGeneratorBase_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateSearchBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22be480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22be4f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::bs_hook::Il2CppWrapperType)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x22be504;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.IsPrimeAcceptable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(::Mono::Math::BigInteger, ::bs_hook::Il2CppWrapperType)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22be7e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)()>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bcf9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 ::Mono::Math::BigInteger ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase(int32_t bits, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            "GenerateSearchBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, bits, context);
}
 ::Mono::Math::BigInteger ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            "GenerateNewPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, bits);
}
 ::Mono::Math::BigInteger ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            "GenerateNewPrime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method, bits, context);
}
 bool ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(::Mono::Math::BigInteger bi, ::bs_hook::Il2CppWrapperType context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            "IsPrimeAcceptable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, bi, context);
}
// Ctor Parameters []
 ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::SequentialSearchPrimeGeneratorBase()  : ::Mono::Math::Prime::Generator::PrimeGeneratorBase(THROW_UNLESS(::il2cpp_utils::New<SequentialSearchPrimeGeneratorBase>())) {}
 void ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
