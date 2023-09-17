#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalImageMaterialSwitcher;
}
// Type: ::ConditionalImageMaterialSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5444))
// CS Name: ConditionalImageMaterialSwitcher
class CORDL_TYPE ConditionalImageMaterialSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ConditionalImageMaterialSwitcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: " const&", def_value: None }]
constexpr ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalImageMaterialSwitcher", modifiers: "&&", def_value: None }]
constexpr ConditionalImageMaterialSwitcher(ConditionalImageMaterialSwitcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalImageMaterialSwitcher(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConditionalImageMaterialSwitcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalImageMaterialSwitcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalImageMaterialSwitcher& operator=(ConditionalImageMaterialSwitcher&& o) noexcept = default;
  constexpr ConditionalImageMaterialSwitcher& operator=(ConditionalImageMaterialSwitcher const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Material __declspec(property(get=__get__material0, put=__set__material0))  _material0;

constexpr void __set__material0(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__material0() const;

 ::UnityEngine::Material __declspec(property(get=__get__material1, put=__set__material1))  _material1;

constexpr void __set__material1(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__material1() const;

 ::GlobalNamespace::BoolSO __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::GlobalNamespace::BoolSO value) ;

constexpr ::GlobalNamespace::BoolSO __get__value() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__image, put=__set__image))  _image;

constexpr void __set__image(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__image() const;


// Methods

/// @brief Method Awake addr 0x2115644 size 0x80 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit ConditionalImageMaterialSwitcher() ;

/// @brief Method .ctor addr 0x21156c4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ConditionalImageMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalImageMaterialSwitcher, "", "ConditionalImageMaterialSwitcher");
