#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderNoteDisappearingArrowController;
}
// Type: ::BurstSliderNoteDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4854)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4858), inst: 275 }), TypeDefinitionIndex(TypeDefinitionIndex(4858))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4855))
// CS Name: BurstSliderNoteDisappearingArrowController
class CORDL_TYPE BurstSliderNoteDisappearingArrowController : public GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::BurstSliderGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~BurstSliderNoteDisappearingArrowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: " const&", def_value: None }]
constexpr BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "&&", def_value: None }]
constexpr BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BurstSliderNoteDisappearingArrowController(void* ptr) noexcept : GlobalNamespace::DisappearingArrowControllerBase_1<GlobalNamespace::BurstSliderGameNoteController>(ptr) {
}


  constexpr BurstSliderNoteDisappearingArrowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BurstSliderNoteDisappearingArrowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BurstSliderNoteDisappearingArrowController& operator=(BurstSliderNoteDisappearingArrowController&& o) noexcept = default;
  constexpr BurstSliderNoteDisappearingArrowController& operator=(BurstSliderNoteDisappearingArrowController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BurstSliderGameNoteController __declspec(property(get=__get__burstSliderNoteController, put=__set__burstSliderNoteController))  _burstSliderNoteController;

constexpr void __set__burstSliderNoteController(GlobalNamespace::BurstSliderGameNoteController value) ;

constexpr GlobalNamespace::BurstSliderGameNoteController __get__burstSliderNoteController() const;


// Properties

 GlobalNamespace::BurstSliderGameNoteController __declspec(property(get=get_gameNoteController))  gameNoteController;


// Methods

/// @brief Method get_gameNoteController addr 0x223afa8 size 0x8 virtual true final false
 GlobalNamespace::BurstSliderGameNoteController get_gameNoteController() ;

// Ctor Parameters []
explicit BurstSliderNoteDisappearingArrowController() ;

/// @brief Method .ctor addr 0x223afb0 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BurstSliderNoteDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BurstSliderNoteDisappearingArrowController, "", "BurstSliderNoteDisappearingArrowController");
