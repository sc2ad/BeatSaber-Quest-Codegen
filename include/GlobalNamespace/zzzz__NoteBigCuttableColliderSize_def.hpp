#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace UnityEngine {
class BoxCollider;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class NoteController;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteBigCuttableColliderSize;
}
// Type: ::NoteBigCuttableColliderSize
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4875))
// CS Name: NoteBigCuttableColliderSize
class CORDL_TYPE NoteBigCuttableColliderSize : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INoteControllerDidInitEvent
constexpr operator  GlobalNamespace::INoteControllerDidInitEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoteBigCuttableColliderSize() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteBigCuttableColliderSize", modifiers: " const&", def_value: None }]
constexpr NoteBigCuttableColliderSize(NoteBigCuttableColliderSize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteBigCuttableColliderSize", modifiers: "&&", def_value: None }]
constexpr NoteBigCuttableColliderSize(NoteBigCuttableColliderSize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteBigCuttableColliderSize(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteBigCuttableColliderSize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteBigCuttableColliderSize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteBigCuttableColliderSize& operator=(NoteBigCuttableColliderSize&& o) noexcept = default;
  constexpr NoteBigCuttableColliderSize& operator=(NoteBigCuttableColliderSize const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NoteController __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(GlobalNamespace::NoteController value) ;

constexpr GlobalNamespace::NoteController __get__noteController() const;

 UnityEngine::BoxCollider __declspec(property(get=__get__boxCollider, put=__set__boxCollider))  _boxCollider;

constexpr void __set__boxCollider(UnityEngine::BoxCollider value) ;

constexpr UnityEngine::BoxCollider __get__boxCollider() const;

 UnityEngine::Vector3 __declspec(property(get=__get__defaultColliderSize, put=__set__defaultColliderSize))  _defaultColliderSize;

constexpr void __set__defaultColliderSize(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__defaultColliderSize() const;


// Methods

/// @brief Method Awake addr 0x223e418 size 0xd0 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x223e4e8 size 0x104 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteControllerDidInit addr 0x223e5ec size 0x74 virtual true final true
 void HandleNoteControllerDidInit(GlobalNamespace::NoteControllerBase noteController) ;

// Ctor Parameters []
explicit NoteBigCuttableColliderSize() ;

/// @brief Method .ctor addr 0x223e660 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteBigCuttableColliderSize);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteBigCuttableColliderSize, "", "NoteBigCuttableColliderSize");
