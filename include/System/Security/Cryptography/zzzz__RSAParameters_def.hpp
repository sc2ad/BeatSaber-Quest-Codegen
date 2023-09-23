#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct RSAParameters;
}
// Type: System.Security.Cryptography::RSAParameters
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2951))
// CS Name: System.Security.Cryptography.RSAParameters
struct CORDL_TYPE RSAParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Exponent", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Modulus", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "P", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Q", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "DP", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "DQ", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "InverseQ", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "D", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr RSAParameters(::ArrayW<uint8_t> Exponent, ::ArrayW<uint8_t> Modulus, ::ArrayW<uint8_t> P, ::ArrayW<uint8_t> Q, ::ArrayW<uint8_t> DP, ::ArrayW<uint8_t> DQ, ::ArrayW<uint8_t> InverseQ, ::ArrayW<uint8_t> D) noexcept;


                    constexpr RSAParameters(RSAParameters const&) = default;
                    constexpr RSAParameters(RSAParameters&&) = default;
                    constexpr RSAParameters& operator=(RSAParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RSAParameters& operator=(RSAParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RSAParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Exponent, put=__set_Exponent))  Exponent;

constexpr void __set_Exponent(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Exponent() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Modulus, put=__set_Modulus))  Modulus;

constexpr void __set_Modulus(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Modulus() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_P() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Q, put=__set_Q))  Q;

constexpr void __set_Q(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Q() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_DP, put=__set_DP))  DP;

constexpr void __set_DP(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_DP() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_DQ, put=__set_DQ))  DQ;

constexpr void __set_DQ(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_DQ() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_InverseQ, put=__set_InverseQ))  InverseQ;

constexpr void __set_InverseQ(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_InverseQ() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_D, put=__set_D))  D;

constexpr void __set_D(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_D() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAParameters, "System.Security.Cryptography", "RSAParameters");
