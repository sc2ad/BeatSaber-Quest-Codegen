#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
namespace GlobalNamespace {
class SimpleColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultipliedAndAddedColorSO;
}
// Type: ::MultipliedAndAddedColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16039))
// CS Name: MultipliedAndAddedColorSO
class CORDL_TYPE MultipliedAndAddedColorSO : public GlobalNamespace::ColorSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultipliedAndAddedColorSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedAndAddedColorSO", modifiers: " const&", def_value: None }]
constexpr MultipliedAndAddedColorSO(MultipliedAndAddedColorSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedAndAddedColorSO", modifiers: "&&", def_value: None }]
constexpr MultipliedAndAddedColorSO(MultipliedAndAddedColorSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultipliedAndAddedColorSO(void* ptr) noexcept : GlobalNamespace::ColorSO(ptr) {
}


  constexpr MultipliedAndAddedColorSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultipliedAndAddedColorSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultipliedAndAddedColorSO& operator=(MultipliedAndAddedColorSO&& o) noexcept = default;
  constexpr MultipliedAndAddedColorSO& operator=(MultipliedAndAddedColorSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SimpleColorSO __declspec(property(get=__get__baseColor, put=__set__baseColor))  _baseColor;

constexpr void __set__baseColor(GlobalNamespace::SimpleColorSO value) ;

constexpr GlobalNamespace::SimpleColorSO __get__baseColor() const;

 UnityEngine::Color __declspec(property(get=__get__multiplierColor, put=__set__multiplierColor))  _multiplierColor;

constexpr void __set__multiplierColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__multiplierColor() const;

 UnityEngine::Color __declspec(property(get=__get__addColor, put=__set__addColor))  _addColor;

constexpr void __set__addColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__addColor() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x11a3648 size 0x68 virtual true final false
 UnityEngine::Color get_color() ;

// Ctor Parameters []
explicit MultipliedAndAddedColorSO() ;

/// @brief Method .ctor addr 0x11a36b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultipliedAndAddedColorSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultipliedAndAddedColorSO, "", "MultipliedAndAddedColorSO");
