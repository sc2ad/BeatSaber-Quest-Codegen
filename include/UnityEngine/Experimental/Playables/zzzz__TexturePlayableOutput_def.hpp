#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct TexturePlayableOutput;
}
// Type: UnityEngine.Experimental.Playables::TexturePlayableOutput
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10349))
// CS Name: UnityEngine.Experimental.Playables.TexturePlayableOutput
struct CORDL_TYPE TexturePlayableOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr operator  UnityEngine::Playables::IPlayableOutput() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr TexturePlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;


                    constexpr TexturePlayableOutput(TexturePlayableOutput const&) = default;
                    constexpr TexturePlayableOutput(TexturePlayableOutput&&) = default;
                    constexpr TexturePlayableOutput& operator=(TexturePlayableOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TexturePlayableOutput& operator=(TexturePlayableOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TexturePlayableOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableOutputHandle value) ;

constexpr UnityEngine::Playables::PlayableOutputHandle __get_m_Handle() const;


// Methods

/// @brief Method GetHandle addr 0x2b7b764 size 0xc virtual true final true
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
