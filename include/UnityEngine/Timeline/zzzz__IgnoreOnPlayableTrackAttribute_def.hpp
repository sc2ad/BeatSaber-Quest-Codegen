#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class IgnoreOnPlayableTrackAttribute;
}
// Type: UnityEngine.Timeline::IgnoreOnPlayableTrackAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14131))
// CS Name: UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
class CORDL_TYPE IgnoreOnPlayableTrackAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IgnoreOnPlayableTrackAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: " const&", def_value: None }]
constexpr IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IgnoreOnPlayableTrackAttribute", modifiers: "&&", def_value: None }]
constexpr IgnoreOnPlayableTrackAttribute(IgnoreOnPlayableTrackAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IgnoreOnPlayableTrackAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr IgnoreOnPlayableTrackAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IgnoreOnPlayableTrackAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IgnoreOnPlayableTrackAttribute& operator=(IgnoreOnPlayableTrackAttribute&& o) noexcept = default;
  constexpr IgnoreOnPlayableTrackAttribute& operator=(IgnoreOnPlayableTrackAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IgnoreOnPlayableTrackAttribute() ;

/// @brief Method .ctor addr 0x2ad5ddc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute, "UnityEngine.Timeline", "IgnoreOnPlayableTrackAttribute");
