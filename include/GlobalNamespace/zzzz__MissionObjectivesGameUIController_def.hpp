#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MissionObjectiveGameUIView;
}
namespace GlobalNamespace {
class MissionObjectiveCheckersManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionObjectivesGameUIController;
}
// Type: ::MissionObjectivesGameUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5136))
// CS Name: MissionObjectivesGameUIController
class CORDL_TYPE MissionObjectivesGameUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MissionObjectivesGameUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: " const&", def_value: None }]
constexpr MissionObjectivesGameUIController(MissionObjectivesGameUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionObjectivesGameUIController", modifiers: "&&", def_value: None }]
constexpr MissionObjectivesGameUIController(MissionObjectivesGameUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionObjectivesGameUIController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MissionObjectivesGameUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionObjectivesGameUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionObjectivesGameUIController& operator=(MissionObjectivesGameUIController&& o) noexcept = default;
  constexpr MissionObjectivesGameUIController& operator=(MissionObjectivesGameUIController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MissionObjectiveGameUIView __declspec(property(get=__get__missionObjectiveGameUIViewPrefab, put=__set__missionObjectiveGameUIViewPrefab))  _missionObjectiveGameUIViewPrefab;

constexpr void __set__missionObjectiveGameUIViewPrefab(::GlobalNamespace::MissionObjectiveGameUIView value) ;

constexpr ::GlobalNamespace::MissionObjectiveGameUIView __get__missionObjectiveGameUIViewPrefab() const;

 float_t __declspec(property(get=__get__separator, put=__set__separator))  _separator;

constexpr void __set__separator(float_t value) ;

constexpr float_t __get__separator() const;

 float_t __declspec(property(get=__get__elementWidth, put=__set__elementWidth))  _elementWidth;

constexpr void __set__elementWidth(float_t value) ;

constexpr float_t __get__elementWidth() const;

 ::GlobalNamespace::MissionObjectiveCheckersManager __declspec(property(get=__get__missionObjectiveCheckersManager, put=__set__missionObjectiveCheckersManager))  _missionObjectiveCheckersManager;

constexpr void __set__missionObjectiveCheckersManager(::GlobalNamespace::MissionObjectiveCheckersManager value) ;

constexpr ::GlobalNamespace::MissionObjectiveCheckersManager __get__missionObjectiveCheckersManager() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView> __declspec(property(get=__get__missionObjectiveGameUIViews, put=__set__missionObjectiveGameUIViews))  _missionObjectiveGameUIViews;

constexpr void __set__missionObjectiveGameUIViews(::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MissionObjectiveGameUIView> __get__missionObjectiveGameUIViews() const;


// Methods

/// @brief Method Start addr 0x2275ef4 size 0x94 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2276328 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleMissionObjectiveCheckersManagerObjectivesListDidChange addr 0x22763fc size 0x4 virtual false final false
 void HandleMissionObjectiveCheckersManagerObjectivesListDidChange() ;

/// @brief Method CreateUIElements addr 0x2275f88 size 0x3a0 virtual false final false
 void CreateUIElements() ;

// Ctor Parameters []
explicit MissionObjectivesGameUIController() ;

/// @brief Method .ctor addr 0x2276400 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionObjectivesGameUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionObjectivesGameUIController, "", "MissionObjectivesGameUIController");
