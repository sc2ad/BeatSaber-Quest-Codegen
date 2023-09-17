#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct UICharInfo;
}
// Type: UnityEngine::UICharInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15789))
// CS Name: UnityEngine.UICharInfo
struct CORDL_TYPE UICharInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cursorPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "charWidth", ty: "float_t", modifiers: "", def_value: None }]
constexpr UICharInfo(::UnityEngine::Vector2 cursorPos, float_t charWidth) noexcept;


                    constexpr UICharInfo(UICharInfo const&) = default;
                    constexpr UICharInfo(UICharInfo&&) = default;
                    constexpr UICharInfo& operator=(UICharInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UICharInfo& operator=(UICharInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UICharInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_cursorPos, put=__set_cursorPos))  cursorPos;

constexpr void __set_cursorPos(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_cursorPos() const;

 float_t __declspec(property(get=__get_charWidth, put=__set_charWidth))  charWidth;

constexpr void __set_charWidth(float_t value) ;

constexpr float_t __get_charWidth() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UICharInfo, "UnityEngine", "UICharInfo");
