#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class GUISettings;
}
// Type: UnityEngine::GUISettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14777))
// CS Name: UnityEngine.GUISettings
class CORDL_TYPE GUISettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GUISettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: " const&", def_value: None }]
constexpr GUISettings(GUISettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUISettings", modifiers: "&&", def_value: None }]
constexpr GUISettings(GUISettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUISettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUISettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUISettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUISettings& operator=(GUISettings&& o) noexcept = default;
  constexpr GUISettings& operator=(GUISettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_DoubleClickSelectsWord, put=__set_m_DoubleClickSelectsWord))  m_DoubleClickSelectsWord;

constexpr void __set_m_DoubleClickSelectsWord(bool value) ;

constexpr bool __get_m_DoubleClickSelectsWord() const;

 bool __declspec(property(get=__get_m_TripleClickSelectsLine, put=__set_m_TripleClickSelectsLine))  m_TripleClickSelectsLine;

constexpr void __set_m_TripleClickSelectsLine(bool value) ;

constexpr bool __get_m_TripleClickSelectsLine() const;

 UnityEngine::Color __declspec(property(get=__get_m_CursorColor, put=__set_m_CursorColor))  m_CursorColor;

constexpr void __set_m_CursorColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_CursorColor() const;

 float_t __declspec(property(get=__get_m_CursorFlashSpeed, put=__set_m_CursorFlashSpeed))  m_CursorFlashSpeed;

constexpr void __set_m_CursorFlashSpeed(float_t value) ;

constexpr float_t __get_m_CursorFlashSpeed() const;

 UnityEngine::Color __declspec(property(get=__get_m_SelectionColor, put=__set_m_SelectionColor))  m_SelectionColor;

constexpr void __set_m_SelectionColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_SelectionColor() const;


// Methods

// Ctor Parameters []
explicit GUISettings() ;

/// @brief Method .ctor addr 0x2b903bc size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUISettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISettings, "UnityEngine", "GUISettings");
