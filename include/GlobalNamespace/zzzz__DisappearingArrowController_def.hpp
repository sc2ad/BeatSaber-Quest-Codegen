#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__GameNoteController_def.hpp"
namespace {
namespace GlobalNamespace {
class GameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class DisappearingArrowController;
}
// Type: ::DisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4860)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4858), inst: 297 }), TypeDefinitionIndex(TypeDefinitionIndex(4858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4857))
// CS Name: DisappearingArrowController
class CORDL_TYPE DisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::GameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~DisappearingArrowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: " const&", def_value: None }]
constexpr DisappearingArrowController(DisappearingArrowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DisappearingArrowController", modifiers: "&&", def_value: None }]
constexpr DisappearingArrowController(DisappearingArrowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DisappearingArrowController(void* ptr) noexcept : ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::GameNoteController>(ptr) {
}


  constexpr DisappearingArrowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DisappearingArrowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DisappearingArrowController& operator=(DisappearingArrowController&& o) noexcept = default;
  constexpr DisappearingArrowController& operator=(DisappearingArrowController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameNoteController __declspec(property(get=__get__gameNoteController, put=__set__gameNoteController))  _gameNoteController;

constexpr void __set__gameNoteController(::GlobalNamespace::GameNoteController value) ;

constexpr ::GlobalNamespace::GameNoteController __get__gameNoteController() const;


// Properties

 ::GlobalNamespace::GameNoteController __declspec(property(get=get_gameNoteController))  gameNoteController;


// Methods

/// @brief Method get_gameNoteController addr 0x223b86c size 0x8 virtual true final false
 ::GlobalNamespace::GameNoteController get_gameNoteController() ;

// Ctor Parameters []
explicit DisappearingArrowController() ;

/// @brief Method .ctor addr 0x223b874 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisappearingArrowController, "", "DisappearingArrowController");
