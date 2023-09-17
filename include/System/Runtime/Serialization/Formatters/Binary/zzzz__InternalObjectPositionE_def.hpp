#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalObjectPositionE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalObjectPositionE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3245))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE
struct CORDL_TYPE InternalObjectPositionE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalObjectPositionE(int32_t value__) noexcept;


                    constexpr InternalObjectPositionE(InternalObjectPositionE const&) = default;
                    constexpr InternalObjectPositionE(InternalObjectPositionE&&) = default;
                    constexpr InternalObjectPositionE& operator=(InternalObjectPositionE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalObjectPositionE& operator=(InternalObjectPositionE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalObjectPositionE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalObjectPositionE_Unwrapped : int32_t {
__Empty = 0,
__Top = 1,
__Child = 2,
__Headers = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalObjectPositionE_Unwrapped () const noexcept {
return std::bit_cast<__InternalObjectPositionE_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const Empty;

/// @brief Field Top offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const Top;

/// @brief Field Child offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const Child;

/// @brief Field Headers offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE const Headers;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE, "System.Runtime.Serialization.Formatters.Binary", "InternalObjectPositionE");
