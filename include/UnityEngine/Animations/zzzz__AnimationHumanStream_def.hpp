#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Animations {
struct AnimationHumanStream;
}
// Type: UnityEngine.Animations::AnimationHumanStream
namespace UnityEngine::Animations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15067))
// CS Name: UnityEngine.Animations.AnimationHumanStream
struct CORDL_TYPE AnimationHumanStream : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "stream", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AnimationHumanStream(::cordl_internals::intptr_t stream) noexcept;


                    constexpr AnimationHumanStream(AnimationHumanStream const&) = default;
                    constexpr AnimationHumanStream(AnimationHumanStream&&) = default;
                    constexpr AnimationHumanStream& operator=(AnimationHumanStream const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationHumanStream& operator=(AnimationHumanStream&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationHumanStream(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_stream() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Animations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
