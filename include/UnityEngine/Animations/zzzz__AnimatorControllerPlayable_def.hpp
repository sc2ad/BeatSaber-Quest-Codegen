#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
// Type: UnityEngine.Animations::AnimatorControllerPlayable
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15060))
// CS Name: UnityEngine.Animations.AnimatorControllerPlayable
struct CORDL_TYPE AnimatorControllerPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Animations::AnimatorControllerPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr AnimatorControllerPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr AnimatorControllerPlayable(AnimatorControllerPlayable const&) = default;
                    constexpr AnimatorControllerPlayable(AnimatorControllerPlayable&&) = default;
                    constexpr AnimatorControllerPlayable& operator=(AnimatorControllerPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorControllerPlayable& operator=(AnimatorControllerPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorControllerPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static UnityEngine::Animations::AnimatorControllerPlayable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(UnityEngine::Animations::AnimatorControllerPlayable value) ;

static UnityEngine::Animations::AnimatorControllerPlayable __get_m_NullPlayable() ;


// Methods

/// @brief Method .ctor addr 0x2b212d0 size 0x78 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b21450 size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method SetHandle addr 0x2b21348 size 0x108 virtual false final false
 void SetHandle(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method Equals addr 0x2b2145c size 0x78 virtual true final true
 bool Equals(UnityEngine::Animations::AnimatorControllerPlayable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimatorControllerPlayable, "UnityEngine.Animations", "AnimatorControllerPlayable");
