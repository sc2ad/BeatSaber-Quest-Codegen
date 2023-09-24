#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerTrack_def.hpp"
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalTrack;
}
// Type: UnityEngine.Timeline::SignalTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14101))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14107))
// CS Name: UnityEngine.Timeline.SignalTrack
class CORDL_TYPE SignalTrack : public UnityEngine::Timeline::MarkerTrack {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~SignalTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: " const&", def_value: None }]
constexpr SignalTrack(SignalTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignalTrack", modifiers: "&&", def_value: None }]
constexpr SignalTrack(SignalTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignalTrack(void* ptr) noexcept : UnityEngine::Timeline::MarkerTrack(ptr) {
}


  constexpr SignalTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignalTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignalTrack& operator=(SignalTrack&& o) noexcept = default;
  constexpr SignalTrack& operator=(SignalTrack const& o) noexcept = default;
                


// Methods

static UnityEngine::Timeline::SignalTrack New_ctor() ;

/// @brief Method .ctor addr 0x2ad14f4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::SignalTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalTrack, "UnityEngine.Timeline", "SignalTrack");
