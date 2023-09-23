#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class DisableOnNonQuest;
}
// Type: ::DisableOnNonQuest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5453))
// CS Name: DisableOnNonQuest
class CORDL_TYPE DisableOnNonQuest : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DisableOnNonQuest() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonQuest", modifiers: " const&", def_value: None }]
constexpr DisableOnNonQuest(DisableOnNonQuest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisableOnNonQuest", modifiers: "&&", def_value: None }]
constexpr DisableOnNonQuest(DisableOnNonQuest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisableOnNonQuest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DisableOnNonQuest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisableOnNonQuest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisableOnNonQuest& operator=(DisableOnNonQuest&& o) noexcept = default;
  constexpr DisableOnNonQuest& operator=(DisableOnNonQuest const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DisableOnNonQuest() ;

/// @brief Method .ctor addr 0x2115b1c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DisableOnNonQuest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableOnNonQuest, "", "DisableOnNonQuest");
