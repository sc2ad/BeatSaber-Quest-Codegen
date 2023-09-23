#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
// Type: UnityEngine.UIElements.UIR::TextCoreSettings
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7515))
// CS Name: UnityEngine.UIElements.UIR.TextCoreSettings
struct CORDL_TYPE TextCoreSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::UIR::TextCoreSettings>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::UIR::TextCoreSettings>() const;

// Ctor Parameters [CppParam { name: "faceColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "outlineColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "outlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "underlayColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "underlayOffset", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "underlaySoftness", ty: "float_t", modifiers: "", def_value: None }]
constexpr TextCoreSettings(UnityEngine::Color faceColor, UnityEngine::Color outlineColor, float_t outlineWidth, UnityEngine::Color underlayColor, UnityEngine::Vector2 underlayOffset, float_t underlaySoftness) noexcept;


                    constexpr TextCoreSettings(TextCoreSettings const&) = default;
                    constexpr TextCoreSettings(TextCoreSettings&&) = default;
                    constexpr TextCoreSettings& operator=(TextCoreSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextCoreSettings& operator=(TextCoreSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextCoreSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get_faceColor, put=__set_faceColor))  faceColor;

constexpr void __set_faceColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_faceColor() const;

 UnityEngine::Color __declspec(property(get=__get_outlineColor, put=__set_outlineColor))  outlineColor;

constexpr void __set_outlineColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_outlineColor() const;

 float_t __declspec(property(get=__get_outlineWidth, put=__set_outlineWidth))  outlineWidth;

constexpr void __set_outlineWidth(float_t value) ;

constexpr float_t __get_outlineWidth() const;

 UnityEngine::Color __declspec(property(get=__get_underlayColor, put=__set_underlayColor))  underlayColor;

constexpr void __set_underlayColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_underlayColor() const;

 UnityEngine::Vector2 __declspec(property(get=__get_underlayOffset, put=__set_underlayOffset))  underlayOffset;

constexpr void __set_underlayOffset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_underlayOffset() const;

 float_t __declspec(property(get=__get_underlaySoftness, put=__set_underlaySoftness))  underlaySoftness;

constexpr void __set_underlaySoftness(float_t value) ;

constexpr float_t __get_underlaySoftness() const;


// Methods

/// @brief Method Equals addr 0x2c53be0 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c53c70 size 0xe8 virtual true final true
 bool Equals(UnityEngine::UIElements::UIR::TextCoreSettings other) ;

/// @brief Method GetHashCode addr 0x2c53d58 size 0x198 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::TextCoreSettings, "UnityEngine.UIElements.UIR", "TextCoreSettings");
