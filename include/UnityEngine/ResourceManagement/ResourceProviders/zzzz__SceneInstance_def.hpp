#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneInstance
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14285))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneInstance
struct CORDL_TYPE SceneInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Scene", ty: "UnityEngine::SceneManagement::Scene", modifiers: "", def_value: None }, CppParam { name: "m_Operation", ty: "UnityEngine::AsyncOperation", modifiers: "", def_value: None }]
constexpr SceneInstance(UnityEngine::SceneManagement::Scene m_Scene, UnityEngine::AsyncOperation m_Operation) noexcept;


                    constexpr SceneInstance(SceneInstance const&) = default;
                    constexpr SceneInstance(SceneInstance&&) = default;
                    constexpr SceneInstance& operator=(SceneInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SceneInstance& operator=(SceneInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SceneInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::SceneManagement::Scene __declspec(property(get=__get_m_Scene, put=__set_m_Scene))  m_Scene;

constexpr void __set_m_Scene(UnityEngine::SceneManagement::Scene value) ;

constexpr UnityEngine::SceneManagement::Scene __get_m_Scene() const;

 UnityEngine::AsyncOperation __declspec(property(get=__get_m_Operation, put=__set_m_Operation))  m_Operation;

constexpr void __set_m_Operation(UnityEngine::AsyncOperation value) ;

constexpr UnityEngine::AsyncOperation __get_m_Operation() const;


// Properties

 UnityEngine::SceneManagement::Scene __declspec(property(get=get_Scene, put=set_Scene))  Scene;


// Methods

/// @brief Method get_Scene addr 0x2a3fa8c size 0x8 virtual false final false
 UnityEngine::SceneManagement::Scene get_Scene() ;

/// @brief Method set_Scene addr 0x2a3fa94 size 0x8 virtual false final false
 void set_Scene(UnityEngine::SceneManagement::Scene value) ;

/// @brief Method Activate addr 0x2a3fa9c size 0x20 virtual false final false
 void Activate() ;

/// @brief Method ActivateAsync addr 0x2a3fabc size 0x2c virtual false final false
 UnityEngine::AsyncOperation ActivateAsync() ;

/// @brief Method GetHashCode addr 0x2a3fae8 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a3fb08 size 0xb8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneInstance, "UnityEngine.ResourceManagement.ResourceProviders", "SceneInstance");
