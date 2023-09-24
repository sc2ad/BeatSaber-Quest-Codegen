#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalSerializerTypeE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalSerializerTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3242))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalSerializerTypeE
struct CORDL_TYPE InternalSerializerTypeE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalSerializerTypeE(int32_t value__) noexcept;


                    constexpr InternalSerializerTypeE(InternalSerializerTypeE const&) = default;
                    constexpr InternalSerializerTypeE(InternalSerializerTypeE&&) = default;
                    constexpr InternalSerializerTypeE& operator=(InternalSerializerTypeE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalSerializerTypeE& operator=(InternalSerializerTypeE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalSerializerTypeE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalSerializerTypeE_Unwrapped : int32_t {
__Soap = 1,
__Binary = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalSerializerTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalSerializerTypeE_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Soap offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const Soap;

/// @brief Field Binary offset 0
static System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE const Binary;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalSerializerTypeE");
