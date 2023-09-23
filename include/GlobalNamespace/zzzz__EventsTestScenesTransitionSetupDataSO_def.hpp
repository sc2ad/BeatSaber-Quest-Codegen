#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestScenesTransitionSetupDataSO;
}
// Type: ::EventsTestScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13874))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6119))
// CS Name: EventsTestScenesTransitionSetupDataSO
class CORDL_TYPE EventsTestScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~EventsTestScenesTransitionSetupDataSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: " const&", def_value: None }]
constexpr EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
constexpr EventsTestScenesTransitionSetupDataSO(EventsTestScenesTransitionSetupDataSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventsTestScenesTransitionSetupDataSO(void* ptr) noexcept : GlobalNamespace::ScenesTransitionSetupDataSO(ptr) {
}


  constexpr EventsTestScenesTransitionSetupDataSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventsTestScenesTransitionSetupDataSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventsTestScenesTransitionSetupDataSO& operator=(EventsTestScenesTransitionSetupDataSO&& o) noexcept = default;
  constexpr EventsTestScenesTransitionSetupDataSO& operator=(EventsTestScenesTransitionSetupDataSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__eventsTestSceneInfo, put=__set__eventsTestSceneInfo))  _eventsTestSceneInfo;

constexpr void __set__eventsTestSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__eventsTestSceneInfo() const;

 GlobalNamespace::SceneInfo __declspec(property(get=__get__gameCoreSceneInfo, put=__set__gameCoreSceneInfo))  _gameCoreSceneInfo;

constexpr void __set__gameCoreSceneInfo(GlobalNamespace::SceneInfo value) ;

constexpr GlobalNamespace::SceneInfo __get__gameCoreSceneInfo() const;


// Methods

/// @brief Method Init addr 0x21d0064 size 0x1e0 virtual false final false
 void Init() ;

// Ctor Parameters []
explicit EventsTestScenesTransitionSetupDataSO() ;

/// @brief Method .ctor addr 0x21d0244 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EventsTestScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestScenesTransitionSetupDataSO, "", "EventsTestScenesTransitionSetupDataSO");
