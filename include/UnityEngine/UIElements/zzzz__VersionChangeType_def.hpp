#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
// Type: UnityEngine.UIElements::VersionChangeType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6949))
// CS Name: UnityEngine.UIElements.VersionChangeType
struct CORDL_TYPE VersionChangeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VersionChangeType(int32_t value__) noexcept;


                    constexpr VersionChangeType(VersionChangeType const&) = default;
                    constexpr VersionChangeType(VersionChangeType&&) = default;
                    constexpr VersionChangeType& operator=(VersionChangeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VersionChangeType& operator=(VersionChangeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VersionChangeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VersionChangeType_Unwrapped : int32_t {
__Bindings = 1,
__ViewData = 2,
__Hierarchy = 4,
__Layout = 8,
__StyleSheet = 16,
__Styles = 32,
__Overflow = 64,
__BorderRadius = 128,
__BorderWidth = 256,
__Transform = 512,
__Size = 1024,
__Repaint = 2048,
__Opacity = 4096,
__Color = 8192,
__RenderHints = 16384,
__TransitionProperty = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VersionChangeType_Unwrapped () const noexcept {
return std::bit_cast<__VersionChangeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Bindings offset 0
static UnityEngine::UIElements::VersionChangeType const Bindings;

/// @brief Field ViewData offset 0
static UnityEngine::UIElements::VersionChangeType const ViewData;

/// @brief Field Hierarchy offset 0
static UnityEngine::UIElements::VersionChangeType const Hierarchy;

/// @brief Field Layout offset 0
static UnityEngine::UIElements::VersionChangeType const Layout;

/// @brief Field StyleSheet offset 0
static UnityEngine::UIElements::VersionChangeType const StyleSheet;

/// @brief Field Styles offset 0
static UnityEngine::UIElements::VersionChangeType const Styles;

/// @brief Field Overflow offset 0
static UnityEngine::UIElements::VersionChangeType const Overflow;

/// @brief Field BorderRadius offset 0
static UnityEngine::UIElements::VersionChangeType const BorderRadius;

/// @brief Field BorderWidth offset 0
static UnityEngine::UIElements::VersionChangeType const BorderWidth;

/// @brief Field Transform offset 0
static UnityEngine::UIElements::VersionChangeType const Transform;

/// @brief Field Size offset 0
static UnityEngine::UIElements::VersionChangeType const Size;

/// @brief Field Repaint offset 0
static UnityEngine::UIElements::VersionChangeType const Repaint;

/// @brief Field Opacity offset 0
static UnityEngine::UIElements::VersionChangeType const Opacity;

/// @brief Field Color offset 0
static UnityEngine::UIElements::VersionChangeType const Color;

/// @brief Field RenderHints offset 0
static UnityEngine::UIElements::VersionChangeType const RenderHints;

/// @brief Field TransitionProperty offset 0
static UnityEngine::UIElements::VersionChangeType const TransitionProperty;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VersionChangeType, "UnityEngine.UIElements", "VersionChangeType");
