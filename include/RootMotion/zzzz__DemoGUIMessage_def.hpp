#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace RootMotion {
class DemoGUIMessage;
}
// Type: RootMotion::DemoGUIMessage
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12432))
// CS Name: RootMotion.DemoGUIMessage
class CORDL_TYPE DemoGUIMessage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DemoGUIMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: " const&", def_value: None }]
constexpr DemoGUIMessage(DemoGUIMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DemoGUIMessage", modifiers: "&&", def_value: None }]
constexpr DemoGUIMessage(DemoGUIMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DemoGUIMessage(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DemoGUIMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DemoGUIMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DemoGUIMessage& operator=(DemoGUIMessage&& o) noexcept = default;
  constexpr DemoGUIMessage& operator=(DemoGUIMessage const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;


// Methods

/// @brief Method OnGUI addr 0x11b2a50 size 0xf8 virtual false final false
 void OnGUI() ;

// Ctor Parameters []
explicit DemoGUIMessage() ;

/// @brief Method .ctor addr 0x11b2b48 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
} // end anonymous namespace
NEED_NO_BOX(::RootMotion::DemoGUIMessage);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::DemoGUIMessage, "RootMotion", "DemoGUIMessage");
