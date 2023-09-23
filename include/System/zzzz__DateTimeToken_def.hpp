#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct TokenType;
}
namespace System {
struct System__DateTimeParse__DTT;
}
// Forward declare root types
namespace System {
struct DateTimeToken;
}
// Type: System::DateTimeToken
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2395))
// CS Name: System.DateTimeToken
struct CORDL_TYPE DateTimeToken : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "dtt", ty: "System::System__DateTimeParse__DTT", modifiers: "", def_value: None }, CppParam { name: "suffix", ty: "System::TokenType", modifiers: "", def_value: None }, CppParam { name: "num", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeToken(System::System__DateTimeParse__DTT dtt, System::TokenType suffix, int32_t num) noexcept;


                    constexpr DateTimeToken(DateTimeToken const&) = default;
                    constexpr DateTimeToken(DateTimeToken&&) = default;
                    constexpr DateTimeToken& operator=(DateTimeToken const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeToken& operator=(DateTimeToken&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeToken(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::System__DateTimeParse__DTT __declspec(property(get=__get_dtt, put=__set_dtt))  dtt;

constexpr void __set_dtt(System::System__DateTimeParse__DTT value) ;

constexpr System::System__DateTimeParse__DTT __get_dtt() const;

 System::TokenType __declspec(property(get=__get_suffix, put=__set_suffix))  suffix;

constexpr void __set_suffix(System::TokenType value) ;

constexpr System::TokenType __get_suffix() const;

 int32_t __declspec(property(get=__get_num, put=__set_num))  num;

constexpr void __set_num(int32_t value) ;

constexpr int32_t __get_num() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeToken, "System", "DateTimeToken");
