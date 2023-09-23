#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
// Type: ::MockPlayerLobbyPoseGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15498))
// CS Name: MockPlayerLobbyPoseGenerator
class CORDL_TYPE MockPlayerLobbyPoseGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MockPlayerLobbyPoseGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: " const&", def_value: None }]
constexpr MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerLobbyPoseGenerator", modifiers: "&&", def_value: None }]
constexpr MockPlayerLobbyPoseGenerator(MockPlayerLobbyPoseGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerLobbyPoseGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerLobbyPoseGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerLobbyPoseGenerator& operator=(MockPlayerLobbyPoseGenerator&& o) noexcept = default;
  constexpr MockPlayerLobbyPoseGenerator& operator=(MockPlayerLobbyPoseGenerator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get_multiplayerSessionManager, put=__set_multiplayerSessionManager))  multiplayerSessionManager;

constexpr void __set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get_multiplayerSessionManager() const;

 GlobalNamespace::MockNodePoseSyncStateSender __declspec(property(get=__get_mockNodePoseSyncStateSender, put=__set_mockNodePoseSyncStateSender))  mockNodePoseSyncStateSender;

constexpr void __set_mockNodePoseSyncStateSender(GlobalNamespace::MockNodePoseSyncStateSender value) ;

constexpr GlobalNamespace::MockNodePoseSyncStateSender __get_mockNodePoseSyncStateSender() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit MockPlayerLobbyPoseGenerator(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0x227e7cc size 0x7c virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Dispose addr 0x227e848 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
 void Tick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerLobbyPoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerLobbyPoseGenerator, "", "MockPlayerLobbyPoseGenerator");
