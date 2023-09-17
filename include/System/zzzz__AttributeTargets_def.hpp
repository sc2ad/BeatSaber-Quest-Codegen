#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct AttributeTargets;
}
// Type: System::AttributeTargets
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2354))
// CS Name: System.AttributeTargets
struct CORDL_TYPE AttributeTargets : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AttributeTargets(int32_t value__) noexcept;


                    constexpr AttributeTargets(AttributeTargets const&) = default;
                    constexpr AttributeTargets(AttributeTargets&&) = default;
                    constexpr AttributeTargets& operator=(AttributeTargets const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AttributeTargets& operator=(AttributeTargets&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AttributeTargets(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AttributeTargets_Unwrapped : int32_t {
__Assembly = 1,
__Module = 2,
__Class = 4,
__Struct = 8,
__Enum = 16,
__Constructor = 32,
__Method = 64,
__Property = 128,
__Field = 256,
__Event = 512,
__Interface = 1024,
__Parameter = 2048,
__Delegate = 4096,
__ReturnValue = 8192,
__GenericParameter = 16384,
__All = 32767,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeTargets_Unwrapped () const noexcept {
return std::bit_cast<__AttributeTargets_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Assembly offset 0
static ::System::AttributeTargets const Assembly;

/// @brief Field Module offset 0
static ::System::AttributeTargets const Module;

/// @brief Field Class offset 0
static ::System::AttributeTargets const Class;

/// @brief Field Struct offset 0
static ::System::AttributeTargets const Struct;

/// @brief Field Enum offset 0
static ::System::AttributeTargets const Enum;

/// @brief Field Constructor offset 0
static ::System::AttributeTargets const Constructor;

/// @brief Field Method offset 0
static ::System::AttributeTargets const Method;

/// @brief Field Property offset 0
static ::System::AttributeTargets const Property;

/// @brief Field Field offset 0
static ::System::AttributeTargets const Field;

/// @brief Field Event offset 0
static ::System::AttributeTargets const Event;

/// @brief Field Interface offset 0
static ::System::AttributeTargets const Interface;

/// @brief Field Parameter offset 0
static ::System::AttributeTargets const Parameter;

/// @brief Field Delegate offset 0
static ::System::AttributeTargets const Delegate;

/// @brief Field ReturnValue offset 0
static ::System::AttributeTargets const ReturnValue;

/// @brief Field GenericParameter offset 0
static ::System::AttributeTargets const GenericParameter;

/// @brief Field All offset 0
static ::System::AttributeTargets const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::AttributeTargets, "System", "AttributeTargets");
