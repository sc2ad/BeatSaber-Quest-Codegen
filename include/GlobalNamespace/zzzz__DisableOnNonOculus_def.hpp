#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonOculus;
}
// Type: ::DisableOnNonOculus
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5452))
// CS Name: DisableOnNonOculus
class CORDL_TYPE DisableOnNonOculus : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisableOnNonOculus() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonOculus", modifiers: " const&", def_value: None }]
constexpr DisableOnNonOculus(DisableOnNonOculus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonOculus", modifiers: "&&", def_value: None }]
constexpr DisableOnNonOculus(DisableOnNonOculus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableOnNonOculus(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableOnNonOculus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableOnNonOculus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableOnNonOculus& operator=(DisableOnNonOculus&& o) noexcept = default;
  constexpr DisableOnNonOculus& operator=(DisableOnNonOculus const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DisableOnNonOculus() ;

/// @brief Method .ctor addr 0x2115b14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableOnNonOculus);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableOnNonOculus, "", "DisableOnNonOculus");
