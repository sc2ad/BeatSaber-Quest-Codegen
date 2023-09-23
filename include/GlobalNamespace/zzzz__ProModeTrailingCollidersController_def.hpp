#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace GlobalNamespace {
class NoteMovement;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class BoxCuttableBySaber;
}
// Forward declare root types
namespace GlobalNamespace {
class ProModeTrailingCollidersController;
}
// Type: ::ProModeTrailingCollidersController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4900))
// CS Name: ProModeTrailingCollidersController
class CORDL_TYPE ProModeTrailingCollidersController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ProModeTrailingCollidersController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: " const&", def_value: None }]
constexpr ProModeTrailingCollidersController(ProModeTrailingCollidersController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProModeTrailingCollidersController", modifiers: "&&", def_value: None }]
constexpr ProModeTrailingCollidersController(ProModeTrailingCollidersController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProModeTrailingCollidersController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ProModeTrailingCollidersController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProModeTrailingCollidersController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProModeTrailingCollidersController& operator=(ProModeTrailingCollidersController&& o) noexcept = default;
  constexpr ProModeTrailingCollidersController& operator=(ProModeTrailingCollidersController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BoxCuttableBySaber __declspec(property(get=__get__mainSmallCuttableBySaber, put=__set__mainSmallCuttableBySaber))  _mainSmallCuttableBySaber;

constexpr void __set__mainSmallCuttableBySaber(GlobalNamespace::BoxCuttableBySaber value) ;

constexpr GlobalNamespace::BoxCuttableBySaber __get__mainSmallCuttableBySaber() const;

 ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __declspec(property(get=__get__trailingSmallCuttableBySaberList, put=__set__trailingSmallCuttableBySaberList))  _trailingSmallCuttableBySaberList;

constexpr void __set__trailingSmallCuttableBySaberList(::ArrayW<GlobalNamespace::BoxCuttableBySaber> value) ;

constexpr ::ArrayW<GlobalNamespace::BoxCuttableBySaber> __get__trailingSmallCuttableBySaberList() const;

 GlobalNamespace::NoteMovement __declspec(property(get=__get__noteMovement, put=__set__noteMovement))  _noteMovement;

constexpr void __set__noteMovement(GlobalNamespace::NoteMovement value) ;

constexpr GlobalNamespace::NoteMovement __get__noteMovement() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Start addr 0x22433a8 size 0x98 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2243440 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteDidMoveInJumpPhase addr 0x2243510 size 0x170 virtual false final false
 void HandleNoteDidMoveInJumpPhase() ;

// Ctor Parameters []
explicit ProModeTrailingCollidersController() ;

/// @brief Method .ctor addr 0x2243680 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ProModeTrailingCollidersController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ProModeTrailingCollidersController, "", "ProModeTrailingCollidersController");
