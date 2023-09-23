#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class GroupTrack;
}
// Type: UnityEngine.Timeline::GroupTrack
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14109))
// CS Name: UnityEngine.Timeline.GroupTrack
class CORDL_TYPE GroupTrack : public UnityEngine::Timeline::TrackAsset {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~GroupTrack() = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupTrack", modifiers: " const&", def_value: None }]
constexpr GroupTrack(GroupTrack const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GroupTrack", modifiers: "&&", def_value: None }]
constexpr GroupTrack(GroupTrack&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GroupTrack(void* ptr) noexcept : UnityEngine::Timeline::TrackAsset(ptr) {
}


  constexpr GroupTrack& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GroupTrack& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GroupTrack& operator=(GroupTrack&& o) noexcept = default;
  constexpr GroupTrack& operator=(GroupTrack const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> __declspec(property(get=get_outputs))  outputs;


// Methods

/// @brief Method CanCompileClips addr 0x2ad18ec size 0x8 virtual true final false
 bool CanCompileClips() ;

/// @brief Method get_outputs addr 0x2ad18f4 size 0x58 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> get_outputs() ;

// Ctor Parameters []
explicit GroupTrack() ;

/// @brief Method .ctor addr 0x2ad194c size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(UnityEngine::Timeline::GroupTrack);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::GroupTrack, "UnityEngine.Timeline", "GroupTrack");
