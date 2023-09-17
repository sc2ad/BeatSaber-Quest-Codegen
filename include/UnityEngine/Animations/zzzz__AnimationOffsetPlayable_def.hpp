#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationOffsetPlayable;
}
// Type: UnityEngine.Animations::AnimationOffsetPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15061))
// CS Name: UnityEngine.Animations.AnimationOffsetPlayable
struct CORDL_TYPE AnimationOffsetPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::Playables::IPlayable
constexpr operator  ::UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>
constexpr operator  ::System::IEquatable_1<::UnityEngine::Animations::AnimationOffsetPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationOffsetPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimationOffsetPlayable(AnimationOffsetPlayable const&) = default;
                    constexpr AnimationOffsetPlayable(AnimationOffsetPlayable&&) = default;
                    constexpr AnimationOffsetPlayable& operator=(AnimationOffsetPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationOffsetPlayable& operator=(AnimationOffsetPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationOffsetPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(::UnityEngine::Playables::PlayableHandle value) ;

constexpr ::UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static ::UnityEngine::Animations::AnimationOffsetPlayable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(::UnityEngine::Animations::AnimationOffsetPlayable value) ;

static ::UnityEngine::Animations::AnimationOffsetPlayable __get_m_NullPlayable() ;


// Methods

/// @brief Method Create addr 0x2b21570 size 0xf0 virtual false final false
static ::UnityEngine::Animations::AnimationOffsetPlayable Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, int32_t inputCount) ;

/// @brief Method CreateHandle addr 0x2b21660 size 0x13c virtual false final false
static ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, int32_t inputCount) ;

/// @brief Method .ctor addr 0x2b2179c size 0xc0 virtual false final false
 void _ctor(::UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b21900 size 0xc virtual true final true
 ::UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b2190c size 0x30 virtual false final false
static ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Animations::AnimationOffsetPlayable playable) ;

/// @brief Method Equals addr 0x2b2193c size 0xac virtual true final true
 bool Equals(::UnityEngine::Animations::AnimationOffsetPlayable other) ;

/// @brief Method CreateHandleInternal addr 0x2b2185c size 0xa4 virtual false final false
static bool CreateHandleInternal(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ByRef<::UnityEngine::Playables::PlayableHandle> handle) ;

/// @brief Method CreateHandleInternal_Injected addr 0x2b219e8 size 0x5c virtual false final false
static bool CreateHandleInternal_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> graph, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Playables::PlayableHandle> handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::AnimationOffsetPlayable, "UnityEngine.Animations", "AnimationOffsetPlayable");
