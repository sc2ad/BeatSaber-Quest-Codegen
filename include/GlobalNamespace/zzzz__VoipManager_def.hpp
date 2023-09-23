#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class VoipManager;
}
// Type: ::VoipManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4609))
// CS Name: VoipManager
class CORDL_TYPE VoipManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VoipManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: " const&", def_value: None }]
constexpr VoipManager(VoipManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VoipManager", modifiers: "&&", def_value: None }]
constexpr VoipManager(VoipManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VoipManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VoipManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VoipManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VoipManager& operator=(VoipManager&& o) noexcept = default;
  constexpr VoipManager& operator=(VoipManager const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit VoipManager() ;

/// @brief Method .ctor addr 0x2215f8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::VoipManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VoipManager, "", "VoipManager");
