#pragma once
#include "Mono/Math/Prime/zzzz__PrimalityTests_def.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
//  Writing Method size for method: Mono::Math::Prime::PrimalityTests.GetSPPRounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(Mono::Math::BigInteger, Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::GetSPPRounds)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x22a2940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTests>::get(),
                            "GetSPPRounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: Mono::Math::Prime::PrimalityTests.RabinMillerTest
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(Mono::Math::BigInteger, Mono::Math::Prime::ConfidenceFactor)>(&Mono::Math::Prime::PrimalityTests::RabinMillerTest)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x22a2ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTests>::get(),
                            "RabinMillerTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
    return ___internal_method;
  }
};
 int32_t Mono::Math::Prime::PrimalityTests::GetSPPRounds(Mono::Math::BigInteger bi, Mono::Math::Prime::ConfidenceFactor confidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTests>::get(),
                            "GetSPPRounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, bi, confidence);
}
 bool Mono::Math::Prime::PrimalityTests::RabinMillerTest(Mono::Math::BigInteger n, Mono::Math::Prime::ConfidenceFactor confidence)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Mono::Math::Prime::PrimalityTests>::get(),
                            "RabinMillerTest",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::BigInteger>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Mono::Math::Prime::ConfidenceFactor>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, n, confidence);
}
