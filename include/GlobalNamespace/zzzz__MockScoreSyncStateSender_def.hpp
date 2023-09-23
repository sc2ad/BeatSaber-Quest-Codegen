#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class MockScoreSyncStateSender;
}
// Type: ::MockScoreSyncStateSender
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15500))
// CS Name: MockScoreSyncStateSender
class CORDL_TYPE MockScoreSyncStateSender : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MockScoreSyncStateSender() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: " const&", def_value: None }]
constexpr MockScoreSyncStateSender(MockScoreSyncStateSender const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockScoreSyncStateSender", modifiers: "&&", def_value: None }]
constexpr MockScoreSyncStateSender(MockScoreSyncStateSender&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockScoreSyncStateSender(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockScoreSyncStateSender& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockScoreSyncStateSender& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockScoreSyncStateSender& operator=(MockScoreSyncStateSender&& o) noexcept = default;
  constexpr MockScoreSyncStateSender& operator=(MockScoreSyncStateSender const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;


// Methods

// Ctor Parameters [CppParam { name: "msm", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit MockScoreSyncStateSender(GlobalNamespace::IMultiplayerSessionManager msm) ;

/// @brief Method .ctor addr 0x2279ab4 size 0x17c virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager msm) ;

/// @brief Method Dispose addr 0x2279c5c size 0xc8 virtual true final true
 void Dispose() ;

/// @brief Method SendScore addr 0x227cfc8 size 0x224 virtual false final false
 void SendScore(int32_t modifiedScore, int32_t multipliedScore, int32_t immediateMaxPossibleMultipliedScore, int32_t combo, int32_t multiplier) ;

/// @brief Method HandleScoreSyncStateUpdate addr 0x227f500 size 0x4 virtual false final false
 void HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable nodePose, GlobalNamespace::IConnectedPlayer connectedPlayer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockScoreSyncStateSender);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockScoreSyncStateSender, "", "MockScoreSyncStateSender");
