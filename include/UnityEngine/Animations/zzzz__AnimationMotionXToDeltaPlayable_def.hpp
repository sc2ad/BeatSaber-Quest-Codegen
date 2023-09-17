#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
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
struct AnimationMotionXToDeltaPlayable;
}
// Type: UnityEngine.Animations::AnimationMotionXToDeltaPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15069))
// CS Name: UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct CORDL_TYPE AnimationMotionXToDeltaPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Playables::IPlayable
constexpr operator  ::UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationMotionXToDeltaPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationMotionXToDeltaPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimationMotionXToDeltaPlayable(AnimationMotionXToDeltaPlayable const&) = default;
                    constexpr AnimationMotionXToDeltaPlayable(AnimationMotionXToDeltaPlayable&&) = default;
                    constexpr AnimationMotionXToDeltaPlayable& operator=(AnimationMotionXToDeltaPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationMotionXToDeltaPlayable& operator=(AnimationMotionXToDeltaPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationMotionXToDeltaPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle value) ;

constexpr ::UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable value) ;

static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable __get_m_NullPlayable() ;


// Methods

/// @brief Method Create addr 0x2b22c44 size 0x90 virtual false final false
static ::UnityEngine::Animations::AnimationMotionXToDeltaPlayable Create(::UnityEngine::Playables::PlayableGraph graph) ;

/// @brief Method CreateHandle addr 0x2b22cd4 size 0xe0 virtual false final false
static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph) ;

/// @brief Method .ctor addr 0x2b22db4 size 0xc0 virtual false final false
 void _ctor(::UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b22f00 size 0xc virtual true final true
 ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b22f0c size 0x30 virtual false final false
static ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable playable) ;

/// @brief Method Equals addr 0x2b22f3c size 0x78 virtual true final true
 bool Equals(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable other) ;

/// @brief Method SetAbsoluteMotion addr 0x2b22fb4 size 0x84 virtual false final false
 void SetAbsoluteMotion(bool value) ;

/// @brief Method CreateHandleInternal addr 0x2b22e74 size 0x8c virtual false final false
static bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle) ;

/// @brief Method SetAbsoluteMotionInternal addr 0x2b23038 size 0x44 virtual false final false
static void SetAbsoluteMotionInternal(ByRef<::UnityEngine::Playables::PlayableHandle> handle, bool value) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2b2307c size 0x44 virtual false final false
static bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationMotionXToDeltaPlayable, "UnityEngine.Animations", "AnimationMotionXToDeltaPlayable");
