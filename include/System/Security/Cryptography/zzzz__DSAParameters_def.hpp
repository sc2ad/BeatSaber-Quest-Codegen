#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct DSAParameters;
}
// Type: System.Security.Cryptography::DSAParameters
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2926))
// CS Name: System.Security.Cryptography.DSAParameters
struct CORDL_TYPE DSAParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "P", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Q", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "G", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "J", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "X", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Seed", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Counter", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DSAParameters(::ArrayW<uint8_t> P, ::ArrayW<uint8_t> Q, ::ArrayW<uint8_t> G, ::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> J, ::ArrayW<uint8_t> X, ::ArrayW<uint8_t> Seed, int32_t Counter) noexcept;


                    constexpr DSAParameters(DSAParameters const&) = default;
                    constexpr DSAParameters(DSAParameters&&) = default;
                    constexpr DSAParameters& operator=(DSAParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DSAParameters& operator=(DSAParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DSAParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_P() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Q, put=__set_Q))  Q;

constexpr void __set_Q(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Q() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_G, put=__set_G))  G;

constexpr void __set_G(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_G() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Y, put=__set_Y))  Y;

constexpr void __set_Y(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Y() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_J, put=__set_J))  J;

constexpr void __set_J(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_J() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_X() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Seed, put=__set_Seed))  Seed;

constexpr void __set_Seed(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Seed() const;

 int32_t __declspec(property(get=__get_Counter, put=__set_Counter))  Counter;

constexpr void __set_Counter(int32_t value) ;

constexpr int32_t __get_Counter() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSAParameters, "System.Security.Cryptography", "DSAParameters");
