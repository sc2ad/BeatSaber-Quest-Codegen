#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class FrameRateFieldAttribute;
}
// Type: UnityEngine.Timeline::FrameRateFieldAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14134))
// CS Name: UnityEngine.Timeline.FrameRateFieldAttribute
class CORDL_TYPE FrameRateFieldAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FrameRateFieldAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: " const&", def_value: None }]
constexpr FrameRateFieldAttribute(FrameRateFieldAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FrameRateFieldAttribute", modifiers: "&&", def_value: None }]
constexpr FrameRateFieldAttribute(FrameRateFieldAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FrameRateFieldAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr FrameRateFieldAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FrameRateFieldAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FrameRateFieldAttribute& operator=(FrameRateFieldAttribute&& o) noexcept = default;
  constexpr FrameRateFieldAttribute& operator=(FrameRateFieldAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit FrameRateFieldAttribute() ;

/// @brief Method .ctor addr 0x2ad5e14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::FrameRateFieldAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::FrameRateFieldAttribute, "UnityEngine.Timeline", "FrameRateFieldAttribute");
