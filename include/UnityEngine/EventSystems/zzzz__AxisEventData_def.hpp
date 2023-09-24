#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class AxisEventData;
}
// Type: UnityEngine.EventSystems::AxisEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13104))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13102))
// CS Name: UnityEngine.EventSystems.AxisEventData
class CORDL_TYPE AxisEventData : public UnityEngine::EventSystems::BaseEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AxisEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisEventData", modifiers: " const&", def_value: None }]
constexpr AxisEventData(AxisEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisEventData", modifiers: "&&", def_value: None }]
constexpr AxisEventData(AxisEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AxisEventData(void* ptr) noexcept : UnityEngine::EventSystems::BaseEventData(ptr) {
}


  constexpr AxisEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AxisEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AxisEventData& operator=(AxisEventData&& o) noexcept = default;
  constexpr AxisEventData& operator=(AxisEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get__moveVector_k__BackingField, put=__set__moveVector_k__BackingField))  _moveVector_k__BackingField;

constexpr void __set__moveVector_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__moveVector_k__BackingField() const;

 UnityEngine::EventSystems::MoveDirection __declspec(property(get=__get__moveDir_k__BackingField, put=__set__moveDir_k__BackingField))  _moveDir_k__BackingField;

constexpr void __set__moveDir_k__BackingField(UnityEngine::EventSystems::MoveDirection value) ;

constexpr UnityEngine::EventSystems::MoveDirection __get__moveDir_k__BackingField() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_moveVector, put=set_moveVector))  moveVector;

 UnityEngine::EventSystems::MoveDirection __declspec(property(get=get_moveDir, put=set_moveDir))  moveDir;


// Methods

/// @brief Method get_moveVector addr 0x2c1c1b8 size 0x8 virtual false final false
 UnityEngine::Vector2 get_moveVector() ;

/// @brief Method set_moveVector addr 0x2c1c1c0 size 0x8 virtual false final false
 void set_moveVector(UnityEngine::Vector2 value) ;

/// @brief Method get_moveDir addr 0x2c1c1c8 size 0x8 virtual false final false
 UnityEngine::EventSystems::MoveDirection get_moveDir() ;

/// @brief Method set_moveDir addr 0x2c1c1d0 size 0x8 virtual false final false
 void set_moveDir(UnityEngine::EventSystems::MoveDirection value) ;

static UnityEngine::EventSystems::AxisEventData New_ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x2c1c1d8 size 0x68 virtual false final false
 void _ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::AxisEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AxisEventData, "UnityEngine.EventSystems", "AxisEventData");
