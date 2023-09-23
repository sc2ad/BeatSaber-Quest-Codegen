#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class EventsTestSceneSetup;
}
// Type: ::EventsTestSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6083))
// CS Name: EventsTestSceneSetup
class CORDL_TYPE EventsTestSceneSetup : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EventsTestSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestSceneSetup", modifiers: " const&", def_value: None }]
constexpr EventsTestSceneSetup(EventsTestSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventsTestSceneSetup", modifiers: "&&", def_value: None }]
constexpr EventsTestSceneSetup(EventsTestSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventsTestSceneSetup(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr EventsTestSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventsTestSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventsTestSceneSetup& operator=(EventsTestSceneSetup&& o) noexcept = default;
  constexpr EventsTestSceneSetup& operator=(EventsTestSceneSetup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x21b4160 size 0xc34 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit EventsTestSceneSetup() ;

/// @brief Method .ctor addr 0x21b4d94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EventsTestSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestSceneSetup, "", "EventsTestSceneSetup");
