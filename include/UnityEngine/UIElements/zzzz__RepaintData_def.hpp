#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class RepaintData;
}
// Type: UnityEngine.UIElements::RepaintData
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6953))
// CS Name: UnityEngine.UIElements.RepaintData
class CORDL_TYPE RepaintData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~RepaintData() = default;

// Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: " const&", def_value: None }]
constexpr RepaintData(RepaintData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RepaintData", modifiers: "&&", def_value: None }]
constexpr RepaintData(RepaintData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RepaintData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RepaintData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RepaintData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RepaintData& operator=(RepaintData&& o) noexcept = default;
  constexpr RepaintData& operator=(RepaintData const& o) noexcept = default;
                


// Fields

 UnityEngine::Matrix4x4 __declspec(property(get=__get__currentOffset_k__BackingField, put=__set__currentOffset_k__BackingField))  _currentOffset_k__BackingField;

constexpr void __set__currentOffset_k__BackingField(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get__currentOffset_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__mousePosition_k__BackingField, put=__set__mousePosition_k__BackingField))  _mousePosition_k__BackingField;

constexpr void __set__mousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__mousePosition_k__BackingField() const;

 UnityEngine::Rect __declspec(property(get=__get__currentWorldClip_k__BackingField, put=__set__currentWorldClip_k__BackingField))  _currentWorldClip_k__BackingField;

constexpr void __set__currentWorldClip_k__BackingField(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get__currentWorldClip_k__BackingField() const;

 UnityEngine::Event __declspec(property(get=__get__repaintEvent_k__BackingField, put=__set__repaintEvent_k__BackingField))  _repaintEvent_k__BackingField;

constexpr void __set__repaintEvent_k__BackingField(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get__repaintEvent_k__BackingField() const;


// Properties

 UnityEngine::Matrix4x4 __declspec(property(get=get_currentOffset))  currentOffset;

 UnityEngine::Rect __declspec(property(get=get_currentWorldClip))  currentWorldClip;

 UnityEngine::Event __declspec(property(get=get_repaintEvent, put=set_repaintEvent))  repaintEvent;


// Methods

/// @brief Method get_currentOffset addr 0x2c4fbbc size 0x14 virtual false final false
 UnityEngine::Matrix4x4 get_currentOffset() ;

/// @brief Method get_currentWorldClip addr 0x2c4fbd0 size 0xc virtual false final false
 UnityEngine::Rect get_currentWorldClip() ;

/// @brief Method get_repaintEvent addr 0x2c4fbdc size 0x8 virtual false final false
 UnityEngine::Event get_repaintEvent() ;

/// @brief Method set_repaintEvent addr 0x2c4fbe4 size 0x8 virtual false final false
 void set_repaintEvent(UnityEngine::Event value) ;

static UnityEngine::UIElements::RepaintData New_ctor() ;

/// @brief Method .ctor addr 0x2c4fbec size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::RepaintData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::RepaintData, "UnityEngine.UIElements", "RepaintData");
