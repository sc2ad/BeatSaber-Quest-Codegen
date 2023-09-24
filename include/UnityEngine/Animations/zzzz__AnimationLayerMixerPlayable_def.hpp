#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class AvatarMask;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationLayerMixerPlayable;
}
// Type: UnityEngine.Animations::AnimationLayerMixerPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15065))
// CS Name: UnityEngine.Animations.AnimationLayerMixerPlayable
struct CORDL_TYPE AnimationLayerMixerPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Animations::AnimationLayerMixerPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationLayerMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimationLayerMixerPlayable(AnimationLayerMixerPlayable const&) = default;
                    constexpr AnimationLayerMixerPlayable(AnimationLayerMixerPlayable&&) = default;
                    constexpr AnimationLayerMixerPlayable& operator=(AnimationLayerMixerPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationLayerMixerPlayable& operator=(AnimationLayerMixerPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationLayerMixerPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static UnityEngine::Animations::AnimationLayerMixerPlayable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(UnityEngine::Animations::AnimationLayerMixerPlayable value) ;

static UnityEngine::Animations::AnimationLayerMixerPlayable __get_m_NullPlayable() ;


// Methods

/// @brief Method Create addr 0x2b21d58 size 0x70 virtual false final false
static UnityEngine::Animations::AnimationLayerMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) ;

/// @brief Method Create addr 0x2b21dc8 size 0xa8 virtual false final false
static UnityEngine::Animations::AnimationLayerMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool singleLayerOptimization) ;

/// @brief Method CreateHandle addr 0x2b21e70 size 0xe4 virtual false final false
static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) ;

/// @brief Method .ctor addr 0x2b21f54 size 0x114 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle, bool singleLayerOptimization) ;

/// @brief Method GetHandle addr 0x2b22138 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b22144 size 0x30 virtual false final false
static UnityEngine::Playables::Playable op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Animations::AnimationLayerMixerPlayable playable) ;

/// @brief Method Equals addr 0x2b22174 size 0x78 virtual true final true
 bool Equals(UnityEngine::Animations::AnimationLayerMixerPlayable other) ;

/// @brief Method SetLayerMaskFromAvatarMask addr 0x2b221ec size 0x1e0 virtual false final false
 void SetLayerMaskFromAvatarMask(uint32_t layerIndex, UnityEngine::AvatarMask mask) ;

/// @brief Method CreateHandleInternal addr 0x2b22068 size 0x8c virtual false final false
static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

/// @brief Method SetSingleLayerOptimizationInternal addr 0x2b220f4 size 0x44 virtual false final false
static void SetSingleLayerOptimizationInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method SetLayerMaskFromAvatarMaskInternal addr 0x2b223cc size 0x54 virtual false final false
static void SetLayerMaskFromAvatarMaskInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, uint32_t layerIndex, UnityEngine::AvatarMask mask) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2b22420 size 0x44 virtual false final false
static bool CreateHandleInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> graph, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationLayerMixerPlayable, "UnityEngine.Animations", "AnimationLayerMixerPlayable");
