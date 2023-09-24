#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyleState;
}
// Type: UnityEngine::GUIStyleState
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14784))
// CS Name: UnityEngine.GUIStyleState
class CORDL_TYPE GUIStyleState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GUIStyleState() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: " const&", def_value: None }]
constexpr GUIStyleState(GUIStyleState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUIStyleState", modifiers: "&&", def_value: None }]
constexpr GUIStyleState(GUIStyleState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUIStyleState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GUIStyleState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUIStyleState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUIStyleState& operator=(GUIStyleState&& o) noexcept = default;
  constexpr GUIStyleState& operator=(GUIStyleState const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 UnityEngine::GUIStyle __declspec(property(get=__get_m_SourceStyle, put=__set_m_SourceStyle))  m_SourceStyle;

constexpr void __set_m_SourceStyle(UnityEngine::GUIStyle value) ;

constexpr UnityEngine::GUIStyle __get_m_SourceStyle() const;


// Properties

 UnityEngine::Color __declspec(property(put=set_textColor))  textColor;


// Methods

/// @brief Method set_textColor addr 0x2b94464 size 0x54 virtual false final false
 void set_textColor(UnityEngine::Color value) ;

/// @brief Method Init addr 0x2b944fc size 0x28 virtual false final false
static ::cordl_internals::intptr_t Init() ;

/// @brief Method Cleanup addr 0x2b94524 size 0x3c virtual false final false
 void Cleanup() ;

static UnityEngine::GUIStyleState New_ctor() ;

/// @brief Method .ctor addr 0x2b94560 size 0x48 virtual false final false
 void _ctor() ;

static UnityEngine::GUIStyleState New_ctor(UnityEngine::GUIStyle sourceStyle, ::cordl_internals::intptr_t source) ;

/// @brief Method .ctor addr 0x2b945a8 size 0x2c virtual false final false
 void _ctor(UnityEngine::GUIStyle sourceStyle, ::cordl_internals::intptr_t source) ;

/// @brief Method GetGUIStyleState addr 0x2b945d4 size 0x70 virtual false final false
static UnityEngine::GUIStyleState GetGUIStyleState(UnityEngine::GUIStyle sourceStyle, ::cordl_internals::intptr_t source) ;

/// @brief Method Finalize addr 0x2b94644 size 0xf8 virtual true final false
 void Finalize() ;

/// @brief Method set_textColor_Injected addr 0x2b944b8 size 0x44 virtual false final false
 void set_textColor_Injected(ByRef<UnityEngine::Color> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUIStyleState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIStyleState, "UnityEngine", "GUIStyleState");
