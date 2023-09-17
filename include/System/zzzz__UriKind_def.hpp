#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System {
struct UriKind;
}
// Type: System::UriKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7728))
// CS Name: System.UriKind
struct CORDL_TYPE UriKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UriKind(int32_t value__) noexcept;


                    constexpr UriKind(UriKind const&) = default;
                    constexpr UriKind(UriKind&&) = default;
                    constexpr UriKind& operator=(UriKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UriKind& operator=(UriKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UriKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UriKind_Unwrapped : int32_t {
__RelativeOrAbsolute = 0,
__Absolute = 1,
__Relative = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UriKind_Unwrapped () const noexcept {
return std::bit_cast<__UriKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field RelativeOrAbsolute offset 0
static ::System::UriKind const RelativeOrAbsolute;

/// @brief Field Absolute offset 0
static ::System::UriKind const Absolute;

/// @brief Field Relative offset 0
static ::System::UriKind const Relative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::UriKind, "System", "UriKind");
