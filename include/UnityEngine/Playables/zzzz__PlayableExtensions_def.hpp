#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
// Forward declare root types
namespace UnityEngine::Playables {
class PlayableExtensions;
}
// Type: UnityEngine.Playables::PlayableExtensions
namespace UnityEngine::Playables {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10370))
// CS Name: UnityEngine.Playables.PlayableExtensions
class CORDL_TYPE PlayableExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayableExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: " const&", def_value: None }]
constexpr PlayableExtensions(PlayableExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayableExtensions", modifiers: "&&", def_value: None }]
constexpr PlayableExtensions(PlayableExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayableExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayableExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayableExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayableExtensions& operator=(PlayableExtensions&& o) noexcept = default;
  constexpr PlayableExtensions& operator=(PlayableExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method IsValid addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static bool IsValid(U playable) ;

/// @brief Method GetGraph addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static ::UnityEngine::Playables::PlayableGraph GetGraph(U playable) ;

/// @brief Method GetPlayState addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static ::UnityEngine::Playables::PlayState GetPlayState(U playable) ;

/// @brief Method Play addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void Play(U playable) ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void Pause(U playable) ;

/// @brief Method SetSpeed addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetSpeed(U playable, double_t value) ;

/// @brief Method SetDuration addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetDuration(U playable, double_t value) ;

/// @brief Method GetDuration addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static double_t GetDuration(U playable) ;

/// @brief Method SetTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetTime(U playable, double_t value) ;

/// @brief Method GetTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static double_t GetTime(U playable) ;

/// @brief Method GetPreviousTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static double_t GetPreviousTime(U playable) ;

/// @brief Method IsDone addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static bool IsDone(U playable) ;

/// @brief Method SetPropagateSetTime addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetPropagateSetTime(U playable, bool value) ;

/// @brief Method SetInputCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetInputCount(U playable, int32_t value) ;

/// @brief Method GetInputCount addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static int32_t GetInputCount(U playable) ;

/// @brief Method GetInput addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static ::UnityEngine::Playables::Playable GetInput(U playable, int32_t inputPort) ;

/// @brief Method SetInputWeight addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetInputWeight(U playable, int32_t inputIndex, float_t weight) ;

/// @brief Method SetInputWeight addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U,typename V>
static void SetInputWeight(U playable, V input, float_t weight) ;

/// @brief Method GetInputWeight addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static float_t GetInputWeight(U playable, int32_t inputIndex) ;

/// @brief Method SetTraversalMode addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetTraversalMode(U playable, ::UnityEngine::Playables::PlayableTraversalMode mode) ;

/// @brief Method GetTimeWrapMode addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode(U playable) ;

/// @brief Method SetTimeWrapMode addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename U>
static void SetTimeWrapMode(U playable, ::UnityEngine::Playables::DirectorWrapMode value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Playables::PlayableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableExtensions, "UnityEngine.Playables", "PlayableExtensions");
