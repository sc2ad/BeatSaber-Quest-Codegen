#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct BuiltinRenderTextureType;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
// Type: UnityEngine.Rendering::RenderTargetIdentifier
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10282))
// CS Name: UnityEngine.Rendering.RenderTargetIdentifier
struct CORDL_TYPE RenderTargetIdentifier : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>
constexpr operator  System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>() const;

// Ctor Parameters [CppParam { name: "m_Type", ty: "UnityEngine::Rendering::BuiltinRenderTextureType", modifiers: "", def_value: None }, CppParam { name: "m_NameID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_BufferPointer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "m_MipLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CubeFace", ty: "UnityEngine::CubemapFace", modifiers: "", def_value: None }, CppParam { name: "m_DepthSlice", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType m_Type, int32_t m_NameID, int32_t m_InstanceID, ::cordl_internals::intptr_t m_BufferPointer, int32_t m_MipLevel, UnityEngine::CubemapFace m_CubeFace, int32_t m_DepthSlice) noexcept;


                    constexpr RenderTargetIdentifier(RenderTargetIdentifier const&) = default;
                    constexpr RenderTargetIdentifier(RenderTargetIdentifier&&) = default;
                    constexpr RenderTargetIdentifier& operator=(RenderTargetIdentifier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTargetIdentifier& operator=(RenderTargetIdentifier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTargetIdentifier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Rendering::BuiltinRenderTextureType __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(UnityEngine::Rendering::BuiltinRenderTextureType value) ;

constexpr UnityEngine::Rendering::BuiltinRenderTextureType __get_m_Type() const;

 int32_t __declspec(property(get=__get_m_NameID, put=__set_m_NameID))  m_NameID;

constexpr void __set_m_NameID(int32_t value) ;

constexpr int32_t __get_m_NameID() const;

 int32_t __declspec(property(get=__get_m_InstanceID, put=__set_m_InstanceID))  m_InstanceID;

constexpr void __set_m_InstanceID(int32_t value) ;

constexpr int32_t __get_m_InstanceID() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_BufferPointer, put=__set_m_BufferPointer))  m_BufferPointer;

constexpr void __set_m_BufferPointer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_BufferPointer() const;

 int32_t __declspec(property(get=__get_m_MipLevel, put=__set_m_MipLevel))  m_MipLevel;

constexpr void __set_m_MipLevel(int32_t value) ;

constexpr int32_t __get_m_MipLevel() const;

 UnityEngine::CubemapFace __declspec(property(get=__get_m_CubeFace, put=__set_m_CubeFace))  m_CubeFace;

constexpr void __set_m_CubeFace(UnityEngine::CubemapFace value) ;

constexpr UnityEngine::CubemapFace __get_m_CubeFace() const;

 int32_t __declspec(property(get=__get_m_DepthSlice, put=__set_m_DepthSlice))  m_DepthSlice;

constexpr void __set_m_DepthSlice(int32_t value) ;

constexpr int32_t __get_m_DepthSlice() const;


// Methods

/// @brief Method .ctor addr 0x2b740c4 size 0x74 virtual false final false
 void _ctor(UnityEngine::Rendering::BuiltinRenderTextureType type) ;

/// @brief Method .ctor addr 0x2b74138 size 0x74 virtual false final false
 void _ctor(int32_t nameID) ;

/// @brief Method .ctor addr 0x2b741ac size 0x144 virtual false final false
 void _ctor(UnityEngine::Texture tex) ;

/// @brief Method op_Implicit addr 0x2b742f0 size 0x78 virtual false final false
static UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_UnityEngine__Rendering__RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType type) ;

/// @brief Method op_Implicit addr 0x2b74368 size 0x70 virtual false final false
static UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_UnityEngine__Rendering__RenderTargetIdentifier(int32_t nameID) ;

/// @brief Method op_Implicit addr 0x2b743d8 size 0x50 virtual false final false
static UnityEngine::Rendering::RenderTargetIdentifier op_Implicit_UnityEngine__Rendering__RenderTargetIdentifier(UnityEngine::Texture tex) ;

/// @brief Method ToString addr 0x2b74428 size 0x2a8 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2b746d0 size 0x4c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2b7471c size 0x98 virtual true final true
 bool Equals(UnityEngine::Rendering::RenderTargetIdentifier rhs) ;

/// @brief Method Equals addr 0x2b747b4 size 0x90 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderTargetIdentifier, "UnityEngine.Rendering", "RenderTargetIdentifier");
