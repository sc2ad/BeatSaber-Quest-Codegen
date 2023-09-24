#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
class RuntimeClipBase;
}
// Type: UnityEngine.Timeline::RuntimeClipBase
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14095))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14094))
// CS Name: UnityEngine.Timeline.RuntimeClipBase
class CORDL_TYPE RuntimeClipBase : public UnityEngine::Timeline::RuntimeElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RuntimeClipBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: " const&", def_value: None }]
constexpr RuntimeClipBase(RuntimeClipBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeClipBase", modifiers: "&&", def_value: None }]
constexpr RuntimeClipBase(RuntimeClipBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RuntimeClipBase(void* ptr) noexcept : UnityEngine::Timeline::RuntimeElement(ptr) {
}


  constexpr RuntimeClipBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RuntimeClipBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RuntimeClipBase& operator=(RuntimeClipBase&& o) noexcept = default;
  constexpr RuntimeClipBase& operator=(RuntimeClipBase const& o) noexcept = default;
                


// Properties

 double_t __declspec(property(get=get_start))  start;

 double_t __declspec(property(get=get_duration))  duration;

 int64_t __declspec(property(get=get_intervalStart))  intervalStart;

 int64_t __declspec(property(get=get_intervalEnd))  intervalEnd;


// Methods

/// @brief Method get_start addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_start() ;

/// @brief Method get_duration addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_duration() ;

/// @brief Method get_intervalStart addr 0x2acf634 size 0x70 virtual true final false
 int64_t get_intervalStart() ;

/// @brief Method get_intervalEnd addr 0x2acf6a4 size 0x84 virtual true final false
 int64_t get_intervalEnd() ;

static UnityEngine::Timeline::RuntimeClipBase New_ctor() ;

/// @brief Method .ctor addr 0x2acf054 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::RuntimeClipBase);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClipBase, "UnityEngine.Timeline", "RuntimeClipBase");
