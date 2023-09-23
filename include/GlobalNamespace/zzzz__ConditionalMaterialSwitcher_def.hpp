#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalMaterialSwitcher;
}
// Type: ::ConditionalMaterialSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5445))
// CS Name: ConditionalMaterialSwitcher
class CORDL_TYPE ConditionalMaterialSwitcher : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ConditionalMaterialSwitcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: " const&", def_value: None }]
constexpr ConditionalMaterialSwitcher(ConditionalMaterialSwitcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalMaterialSwitcher", modifiers: "&&", def_value: None }]
constexpr ConditionalMaterialSwitcher(ConditionalMaterialSwitcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConditionalMaterialSwitcher(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ConditionalMaterialSwitcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConditionalMaterialSwitcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConditionalMaterialSwitcher& operator=(ConditionalMaterialSwitcher&& o) noexcept = default;
  constexpr ConditionalMaterialSwitcher& operator=(ConditionalMaterialSwitcher const& o) noexcept = default;
                


// Fields

 UnityEngine::Material __declspec(property(get=__get__material0, put=__set__material0))  _material0;

constexpr void __set__material0(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material0() const;

 UnityEngine::Material __declspec(property(get=__get__material1, put=__set__material1))  _material1;

constexpr void __set__material1(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material1() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get__value() const;

 UnityEngine::Renderer __declspec(property(get=__get__renderer, put=__set__renderer))  _renderer;

constexpr void __set__renderer(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get__renderer() const;


// Methods

/// @brief Method Awake addr 0x21156cc size 0x78 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit ConditionalMaterialSwitcher() ;

/// @brief Method .ctor addr 0x2115744 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ConditionalMaterialSwitcher);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalMaterialSwitcher, "", "ConditionalMaterialSwitcher");
