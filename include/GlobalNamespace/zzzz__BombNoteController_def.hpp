#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class CuttableBySaber;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BombNoteController__Pool;
}
// Type: ::BombNoteController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4852))
// CS Name: BombNoteController
class CORDL_TYPE BombNoteController : public ::GlobalNamespace::NoteController {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__BombNoteController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BombNoteController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: " const&", def_value: None }]
constexpr BombNoteController(BombNoteController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BombNoteController", modifiers: "&&", def_value: None }]
constexpr BombNoteController(BombNoteController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BombNoteController(void* ptr) noexcept : ::GlobalNamespace::NoteController(ptr) {
}


  constexpr BombNoteController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BombNoteController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BombNoteController& operator=(BombNoteController&& o) noexcept = default;
  constexpr BombNoteController& operator=(BombNoteController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::CuttableBySaber __declspec(property(get=__get__cuttableBySaber, put=__set__cuttableBySaber))  _cuttableBySaber;

constexpr void __set__cuttableBySaber(::GlobalNamespace::CuttableBySaber value) ;

constexpr ::GlobalNamespace::CuttableBySaber __get__cuttableBySaber() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__wrapperGO, put=__set__wrapperGO))  _wrapperGO;

constexpr void __set__wrapperGO(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__wrapperGO() const;


// Methods

/// @brief Method Init addr 0x222edd0 size 0xd4 virtual false final false
 void Init(::GlobalNamespace::NoteData noteData, float_t worldRotation, ::UnityEngine::Vector3 moveStartPos, ::UnityEngine::Vector3 moveEndPos, ::UnityEngine::Vector3 jumpEndPos, float_t moveDuration, float_t jumpDuration, float_t jumpGravity) ;

/// @brief Method Awake addr 0x2238d88 size 0x100 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2238e88 size 0xe0 virtual true final false
 void OnDestroy() ;

/// @brief Method NoteDidPassMissedMarker addr 0x2238f68 size 0x34 virtual true final false
 void NoteDidPassMissedMarker() ;

/// @brief Method HandleDidPassHalfJump addr 0x2238f9c size 0x24 virtual false final false
 void HandleDidPassHalfJump() ;

/// @brief Method HandleWasCutBySaber addr 0x2238fc0 size 0x298 virtual false final false
 void HandleWasCutBySaber(::GlobalNamespace::Saber saber, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Quaternion orientation, ::UnityEngine::Vector3 cutDirVec) ;

/// @brief Method NoteDidStartDissolving addr 0x2239258 size 0x24 virtual true final false
 void NoteDidStartDissolving() ;

/// @brief Method HiddenStateDidChange addr 0x223927c size 0x24 virtual true final false
 void HiddenStateDidChange(bool hide) ;

/// @brief Method Pause addr 0x22392a0 size 0x10 virtual true final false
 void Pause(bool pause) ;

// Ctor Parameters []
explicit BombNoteController() ;

/// @brief Method .ctor addr 0x22392b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2706 }), TypeDefinitionIndex(TypeDefinitionIndex(4852)), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4851))
// CS Name: BombNoteController::Pool
class CORDL_TYPE ____GlobalNamespace__BombNoteController__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BombNoteController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__BombNoteController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BombNoteController__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BombNoteController__Pool(____GlobalNamespace__BombNoteController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BombNoteController__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BombNoteController__Pool(____GlobalNamespace__BombNoteController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BombNoteController__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BombNoteController>(ptr) {
}


  constexpr ____GlobalNamespace__BombNoteController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BombNoteController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BombNoteController__Pool& operator=(____GlobalNamespace__BombNoteController__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__BombNoteController__Pool& operator=(____GlobalNamespace__BombNoteController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BombNoteController__Pool() ;

/// @brief Method .ctor addr 0x22392b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BombNoteController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombNoteController, "", "BombNoteController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BombNoteController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BombNoteController__Pool, "", "BombNoteController/Pool");
