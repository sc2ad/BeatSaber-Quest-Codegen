#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackClipTypeAttribute;
}
// Type: UnityEngine.Timeline::TrackClipTypeAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14126))
// CS Name: UnityEngine.Timeline.TrackClipTypeAttribute
class CORDL_TYPE TrackClipTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TrackClipTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: " const&", def_value: None }]
constexpr TrackClipTypeAttribute(TrackClipTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackClipTypeAttribute", modifiers: "&&", def_value: None }]
constexpr TrackClipTypeAttribute(TrackClipTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackClipTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TrackClipTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackClipTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackClipTypeAttribute& operator=(TrackClipTypeAttribute&& o) noexcept = default;
  constexpr TrackClipTypeAttribute& operator=(TrackClipTypeAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_inspectedType, put=__set_inspectedType))  inspectedType;

constexpr void __set_inspectedType(System::Type value) ;

constexpr System::Type __get_inspectedType() const;

 bool __declspec(property(get=__get_allowAutoCreate, put=__set_allowAutoCreate))  allowAutoCreate;

constexpr void __set_allowAutoCreate(bool value) ;

constexpr bool __get_allowAutoCreate() const;


// Methods

// Ctor Parameters [CppParam { name: "clipClass", ty: "System::Type", modifiers: "", def_value: None }]
explicit TrackClipTypeAttribute(System::Type clipClass) ;

/// @brief Method .ctor addr 0x2ad5cec size 0x30 virtual false final false
 void _ctor(System::Type clipClass) ;

// Ctor Parameters [CppParam { name: "clipClass", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "allowAutoCreate", ty: "bool", modifiers: "", def_value: None }]
explicit TrackClipTypeAttribute(System::Type clipClass, bool allowAutoCreate) ;

/// @brief Method .ctor addr 0x2ad5d1c size 0x28 virtual false final false
 void _ctor(System::Type clipClass, bool allowAutoCreate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TrackClipTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackClipTypeAttribute, "UnityEngine.Timeline", "TrackClipTypeAttribute");
