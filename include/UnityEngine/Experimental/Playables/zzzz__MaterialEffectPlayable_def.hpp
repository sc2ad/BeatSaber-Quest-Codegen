#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine::Playables {
class IPlayable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Forward declare root types
namespace UnityEngine::Experimental::Playables {
struct MaterialEffectPlayable;
}
// Type: UnityEngine.Experimental.Playables::MaterialEffectPlayable
namespace UnityEngine::Experimental::Playables {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10347))
// CS Name: UnityEngine.Experimental.Playables.MaterialEffectPlayable
struct CORDL_TYPE MaterialEffectPlayable : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::Playables::IPlayable
constexpr operator  UnityEngine::Playables::IPlayable() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::Experimental::Playables::MaterialEffectPlayable>
constexpr operator  System::IEquatable_1<UnityEngine::Experimental::Playables::MaterialEffectPlayable>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
constexpr MaterialEffectPlayable(UnityEngine::Playables::PlayableHandle m_Handle) noexcept;


                    constexpr MaterialEffectPlayable(MaterialEffectPlayable const&) = default;
                    constexpr MaterialEffectPlayable(MaterialEffectPlayable&&) = default;
                    constexpr MaterialEffectPlayable& operator=(MaterialEffectPlayable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MaterialEffectPlayable& operator=(MaterialEffectPlayable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MaterialEffectPlayable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Playables::PlayableHandle __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(UnityEngine::Playables::PlayableHandle value) ;

constexpr UnityEngine::Playables::PlayableHandle __get_m_Handle() const;


// Methods

/// @brief Method GetHandle addr 0x2b7b5dc size 0xc virtual true final true
 UnityEngine::Playables::PlayableHandle GetHandle() ;

/// @brief Method Equals addr 0x2b7b5e8 size 0x74 virtual true final true
 bool Equals(UnityEngine::Experimental::Playables::MaterialEffectPlayable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Playables
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::MaterialEffectPlayable, "UnityEngine.Experimental.Playables", "MaterialEffectPlayable");
