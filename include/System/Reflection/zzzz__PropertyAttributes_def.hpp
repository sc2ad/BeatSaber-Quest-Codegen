#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Reflection {
struct PropertyAttributes;
}
// Type: System.Reflection::PropertyAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3479))
// CS Name: System.Reflection.PropertyAttributes
struct CORDL_TYPE PropertyAttributes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyAttributes(int32_t value__) noexcept;


                    constexpr PropertyAttributes(PropertyAttributes const&) = default;
                    constexpr PropertyAttributes(PropertyAttributes&&) = default;
                    constexpr PropertyAttributes& operator=(PropertyAttributes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PropertyAttributes& operator=(PropertyAttributes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PropertyAttributes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PropertyAttributes_Unwrapped : int32_t {
__None = 0,
__SpecialName = 512,
__RTSpecialName = 1024,
__HasDefault = 4096,
__Reserved2 = 8192,
__Reserved3 = 16384,
__Reserved4 = 32768,
__ReservedMask = 62464,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropertyAttributes_Unwrapped () const noexcept {
return std::bit_cast<__PropertyAttributes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Reflection::PropertyAttributes const None;

/// @brief Field SpecialName offset 0
static System::Reflection::PropertyAttributes const SpecialName;

/// @brief Field RTSpecialName offset 0
static System::Reflection::PropertyAttributes const RTSpecialName;

/// @brief Field HasDefault offset 0
static System::Reflection::PropertyAttributes const HasDefault;

/// @brief Field Reserved2 offset 0
static System::Reflection::PropertyAttributes const Reserved2;

/// @brief Field Reserved3 offset 0
static System::Reflection::PropertyAttributes const Reserved3;

/// @brief Field Reserved4 offset 0
static System::Reflection::PropertyAttributes const Reserved4;

/// @brief Field ReservedMask offset 0
static System::Reflection::PropertyAttributes const ReservedMask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::PropertyAttributes, "System.Reflection", "PropertyAttributes");
