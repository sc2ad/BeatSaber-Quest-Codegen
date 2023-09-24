#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGeneratorRecording;
}
// Type: ::MockPlayerLobbyPoseGeneratorRecording
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5282))
// CS Name: MockPlayerLobbyPoseGeneratorRecording
class CORDL_TYPE MockPlayerLobbyPoseGeneratorRecording : public GlobalNamespace::MockPlayerLobbyPoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MockPlayerLobbyPoseGeneratorRecording() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorRecording", modifiers: " const&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorRecording(MockPlayerLobbyPoseGeneratorRecording const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGeneratorRecording", modifiers: "&&", def_value: None }]
constexpr MockPlayerLobbyPoseGeneratorRecording(MockPlayerLobbyPoseGeneratorRecording&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerLobbyPoseGeneratorRecording(void* ptr) noexcept : GlobalNamespace::MockPlayerLobbyPoseGenerator(ptr) {
}


  constexpr MockPlayerLobbyPoseGeneratorRecording& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorRecording& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGeneratorRecording& operator=(MockPlayerLobbyPoseGeneratorRecording&& o) noexcept = default;
  constexpr MockPlayerLobbyPoseGeneratorRecording& operator=(MockPlayerLobbyPoseGeneratorRecording const& o) noexcept = default;
                


// Methods

static GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording New_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0x20edf24 size 0x8 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Init addr 0x20ef838 size 0x68 virtual true final false
 void Init() ;

/// @brief Method Tick addr 0x20ef8a0 size 0x68 virtual true final false
 void Tick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGeneratorRecording, "", "MockPlayerLobbyPoseGeneratorRecording");
