#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
class Type;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct Playable;
}
// Type: UnityEngine.Playables::Playable
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10364))
// CS Name: UnityEngine.Playables.Playable
struct CORDL_TYPE Playable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Playables::Playable>
constexpr operator  System::IEquatable_1<UnityEngine::Playables::Playable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr Playable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr Playable(Playable const&) = default;
                    constexpr Playable(Playable&&) = default;
                    constexpr Playable& operator=(Playable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Playable& operator=(Playable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Playable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;

static UnityEngine::Playables::Playable __declspec(property(get=__get_m_NullPlayable, put=__set_m_NullPlayable))  m_NullPlayable;

static void __set_m_NullPlayable(UnityEngine::Playables::Playable value) ;

static UnityEngine::Playables::Playable __get_m_NullPlayable() ;


// Properties

static UnityEngine::Playables::Playable __declspec(property(get=get_Null))  Null;


// Methods

/// @brief Method get_Null addr 0x2b7c820 size 0x58 virtual false final false
static UnityEngine::Playables::Playable get_Null() ;

/// @brief Method Create addr 0x2b7caf0 size 0x70 virtual false final false
static UnityEngine::Playables::Playable Create(UnityEngine::Playables::PlayableGraph graph, int32_t inputCount) ;

/// @brief Method .ctor addr 0x2b7cbb4 size 0x8 virtual false final false
 void _ctor(UnityEngine::Playables::PlayableHandle handle) ;

/// @brief Method GetHandle addr 0x2b7cbbc size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method IsPlayableOfType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool IsPlayableOfType() ;

/// @brief Method GetPlayableType addr 0x2b7cbc8 size 0x24 virtual false final false
 System::Type GetPlayableType() ;

/// @brief Method Equals addr 0x2b7cc60 size 0x74 virtual true final true
 bool Equals(UnityEngine::Playables::Playable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::Playable, "UnityEngine.Playables", "Playable");
