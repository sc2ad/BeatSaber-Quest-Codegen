#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
namespace {
namespace GlobalNamespace {
class MirroredGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MirroredDisappearingArrowController;
}
// Type: ::MirroredDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4871)), TypeDefinitionIndex(TypeDefinitionIndex(4858)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4858), inst: 332 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4869))
// CS Name: MirroredDisappearingArrowController
class CORDL_TYPE MirroredDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MirroredGameNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MirroredDisappearingArrowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: " const&", def_value: None }]
constexpr MirroredDisappearingArrowController(MirroredDisappearingArrowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredDisappearingArrowController", modifiers: "&&", def_value: None }]
constexpr MirroredDisappearingArrowController(MirroredDisappearingArrowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredDisappearingArrowController(void* ptr) noexcept : ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MirroredGameNoteController>(ptr) {
}


  constexpr MirroredDisappearingArrowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredDisappearingArrowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredDisappearingArrowController& operator=(MirroredDisappearingArrowController&& o) noexcept = default;
  constexpr MirroredDisappearingArrowController& operator=(MirroredDisappearingArrowController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MirroredGameNoteController __declspec(property(get=__get__mirroredGameNoteController, put=__set__mirroredGameNoteController))  _mirroredGameNoteController;

constexpr void __set__mirroredGameNoteController(::GlobalNamespace::MirroredGameNoteController value) ;

constexpr ::GlobalNamespace::MirroredGameNoteController __get__mirroredGameNoteController() const;


// Properties

 ::GlobalNamespace::MirroredGameNoteController __declspec(property(get=get_gameNoteController))  gameNoteController;


// Methods

/// @brief Method get_gameNoteController addr 0x223d544 size 0x8 virtual true final false
 ::GlobalNamespace::MirroredGameNoteController get_gameNoteController() ;

// Ctor Parameters []
explicit MirroredDisappearingArrowController() ;

/// @brief Method .ctor addr 0x223d54c size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MirroredDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredDisappearingArrowController, "", "MirroredDisappearingArrowController");
