#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockColorAnimator;
}
// Type: ::MaterialPropertyBlockColorAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14724))
// CS Name: MaterialPropertyBlockColorAnimator
class CORDL_TYPE MaterialPropertyBlockColorAnimator : public GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MaterialPropertyBlockColorAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorAnimator", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockColorAnimator(MaterialPropertyBlockColorAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockColorAnimator(void* ptr) noexcept : GlobalNamespace::MaterialPropertyBlockAnimator(ptr) {
}


  constexpr MaterialPropertyBlockColorAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockColorAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockColorAnimator& operator=(MaterialPropertyBlockColorAnimator&& o) noexcept = default;
  constexpr MaterialPropertyBlockColorAnimator& operator=(MaterialPropertyBlockColorAnimator const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method get_color addr 0x1fa238c size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x1fa2398 size 0xc virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method SetProperty addr 0x1fa23a4 size 0x34 virtual true final false
 void SetProperty() ;

// Ctor Parameters []
explicit MaterialPropertyBlockColorAnimator() ;

/// @brief Method .ctor addr 0x1fa2444 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockColorAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorAnimator, "", "MaterialPropertyBlockColorAnimator");
