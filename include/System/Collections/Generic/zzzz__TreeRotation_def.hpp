#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Collections::Generic {
struct TreeRotation;
}
// Type: System.Collections.Generic::TreeRotation
namespace System::Collections::Generic {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8395))
// CS Name: System.Collections.Generic.TreeRotation
struct CORDL_TYPE TreeRotation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TreeRotation(uint8_t value__) noexcept;


                    constexpr TreeRotation(TreeRotation const&) = default;
                    constexpr TreeRotation(TreeRotation&&) = default;
                    constexpr TreeRotation& operator=(TreeRotation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TreeRotation& operator=(TreeRotation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TreeRotation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TreeRotation_Unwrapped : uint8_t {
__Left = 0u,
__LeftRight = 1u,
__Right = 2u,
__RightLeft = 3u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TreeRotation_Unwrapped () const noexcept {
return std::bit_cast<__TreeRotation_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field Left offset 0
static ::System::Collections::Generic::TreeRotation const Left;

/// @brief Field LeftRight offset 0
static ::System::Collections::Generic::TreeRotation const LeftRight;

/// @brief Field Right offset 0
static ::System::Collections::Generic::TreeRotation const Right;

/// @brief Field RightLeft offset 0
static ::System::Collections::Generic::TreeRotation const RightLeft;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::TreeRotation, "System.Collections.Generic", "TreeRotation");
