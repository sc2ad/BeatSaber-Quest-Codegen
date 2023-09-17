#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceChannelTypes;
}
// Type: IgnoranceCore::IgnoranceChannelTypes
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15282))
// CS Name: IgnoranceCore.IgnoranceChannelTypes
struct CORDL_TYPE IgnoranceChannelTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IgnoranceChannelTypes(int32_t value__) noexcept;


                    constexpr IgnoranceChannelTypes(IgnoranceChannelTypes const&) = default;
                    constexpr IgnoranceChannelTypes(IgnoranceChannelTypes&&) = default;
                    constexpr IgnoranceChannelTypes& operator=(IgnoranceChannelTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceChannelTypes& operator=(IgnoranceChannelTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceChannelTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __IgnoranceChannelTypes_Unwrapped : int32_t {
__Reliable = 1,
__ReliableUnsequenced = 3,
__Unreliable = 2,
__UnreliableFragmented = 8,
__UnreliableSequenced = 0,
__Unthrottled = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IgnoranceChannelTypes_Unwrapped () const noexcept {
return std::bit_cast<__IgnoranceChannelTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Reliable offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const Reliable;

/// @brief Field ReliableUnsequenced offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const ReliableUnsequenced;

/// @brief Field Unreliable offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const Unreliable;

/// @brief Field UnreliableFragmented offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableFragmented;

/// @brief Field UnreliableSequenced offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const UnreliableSequenced;

/// @brief Field Unthrottled offset 0
static ::IgnoranceCore::IgnoranceChannelTypes const Unthrottled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceChannelTypes, "IgnoranceCore", "IgnoranceChannelTypes");
