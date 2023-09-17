#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UI {
struct CanvasUpdate;
}
// Type: UnityEngine.UI::CanvasUpdate
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12959))
// CS Name: UnityEngine.UI.CanvasUpdate
struct CORDL_TYPE CanvasUpdate : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CanvasUpdate(int32_t value__) noexcept;


                    constexpr CanvasUpdate(CanvasUpdate const&) = default;
                    constexpr CanvasUpdate(CanvasUpdate&&) = default;
                    constexpr CanvasUpdate& operator=(CanvasUpdate const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CanvasUpdate& operator=(CanvasUpdate&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CanvasUpdate(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CanvasUpdate_Unwrapped : int32_t {
__Prelayout = 0,
__Layout = 1,
__PostLayout = 2,
__PreRender = 3,
__LatePreRender = 4,
__MaxUpdateValue = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CanvasUpdate_Unwrapped () const noexcept {
return std::bit_cast<__CanvasUpdate_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Prelayout offset 0
static ::UnityEngine::UI::CanvasUpdate const Prelayout;

/// @brief Field Layout offset 0
static ::UnityEngine::UI::CanvasUpdate const Layout;

/// @brief Field PostLayout offset 0
static ::UnityEngine::UI::CanvasUpdate const PostLayout;

/// @brief Field PreRender offset 0
static ::UnityEngine::UI::CanvasUpdate const PreRender;

/// @brief Field LatePreRender offset 0
static ::UnityEngine::UI::CanvasUpdate const LatePreRender;

/// @brief Field MaxUpdateValue offset 0
static ::UnityEngine::UI::CanvasUpdate const MaxUpdateValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::CanvasUpdate, "UnityEngine.UI", "CanvasUpdate");
