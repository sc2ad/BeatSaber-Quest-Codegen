#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupParent;
}
// Type: ::LightColorGroupParent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5023))
// CS Name: LightColorGroupParent
class CORDL_TYPE LightColorGroupParent : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IEditTimeValidated
constexpr operator  GlobalNamespace::IEditTimeValidated() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightColorGroupParent() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: " const&", def_value: None }]
constexpr LightColorGroupParent(LightColorGroupParent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupParent", modifiers: "&&", def_value: None }]
constexpr LightColorGroupParent(LightColorGroupParent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightColorGroupParent(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightColorGroupParent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightColorGroupParent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightColorGroupParent& operator=(LightColorGroupParent&& o) noexcept = default;
  constexpr LightColorGroupParent& operator=(LightColorGroupParent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit LightColorGroupParent() ;

/// @brief Method .ctor addr 0x225df68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightColorGroupParent);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightColorGroupParent, "", "LightColorGroupParent");
