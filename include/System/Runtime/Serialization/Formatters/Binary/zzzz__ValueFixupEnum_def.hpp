#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct ValueFixupEnum;
}
// Type: System.Runtime.Serialization.Formatters.Binary::ValueFixupEnum
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3250))
// CS Name: System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
struct CORDL_TYPE ValueFixupEnum : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueFixupEnum(int32_t value__) noexcept;


                    constexpr ValueFixupEnum(ValueFixupEnum const&) = default;
                    constexpr ValueFixupEnum(ValueFixupEnum&&) = default;
                    constexpr ValueFixupEnum& operator=(ValueFixupEnum const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ValueFixupEnum& operator=(ValueFixupEnum&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ValueFixupEnum(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ValueFixupEnum_Unwrapped : int32_t {
__Empty = 0,
__Array = 1,
__Header = 2,
__Member = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValueFixupEnum_Unwrapped () const noexcept {
return std::bit_cast<__ValueFixupEnum_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Empty offset 0
static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Empty;

/// @brief Field Array offset 0
static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Array;

/// @brief Field Header offset 0
static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Header;

/// @brief Field Member offset 0
static ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const Member;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, "System.Runtime.Serialization.Formatters.Binary", "ValueFixupEnum");
