#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
class IInterval;
}
// Type: UnityEngine.Timeline::IInterval
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14089))
// CS Name: UnityEngine.Timeline.IInterval
class CORDL_TYPE IInterval : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInterval() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInterval(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int64_t __declspec(property(get=get_intervalStart))  intervalStart;

 int64_t __declspec(property(get=get_intervalEnd))  intervalEnd;


// Methods

/// @brief Method get_intervalStart addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_intervalStart() ;

/// @brief Method get_intervalEnd addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t get_intervalEnd() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Timeline::IInterval);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IInterval, "UnityEngine.Timeline", "IInterval");
