#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PhysicsRaycaster_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct RaycastHit2D;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class Physics2DRaycaster;
}
// Type: UnityEngine.EventSystems::Physics2DRaycaster
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13149))
// CS Name: UnityEngine.EventSystems.Physics2DRaycaster
class CORDL_TYPE Physics2DRaycaster : public UnityEngine::EventSystems::PhysicsRaycaster {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Physics2DRaycaster() = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: " const&", def_value: None }]
constexpr Physics2DRaycaster(Physics2DRaycaster const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics2DRaycaster", modifiers: "&&", def_value: None }]
constexpr Physics2DRaycaster(Physics2DRaycaster&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Physics2DRaycaster(void* ptr) noexcept : UnityEngine::EventSystems::PhysicsRaycaster(ptr) {
}


  constexpr Physics2DRaycaster& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Physics2DRaycaster& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Physics2DRaycaster& operator=(Physics2DRaycaster&& o) noexcept = default;
  constexpr Physics2DRaycaster& operator=(Physics2DRaycaster const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::RaycastHit2D> __declspec(property(get=__get_m_Hits, put=__set_m_Hits))  m_Hits;

constexpr void __set_m_Hits(::ArrayW<UnityEngine::RaycastHit2D> value) ;

constexpr ::ArrayW<UnityEngine::RaycastHit2D> __get_m_Hits() const;


// Methods

// Ctor Parameters []
explicit Physics2DRaycaster() ;

/// @brief Method .ctor addr 0x2c27268 size 0x28 virtual false final false
 void _ctor() ;

/// @brief Method Raycast addr 0x2c272b8 size 0x5c0 virtual true final false
 void Raycast(UnityEngine::EventSystems::PointerEventData eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> resultAppendList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::Physics2DRaycaster);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::Physics2DRaycaster, "UnityEngine.EventSystems", "Physics2DRaycaster");
