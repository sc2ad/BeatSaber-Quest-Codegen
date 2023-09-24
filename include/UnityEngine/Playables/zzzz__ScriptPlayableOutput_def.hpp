#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
namespace UnityEngine::Playables {
class IPlayableOutput;
}
namespace UnityEngine::Playables {
struct PlayableOutputHandle;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct ScriptPlayableOutput;
}
// Type: UnityEngine.Playables::ScriptPlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10360))
// CS Name: UnityEngine.Playables.ScriptPlayableOutput
struct CORDL_TYPE ScriptPlayableOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayableOutput
constexpr operator  UnityEngine::Playables::IPlayableOutput() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: None }]
constexpr ScriptPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept;


                    constexpr ScriptPlayableOutput(ScriptPlayableOutput const&) = default;
                    constexpr ScriptPlayableOutput(ScriptPlayableOutput&&) = default;
                    constexpr ScriptPlayableOutput& operator=(ScriptPlayableOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScriptPlayableOutput& operator=(ScriptPlayableOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScriptPlayableOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

static UnityEngine::Playables::ScriptPlayableOutput __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method Create addr 0x2b7c8a8 size 0x78 virtual false final false
static UnityEngine::Playables::ScriptPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::StringW name) ;

/// @brief Method .ctor addr 0x2b7c9ec size 0xbc virtual false final false
 void _ctor(UnityEngine::Playables::PlayableOutputHandle handle) ;

/// @brief Method get_Null addr 0x2b7c974 size 0x78 virtual false final false
static UnityEngine::Playables::ScriptPlayableOutput get_Null() ;

/// @brief Method GetHandle addr 0x2b7caa8 size 0xc virtual true final true
 UnityEngine::Playables::PlayableOutputHandle GetHandle() ;

/// @brief Method op_Implicit addr 0x2b7cab4 size 0x4 virtual false final false
static UnityEngine::Playables::PlayableOutput op_Implicit_UnityEngine__Playables__PlayableOutput(UnityEngine::Playables::ScriptPlayableOutput output) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::ScriptPlayableOutput, "UnityEngine.Playables", "ScriptPlayableOutput");
