#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class MarkerTrack;
}
// Type: UnityEngine.Timeline::MarkerTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14101))
// CS Name: UnityEngine.Timeline.MarkerTrack
class CORDL_TYPE MarkerTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~MarkerTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: " const&", def_value: None }]
constexpr MarkerTrack(MarkerTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkerTrack", modifiers: "&&", def_value: None }]
constexpr MarkerTrack(MarkerTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarkerTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr MarkerTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarkerTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarkerTrack& operator=(MarkerTrack&& o) noexcept = default;
  constexpr MarkerTrack& operator=(MarkerTrack const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;


// Methods

/// @brief Method get_outputs addr 0x2ad01c8 size 0x1e4 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

static UnityEngine::Timeline::MarkerTrack New_ctor() ;

/// @brief Method .ctor addr 0x2ad03ac size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::MarkerTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MarkerTrack, "UnityEngine.Timeline", "MarkerTrack");
