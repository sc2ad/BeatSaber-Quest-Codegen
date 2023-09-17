#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace {
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LocalPhysicsMode;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Type: UnityEngine.SceneManagement::LoadSceneParameters
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10313))
// CS Name: UnityEngine.SceneManagement.LoadSceneParameters
struct CORDL_TYPE LoadSceneParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_LoadSceneMode", ty: "::UnityEngine::SceneManagement::LoadSceneMode", modifiers: "", def_value: None }, CppParam { name: "m_LocalPhysicsMode", ty: "::UnityEngine::SceneManagement::LocalPhysicsMode", modifiers: "", def_value: None }]
constexpr LoadSceneParameters(::UnityEngine::SceneManagement::LoadSceneMode m_LoadSceneMode, ::UnityEngine::SceneManagement::LocalPhysicsMode m_LocalPhysicsMode) noexcept;


                    constexpr LoadSceneParameters(LoadSceneParameters const&) = default;
                    constexpr LoadSceneParameters(LoadSceneParameters&&) = default;
                    constexpr LoadSceneParameters& operator=(LoadSceneParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LoadSceneParameters& operator=(LoadSceneParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LoadSceneParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::SceneManagement::LoadSceneMode __declspec(property(get=__get_m_LoadSceneMode, put=__set_m_LoadSceneMode))  m_LoadSceneMode;

constexpr void __set_m_LoadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode value) ;

constexpr ::UnityEngine::SceneManagement::LoadSceneMode __get_m_LoadSceneMode() const;

 ::UnityEngine::SceneManagement::LocalPhysicsMode __declspec(property(get=__get_m_LocalPhysicsMode, put=__set_m_LocalPhysicsMode))  m_LocalPhysicsMode;

constexpr void __set_m_LocalPhysicsMode(::UnityEngine::SceneManagement::LocalPhysicsMode value) ;

constexpr ::UnityEngine::SceneManagement::LocalPhysicsMode __get_m_LocalPhysicsMode() const;


// Properties

 ::UnityEngine::SceneManagement::LoadSceneMode __declspec(property(put=set_loadSceneMode))  loadSceneMode;


// Methods

/// @brief Method set_loadSceneMode addr 0x2b7703c size 0x8 virtual false final false
 void set_loadSceneMode(::UnityEngine::SceneManagement::LoadSceneMode value) ;

/// @brief Method .ctor addr 0x2b77044 size 0x8 virtual false final false
 void _ctor(::UnityEngine::SceneManagement::LoadSceneMode mode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::LoadSceneParameters, "UnityEngine.SceneManagement", "LoadSceneParameters");
