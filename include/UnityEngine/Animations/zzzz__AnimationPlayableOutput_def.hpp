#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationPlayableOutput;
}
// Type: UnityEngine.Animations::AnimationPlayableOutput
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15072))
// CS Name: UnityEngine.Animations.AnimationPlayableOutput
struct CORDL_TYPE AnimationPlayableOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr operator  UnityEngine::Playables::IPlayableOutput() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr AnimationPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;


                    constexpr AnimationPlayableOutput(AnimationPlayableOutput const&) = default;
                    constexpr AnimationPlayableOutput(AnimationPlayableOutput&&) = default;
                    constexpr AnimationPlayableOutput& operator=(AnimationPlayableOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationPlayableOutput& operator=(AnimationPlayableOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationPlayableOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableOutputHandle value) ;

constexpr UnityEngine::Playables::PlayableOutputHandle __get_m_Handle() const;


// Properties

static UnityEngine::Animations::AnimationPlayableOutput __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method Create addr 0x2b235b8 size 0xa8 virtual false final false
static UnityEngine::Animations::AnimationPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::StringW name, UnityEngine::Animator target) ;

/// @brief Method .ctor addr 0x2b236dc size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableOutputHandle handle) ;

/// @brief Method get_Null addr 0x2b23660 size 0x7c virtual false final false
static UnityEngine::Animations::AnimationPlayableOutput get_Null() ;

/// @brief Method GetHandle addr 0x2b237e0 size 0xc virtual true final true
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b237ec size 0x30 virtual false final false
static UnityEngine::Playables::PlayableOutput op_Implicit_UnityEngine__Playables__PlayableOutput(UnityEngine::Animations::AnimationPlayableOutput output) ;

/// @brief Method op_Explicit addr 0x2b2381c size 0x44 virtual false final false
static UnityEngine::Animations::AnimationPlayableOutput op_Explicit_UnityEngine__Animations__AnimationPlayableOutput(UnityEngine::Playables::PlayableOutput output) ;

/// @brief Method GetTarget addr 0x2b23860 size 0x3c virtual false final false
 UnityEngine::Animator GetTarget() ;

/// @brief Method SetTarget addr 0x2b2379c size 0x44 virtual false final false
 void SetTarget(UnityEngine::Animator value) ;

/// @brief Method InternalGetTarget addr 0x2b2389c size 0x3c virtual false final false
static UnityEngine::Animator InternalGetTarget(ByRef<UnityEngine::Playables::PlayableOutputHandle> handle) ;

/// @brief Method InternalSetTarget addr 0x2b238d8 size 0x44 virtual false final false
static void InternalSetTarget(ByRef<UnityEngine::Playables::PlayableOutputHandle> handle, UnityEngine::Animator target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPlayableOutput, "UnityEngine.Animations", "AnimationPlayableOutput");
