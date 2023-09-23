#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class InfiniteRuntimeClip;
}
// Type: UnityEngine.Timeline::InfiniteRuntimeClip
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14095))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14088))
// CS Name: UnityEngine.Timeline.InfiniteRuntimeClip
class CORDL_TYPE InfiniteRuntimeClip : public UnityEngine::Timeline::RuntimeElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InfiniteRuntimeClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: " const&", def_value: None }]
constexpr InfiniteRuntimeClip(InfiniteRuntimeClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InfiniteRuntimeClip", modifiers: "&&", def_value: None }]
constexpr InfiniteRuntimeClip(InfiniteRuntimeClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InfiniteRuntimeClip(void* ptr) noexcept : UnityEngine::Timeline::RuntimeElement(ptr) {
}


  constexpr InfiniteRuntimeClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InfiniteRuntimeClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InfiniteRuntimeClip& operator=(InfiniteRuntimeClip&& o) noexcept = default;
  constexpr InfiniteRuntimeClip& operator=(InfiniteRuntimeClip const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::Playable __declspec(property(get=__get_m_Playable, put=__set_m_Playable))  m_Playable;

constexpr void __set_m_Playable(UnityEngine::Playables::Playable value) ;

constexpr UnityEngine::Playables::Playable __get_m_Playable() const;

static int64_t __declspec(property(get=__get_kIntervalEnd, put=__set_kIntervalEnd))  kIntervalEnd;

static void __set_kIntervalEnd(int64_t value) ;

static int64_t __get_kIntervalEnd() ;


// Properties

 int64_t __declspec(property(get=get_intervalStart))  intervalStart;

 int64_t __declspec(property(get=get_intervalEnd))  intervalEnd;

 bool __declspec(property(put=set_enable))  enable;


// Methods

// Ctor Parameters [CppParam { name: "playable", ty: "UnityEngine::Playables::Playable", modifiers: "", def_value: None }]
explicit InfiniteRuntimeClip(UnityEngine::Playables::Playable playable) ;

/// @brief Method .ctor addr 0x2abb62c size 0x2c virtual false final false
 void _ctor(UnityEngine::Playables::Playable playable) ;

/// @brief Method get_intervalStart addr 0x2acedc8 size 0x8 virtual true final false
 int64_t get_intervalStart() ;

/// @brief Method get_intervalEnd addr 0x2acedd0 size 0x58 virtual true final false
 int64_t get_intervalEnd() ;

/// @brief Method set_enable addr 0x2acee28 size 0x74 virtual true final false
 void set_enable(bool value) ;

/// @brief Method EvaluateAt addr 0x2acee9c size 0x58 virtual true final false
 void EvaluateAt(double_t localTime, UnityEngine::Playables::FrameData frameData) ;

/// @brief Method DisableAt addr 0x2aceef4 size 0x6c virtual true final false
 void DisableAt(double_t localTime, double_t rootDuration, UnityEngine::Playables::FrameData frameData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::InfiniteRuntimeClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::InfiniteRuntimeClip, "UnityEngine.Timeline", "InfiniteRuntimeClip");
