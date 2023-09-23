#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleColorSO;
}
// Type: ::SimpleColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16041))
// CS Name: SimpleColorSO
class CORDL_TYPE SimpleColorSO : public GlobalNamespace::ColorSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SimpleColorSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: " const&", def_value: None }]
constexpr SimpleColorSO(SimpleColorSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: "&&", def_value: None }]
constexpr SimpleColorSO(SimpleColorSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleColorSO(void* ptr) noexcept : GlobalNamespace::ColorSO(ptr) {
}


  constexpr SimpleColorSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleColorSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleColorSO& operator=(SimpleColorSO&& o) noexcept = default;
  constexpr SimpleColorSO& operator=(SimpleColorSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x11a3710 size 0xc virtual true final false
 UnityEngine::Color get_color() ;

/// @brief Method SetColor addr 0x11a371c size 0xc virtual false final false
 void SetColor(UnityEngine::Color c) ;

// Ctor Parameters []
explicit SimpleColorSO() ;

/// @brief Method .ctor addr 0x11a3728 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SimpleColorSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleColorSO, "", "SimpleColorSO");
