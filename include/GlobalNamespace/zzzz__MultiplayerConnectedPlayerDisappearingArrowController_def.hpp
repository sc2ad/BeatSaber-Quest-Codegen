#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerDisappearingArrowController;
}
// Type: ::MultiplayerConnectedPlayerDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4858), inst: 340 }), TypeDefinitionIndex(TypeDefinitionIndex(5237)), TypeDefinitionIndex(TypeDefinitionIndex(4858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5235))
// CS Name: MultiplayerConnectedPlayerDisappearingArrowController
class CORDL_TYPE MultiplayerConnectedPlayerDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerConnectedPlayerDisappearingArrowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerDisappearingArrowController(void* ptr) noexcept : ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>(ptr) {
}


  constexpr MultiplayerConnectedPlayerDisappearingArrowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerDisappearingArrowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerDisappearingArrowController& operator=(MultiplayerConnectedPlayerDisappearingArrowController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerDisappearingArrowController& operator=(MultiplayerConnectedPlayerDisappearingArrowController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=__get__gameNoteController, put=__set__gameNoteController))  _gameNoteController;

constexpr void __set__gameNoteController(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __get__gameNoteController() const;


// Properties

 ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=get_gameNoteController))  gameNoteController;


// Methods

/// @brief Method get_gameNoteController addr 0x20e215c size 0x8 virtual true final false
 ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController get_gameNoteController() ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerDisappearingArrowController() ;

/// @brief Method .ctor addr 0x20e2164 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController, "", "MultiplayerConnectedPlayerDisappearingArrowController");
