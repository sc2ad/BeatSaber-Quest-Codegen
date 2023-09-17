#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalMemberValueE;
}
// Type: System.Runtime.Serialization.Formatters.Binary::InternalMemberValueE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3248))
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
struct CORDL_TYPE InternalMemberValueE : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalMemberValueE(int32_t value__) noexcept;


                    constexpr InternalMemberValueE(InternalMemberValueE const&) = default;
                    constexpr InternalMemberValueE(InternalMemberValueE&&) = default;
                    constexpr InternalMemberValueE& operator=(InternalMemberValueE const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InternalMemberValueE& operator=(InternalMemberValueE&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InternalMemberValueE(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InternalMemberValueE_Unwrapped : int32_t {
__Empty = 0,
__InlineValue = 1,
__Nested = 2,
__Reference = 3,
__Null = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalMemberValueE_Unwrapped () const noexcept {
return std::bit_cast<__InternalMemberValueE_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Empty;

/// @brief Field InlineValue offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const InlineValue;

/// @brief Field Nested offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Nested;

/// @brief Field Reference offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Reference;

/// @brief Field Null offset 0
static ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const Null;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
