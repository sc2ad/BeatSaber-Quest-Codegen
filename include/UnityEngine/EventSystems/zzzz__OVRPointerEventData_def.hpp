#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class OVRPointerEventData;
}
// Type: UnityEngine.EventSystems::OVRPointerEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13107))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9521))
// CS Name: UnityEngine.EventSystems.OVRPointerEventData
class CORDL_TYPE OVRPointerEventData : public UnityEngine::EventSystems::PointerEventData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x180};

virtual ~OVRPointerEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPointerEventData", modifiers: " const&", def_value: None }]
constexpr OVRPointerEventData(OVRPointerEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRPointerEventData", modifiers: "&&", def_value: None }]
constexpr OVRPointerEventData(OVRPointerEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRPointerEventData(void* ptr) noexcept : UnityEngine::EventSystems::PointerEventData(ptr) {
}


  constexpr OVRPointerEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRPointerEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRPointerEventData& operator=(OVRPointerEventData&& o) noexcept = default;
  constexpr OVRPointerEventData& operator=(OVRPointerEventData const& o) noexcept = default;
                


// Fields

 UnityEngine::Ray __declspec(property(get=__get_worldSpaceRay, put=__set_worldSpaceRay))  worldSpaceRay;

constexpr void __set_worldSpaceRay(UnityEngine::Ray value) ;

constexpr UnityEngine::Ray __get_worldSpaceRay() const;

 UnityEngine::Vector2 __declspec(property(get=__get_swipeStart, put=__set_swipeStart))  swipeStart;

constexpr void __set_swipeStart(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_swipeStart() const;


// Methods

// Ctor Parameters [CppParam { name: "eventSystem", ty: "UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
explicit OVRPointerEventData(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x266c67c size 0x8 virtual false final false
 void _ctor(UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method ToString addr 0x266e768 size 0x3b4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
NEED_NO_BOX(UnityEngine::EventSystems::OVRPointerEventData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::OVRPointerEventData, "UnityEngine.EventSystems", "OVRPointerEventData");
