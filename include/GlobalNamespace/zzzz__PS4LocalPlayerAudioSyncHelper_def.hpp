#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS4LocalPlayerAudioSyncHelper;
}
// Type: ::PS4LocalPlayerAudioSyncHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5268))
// CS Name: PS4LocalPlayerAudioSyncHelper
class CORDL_TYPE PS4LocalPlayerAudioSyncHelper : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PS4LocalPlayerAudioSyncHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LocalPlayerAudioSyncHelper", modifiers: " const&", def_value: None }]
constexpr PS4LocalPlayerAudioSyncHelper(PS4LocalPlayerAudioSyncHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LocalPlayerAudioSyncHelper", modifiers: "&&", def_value: None }]
constexpr PS4LocalPlayerAudioSyncHelper(PS4LocalPlayerAudioSyncHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4LocalPlayerAudioSyncHelper(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PS4LocalPlayerAudioSyncHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4LocalPlayerAudioSyncHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4LocalPlayerAudioSyncHelper& operator=(PS4LocalPlayerAudioSyncHelper&& o) noexcept = default;
  constexpr PS4LocalPlayerAudioSyncHelper& operator=(PS4LocalPlayerAudioSyncHelper const& o) noexcept = default;
                


// Methods

static GlobalNamespace::PS4LocalPlayerAudioSyncHelper New_ctor() ;

/// @brief Method .ctor addr 0x20e9b78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4LocalPlayerAudioSyncHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LocalPlayerAudioSyncHelper, "", "PS4LocalPlayerAudioSyncHelper");
