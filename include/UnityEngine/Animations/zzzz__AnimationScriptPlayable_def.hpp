#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationScriptPlayable;
}
// Type: UnityEngine.Animations::AnimationScriptPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15064))
// CS Name: UnityEngine.Animations.AnimationScriptPlayable
struct CORDL_TYPE AnimationScriptPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Animations::AnimationScriptPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimationScriptPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimationScriptPlayable(AnimationScriptPlayable const&) = default;
                    constexpr AnimationScriptPlayable(AnimationScriptPlayable&&) = default;
                    constexpr AnimationScriptPlayable& operator=(AnimationScriptPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationScriptPlayable& operator=(AnimationScriptPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationScriptPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static UnityEngine::Animations::AnimationScriptPlayable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(UnityEngine::Animations::AnimationScriptPlayable value) ;

static UnityEngine::Animations::AnimationScriptPlayable __get_m_NullPlayable() ;


// Methods

/// @brief Method .ctor addr 0x2b21b78 size 0xc0 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b21c38 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method Equals addr 0x2b21c44 size 0x78 virtual true final true
 bool Equals(UnityEngine::Animations::AnimationScriptPlayable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationScriptPlayable, "UnityEngine.Animations", "AnimationScriptPlayable");
