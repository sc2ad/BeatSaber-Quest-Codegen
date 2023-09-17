#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__INoteMirrorable_def.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class MirroredBombNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MirroredBombNoteController__Pool;
}
// Type: ::MirroredBombNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4872)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4872), inst: 4484 }), TypeDefinitionIndex(TypeDefinitionIndex(4863))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4868))
// CS Name: MirroredBombNoteController
class CORDL_TYPE MirroredBombNoteController : public ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::INoteMirrorable> {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__MirroredBombNoteController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MirroredBombNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: " const&", def_value: None }]
constexpr MirroredBombNoteController(MirroredBombNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredBombNoteController", modifiers: "&&", def_value: None }]
constexpr MirroredBombNoteController(MirroredBombNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredBombNoteController(void* ptr) noexcept : ::GlobalNamespace::MirroredNoteController_1<::GlobalNamespace::INoteMirrorable>(ptr) {
}


  constexpr MirroredBombNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredBombNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredBombNoteController& operator=(MirroredBombNoteController&& o) noexcept = default;
  constexpr MirroredBombNoteController& operator=(MirroredBombNoteController const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MirroredBombNoteController() ;

/// @brief Method .ctor addr 0x223d4b4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2711 }), TypeDefinitionIndex(TypeDefinitionIndex(4868)), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4867))
// CS Name: MirroredBombNoteController::Pool
class CORDL_TYPE ____GlobalNamespace__MirroredBombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredBombNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__MirroredBombNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MirroredBombNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MirroredBombNoteController__Pool(____GlobalNamespace__MirroredBombNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MirroredBombNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MirroredBombNoteController__Pool(____GlobalNamespace__MirroredBombNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MirroredBombNoteController__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::MirroredBombNoteController>(ptr) {
}


  constexpr ____GlobalNamespace__MirroredBombNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MirroredBombNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MirroredBombNoteController__Pool& operator=(____GlobalNamespace__MirroredBombNoteController__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__MirroredBombNoteController__Pool& operator=(____GlobalNamespace__MirroredBombNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MirroredBombNoteController__Pool() ;

/// @brief Method .ctor addr 0x223d4fc size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MirroredBombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MirroredBombNoteController, "", "MirroredBombNoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MirroredBombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MirroredBombNoteController__Pool, "", "MirroredBombNoteController/Pool");
