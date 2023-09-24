#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Type: UnityEngine.Rendering::ScriptableRenderContext
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10296))
// CS Name: UnityEngine.Rendering.ScriptableRenderContext
struct CORDL_TYPE ScriptableRenderContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>() const;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ScriptableRenderContext(::cordl_internals::intptr_t m_Ptr) noexcept;


                    constexpr ScriptableRenderContext(ScriptableRenderContext const&) = default;
                    constexpr ScriptableRenderContext(ScriptableRenderContext&&) = default;
                    constexpr ScriptableRenderContext& operator=(ScriptableRenderContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScriptableRenderContext& operator=(ScriptableRenderContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScriptableRenderContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static UnityEngine::Rendering::ShaderTagId __declspec(property(get=__get_kRenderTypeTag, put=__set_kRenderTypeTag))  kRenderTypeTag;

static void __set_kRenderTypeTag(UnityEngine::Rendering::ShaderTagId value) ;

static UnityEngine::Rendering::ShaderTagId __get_kRenderTypeTag() ;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method .ctor addr 0x2b752c8 size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t ptr) ;

/// @brief Method GetCameras addr 0x2b752d0 size 0x8c virtual false final false
 void GetCameras(System::Collections::Generic::List_1<UnityEngine::Camera> results) ;

/// @brief Method Equals addr 0x2b760c4 size 0x70 virtual true final true
 bool Equals(UnityEngine::Rendering::ScriptableRenderContext other) ;

/// @brief Method Equals addr 0x2b76134 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2b761ac size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method GetCameras_Internal addr 0x2b76038 size 0x8c virtual false final false
 void GetCameras_Internal(System::Type listType, ::bs_hook::Il2CppWrapperType resultList) ;

/// @brief Method GetCameras_Internal_Injected addr 0x2b761b4 size 0x54 virtual false final false
static void GetCameras_Internal_Injected(ByRef<UnityEngine::Rendering::ScriptableRenderContext> _unity_self, System::Type listType, ::bs_hook::Il2CppWrapperType resultList) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
