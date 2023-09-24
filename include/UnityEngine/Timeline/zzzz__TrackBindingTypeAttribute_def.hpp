#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace UnityEngine::Timeline {
struct TrackBindingFlags;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
// Type: UnityEngine.Timeline::TrackBindingTypeAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14129))
// CS Name: UnityEngine.Timeline.TrackBindingTypeAttribute
class CORDL_TYPE TrackBindingTypeAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TrackBindingTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackBindingTypeAttribute", modifiers: " const&", def_value: None }]
constexpr TrackBindingTypeAttribute(TrackBindingTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackBindingTypeAttribute", modifiers: "&&", def_value: None }]
constexpr TrackBindingTypeAttribute(TrackBindingTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackBindingTypeAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr TrackBindingTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackBindingTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackBindingTypeAttribute& operator=(TrackBindingTypeAttribute&& o) noexcept = default;
  constexpr TrackBindingTypeAttribute& operator=(TrackBindingTypeAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Type value) ;

constexpr System::Type __get_type() const;

 UnityEngine::Timeline::TrackBindingFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(UnityEngine::Timeline::TrackBindingFlags value) ;

constexpr UnityEngine::Timeline::TrackBindingFlags __get_flags() const;


// Methods

static UnityEngine::Timeline::TrackBindingTypeAttribute New_ctor(System::Type type) ;

/// @brief Method .ctor addr 0x2ad5d4c size 0x30 virtual false final false
 void _ctor(System::Type type) ;

static UnityEngine::Timeline::TrackBindingTypeAttribute New_ctor(System::Type type, UnityEngine::Timeline::TrackBindingFlags flags) ;

/// @brief Method .ctor addr 0x2ad5d7c size 0x30 virtual false final false
 void _ctor(System::Type type, UnityEngine::Timeline::TrackBindingFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::TrackBindingTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackBindingTypeAttribute, "UnityEngine.Timeline", "TrackBindingTypeAttribute");
