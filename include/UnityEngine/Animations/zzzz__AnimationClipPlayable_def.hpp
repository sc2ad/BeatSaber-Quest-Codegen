#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationClipPlayable;
}
// Type: UnityEngine.Animations::AnimationClipPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15066))
// CS Name: UnityEngine.Animations.AnimationClipPlayable
struct CORDL_TYPE AnimationClipPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Animations::AnimationClipPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Animations::AnimationClipPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationClipPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimationClipPlayable(AnimationClipPlayable const&) = default;
                    constexpr AnimationClipPlayable(AnimationClipPlayable&&) = default;
                    constexpr AnimationClipPlayable& operator=(AnimationClipPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationClipPlayable& operator=(AnimationClipPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationClipPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;


// Methods

/// @brief Method Create addr 0x2b22504 size 0x38 virtual false final false
static UnityEngine::Animations::AnimationClipPlayable Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip clip) ;

/// @brief Method CreateHandle addr 0x2b2253c size 0xb0 virtual false final false
static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip clip) ;

/// @brief Method .ctor addr 0x2b225ec size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b22708 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b22714 size 0x30 virtual false final false
static UnityEngine::Playables::Playable op_Implicit_UnityEngine__Playables__Playable(UnityEngine::Animations::AnimationClipPlayable playable) ;

/// @brief Method Equals addr 0x2b22744 size 0x78 virtual true final true
 bool Equals(UnityEngine::Animations::AnimationClipPlayable other) ;

/// @brief Method SetApplyFootIK addr 0x2b227bc size 0x44 virtual false final false
 void SetApplyFootIK(bool value) ;

/// @brief Method SetRemoveStartOffset addr 0x2b22844 size 0x44 virtual false final false
 void SetRemoveStartOffset(bool value) ;

/// @brief Method SetOverrideLoopTime addr 0x2b228cc size 0x44 virtual false final false
 void SetOverrideLoopTime(bool value) ;

/// @brief Method SetLoopTime addr 0x2b22954 size 0x44 virtual false final false
 void SetLoopTime(bool value) ;

/// @brief Method CreateHandleInternal addr 0x2b226ac size 0x5c virtual false final false
static bool CreateHandleInternal(UnityEngine::Playables::PlayableGraph graph, UnityEngine::AnimationClip clip, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

/// @brief Method SetApplyFootIKInternal addr 0x2b22800 size 0x44 virtual false final false
static void SetApplyFootIKInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method SetRemoveStartOffsetInternal addr 0x2b22888 size 0x44 virtual false final false
static void SetRemoveStartOffsetInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method SetOverrideLoopTimeInternal addr 0x2b22910 size 0x44 virtual false final false
static void SetOverrideLoopTimeInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method SetLoopTimeInternal addr 0x2b22998 size 0x44 virtual false final false
static void SetLoopTimeInternal(ByRef<UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2b229dc size 0x54 virtual false final false
static bool CreateHandleInternal_Injected(ByRef<UnityEngine::Playables::PlayableGraph> graph, UnityEngine::AnimationClip clip, ByRef<UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationClipPlayable, "UnityEngine.Animations", "AnimationClipPlayable");
