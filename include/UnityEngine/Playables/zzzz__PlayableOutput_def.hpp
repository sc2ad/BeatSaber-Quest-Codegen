#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Type: UnityEngine.Playables::PlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10374))
// CS Name: UnityEngine.Playables.PlayableOutput
struct CORDL_TYPE PlayableOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr operator  UnityEngine::Playables::IPlayableOutput() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::PlayableOutput>
constexpr operator  System::IEquatable_1<UnityEngine::Playables::PlayableOutput>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr PlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;


                    constexpr PlayableOutput(PlayableOutput const&) = default;
                    constexpr PlayableOutput(PlayableOutput&&) = default;
                    constexpr PlayableOutput& operator=(PlayableOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayableOutput& operator=(PlayableOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayableOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableOutputHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableOutputHandle value) ;

constexpr UnityEngine::Playables::PlayableOutputHandle __get_m_Handle() const;

static UnityEngine::Playables::PlayableOutput __declspec(property(get=__get_m_NullPlayableOutput, put=__set_m_NullPlayableOutput))  m_NullPlayableOutput;

static void __set_m_NullPlayableOutput(UnityEngine::Playables::PlayableOutput value) ;

static UnityEngine::Playables::PlayableOutput __get_m_NullPlayableOutput() ;


// Properties

static UnityEngine::Playables::PlayableOutput __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method get_Null addr 0x2b7ce3c size 0x58 virtual false final false
static UnityEngine::Playables::PlayableOutput get_Null() ;

/// @brief Method .ctor addr 0x2b7cab8 size 0x8 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableOutputHandle handle) ;

/// @brief Method GetHandle addr 0x2b7d7a8 size 0xc virtual true final true
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method IsPlayableOutputOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool IsPlayableOutputOfType() ;

/// @brief Method Equals addr 0x2b7d7b4 size 0x74 virtual true final true
 bool Equals(UnityEngine::Playables::PlayableOutput other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableOutput, "UnityEngine.Playables", "PlayableOutput");
