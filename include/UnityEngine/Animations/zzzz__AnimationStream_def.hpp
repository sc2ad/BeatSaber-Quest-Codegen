#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationStream;
}
// Type: UnityEngine.Animations::AnimationStream
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15071))
// CS Name: UnityEngine.Animations.AnimationStream
struct CORDL_TYPE AnimationStream : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_AnimatorBindingsVersion", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "constant", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "input", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "output", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "workspace", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "inputStreamAccessor", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "animationHandleBinder", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AnimationStream(uint32_t m_AnimatorBindingsVersion, ::cordl_internals::intptr_t constant, ::cordl_internals::intptr_t input, ::cordl_internals::intptr_t output, ::cordl_internals::intptr_t workspace, ::cordl_internals::intptr_t inputStreamAccessor, ::cordl_internals::intptr_t animationHandleBinder) noexcept;


                    constexpr AnimationStream(AnimationStream const&) = default;
                    constexpr AnimationStream(AnimationStream&&) = default;
                    constexpr AnimationStream& operator=(AnimationStream const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationStream& operator=(AnimationStream&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationStream(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_m_AnimatorBindingsVersion, put=__set_m_AnimatorBindingsVersion))  m_AnimatorBindingsVersion;

constexpr void __set_m_AnimatorBindingsVersion(uint32_t value) ;

constexpr uint32_t __get_m_AnimatorBindingsVersion() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_constant, put=__set_constant))  constant;

constexpr void __set_constant(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_constant() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_input, put=__set_input))  input;

constexpr void __set_input(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_input() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_output, put=__set_output))  output;

constexpr void __set_output(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_output() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_workspace, put=__set_workspace))  workspace;

constexpr void __set_workspace(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_workspace() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_inputStreamAccessor, put=__set_inputStreamAccessor))  inputStreamAccessor;

constexpr void __set_inputStreamAccessor(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_inputStreamAccessor() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_animationHandleBinder, put=__set_animationHandleBinder))  animationHandleBinder;

constexpr void __set_animationHandleBinder(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_animationHandleBinder() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationStream, "UnityEngine.Animations", "AnimationStream");
