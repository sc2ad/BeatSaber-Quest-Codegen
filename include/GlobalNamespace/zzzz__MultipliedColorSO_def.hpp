#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class SimpleColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MultipliedColorSO;
}
// Type: ::MultipliedColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16040))
// CS Name: MultipliedColorSO
class CORDL_TYPE MultipliedColorSO : public ::GlobalNamespace::ColorSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MultipliedColorSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: " const&", def_value: None }]
constexpr MultipliedColorSO(MultipliedColorSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultipliedColorSO", modifiers: "&&", def_value: None }]
constexpr MultipliedColorSO(MultipliedColorSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultipliedColorSO(void* ptr) noexcept : ::GlobalNamespace::ColorSO(ptr) {
}


  constexpr MultipliedColorSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultipliedColorSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultipliedColorSO& operator=(MultipliedColorSO&& o) noexcept = default;
  constexpr MultipliedColorSO& operator=(MultipliedColorSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::SimpleColorSO __declspec(property(get=__get__baseColor, put=__set__baseColor))  _baseColor;

constexpr void __set__baseColor(::GlobalNamespace::SimpleColorSO value) ;

constexpr ::GlobalNamespace::SimpleColorSO __get__baseColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__multiplierColor, put=__set__multiplierColor))  _multiplierColor;

constexpr void __set__multiplierColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__multiplierColor() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x11a36b8 size 0x50 virtual true final false
 ::UnityEngine::Color get_color() ;

// Ctor Parameters []
explicit MultipliedColorSO() ;

/// @brief Method .ctor addr 0x11a3708 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultipliedColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultipliedColorSO, "", "MultipliedColorSO");
