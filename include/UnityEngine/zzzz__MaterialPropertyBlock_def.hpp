#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Type: UnityEngine::MaterialPropertyBlock
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10036))
// CS Name: UnityEngine.MaterialPropertyBlock
class CORDL_TYPE MaterialPropertyBlock : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MaterialPropertyBlock() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlock(MaterialPropertyBlock const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlock", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlock(MaterialPropertyBlock&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlock(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MaterialPropertyBlock& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlock& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlock& operator=(MaterialPropertyBlock&& o) noexcept = default;
  constexpr MaterialPropertyBlock& operator=(MaterialPropertyBlock const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Methods

/// @brief Method SetFloatArray addr 0x2b410d8 size 0x118 virtual false final false
 void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArray addr 0x2b4124c size 0x118 virtual false final false
 void SetVectorArray(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetMatrixArray addr 0x2b413c0 size 0x118 virtual false final false
 void SetMatrixArray(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

// Ctor Parameters []
explicit MaterialPropertyBlock() ;

/// @brief Method .ctor addr 0x2b41534 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2b415a4 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2b41638 size 0xcc virtual false final false
 void Dispose() ;

/// @brief Method SetInt addr 0x2b41740 size 0x54 virtual false final false
 void SetInt(int32_t nameID, int32_t value) ;

/// @brief Method SetFloat addr 0x2b417e8 size 0x54 virtual false final false
 void SetFloat(int32_t nameID, float_t value) ;

/// @brief Method SetVector addr 0x2b4183c size 0x4 virtual false final false
 void SetVector(int32_t nameID, UnityEngine::Vector4 value) ;

/// @brief Method SetColor addr 0x2b4189c size 0x7c virtual false final false
 void SetColor(::StringW name, UnityEngine::Color value) ;

/// @brief Method SetColor addr 0x2b419b0 size 0x4 virtual false final false
 void SetColor(int32_t nameID, UnityEngine::Color value) ;

/// @brief Method SetTexture addr 0x2b419b4 size 0x54 virtual false final false
 void SetTexture(int32_t nameID, UnityEngine::Texture value) ;

/// @brief Method SetFloatArray addr 0x2b41a5c size 0x80 virtual false final false
 void SetFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b41adc size 0x18 virtual false final false
 void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values) ;

/// @brief Method SetVectorArray addr 0x2b41af4 size 0x18 virtual false final false
 void SetVectorArray(int32_t nameID, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetMatrixArray addr 0x2b41b0c size 0x18 virtual false final false
 void SetMatrixArray(int32_t nameID, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetFloat addr 0x2b41b24 size 0x44 virtual false final false
 float_t GetFloat(int32_t nameID) ;

/// @brief Method GetVector addr 0x2b41bac size 0x4 virtual false final false
 UnityEngine::Vector4 GetVector(int32_t nameID) ;

/// @brief Method GetColor addr 0x2b41c10 size 0x4 virtual false final false
 UnityEngine::Color GetColor(int32_t nameID) ;

/// @brief Method GetMatrix addr 0x2b41c74 size 0x8c virtual false final false
 UnityEngine::Matrix4x4 GetMatrix(int32_t nameID) ;

/// @brief Method GetFloatImpl addr 0x2b41b68 size 0x44 virtual false final false
 float_t GetFloatImpl(int32_t name) ;

/// @brief Method GetVectorImpl addr 0x2b41bb0 size 0x60 virtual false final false
 UnityEngine::Vector4 GetVectorImpl(int32_t name) ;

/// @brief Method GetColorImpl addr 0x2b41c14 size 0x60 virtual false final false
 UnityEngine::Color GetColorImpl(int32_t name) ;

/// @brief Method GetMatrixImpl addr 0x2b41d00 size 0x7c virtual false final false
 UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name) ;

/// @brief Method SetFloatImpl addr 0x2b41794 size 0x54 virtual false final false
 void SetFloatImpl(int32_t name, float_t value) ;

/// @brief Method SetVectorImpl addr 0x2b41840 size 0x5c virtual false final false
 void SetVectorImpl(int32_t name, UnityEngine::Vector4 value) ;

/// @brief Method SetColorImpl addr 0x2b41954 size 0x5c virtual false final false
 void SetColorImpl(int32_t name, UnityEngine::Color value) ;

/// @brief Method SetTextureImpl addr 0x2b41a08 size 0x54 virtual false final false
 void SetTextureImpl(int32_t name, UnityEngine::Texture value) ;

/// @brief Method SetFloatArrayImpl addr 0x2b411f0 size 0x5c virtual false final false
 void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArrayImpl addr 0x2b41364 size 0x5c virtual false final false
 void SetVectorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetMatrixArrayImpl addr 0x2b414d8 size 0x5c virtual false final false
 void SetMatrixArrayImpl(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method CreateImpl addr 0x2b4157c size 0x28 virtual false final false
static ::cordl_internals::intptr_t CreateImpl() ;

/// @brief Method DestroyImpl addr 0x2b41704 size 0x3c virtual false final false
static void DestroyImpl(::cordl_internals::intptr_t mpb) ;

/// @brief Method Clear addr 0x2b41f20 size 0x44 virtual false final false
 void Clear(bool keepMemory) ;

/// @brief Method Clear addr 0x2b41f64 size 0x40 virtual false final false
 void Clear() ;

/// @brief Method GetVectorImpl_Injected addr 0x2b41d7c size 0x54 virtual false final false
 void GetVectorImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method GetColorImpl_Injected addr 0x2b41dd0 size 0x54 virtual false final false
 void GetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> ret) ;

/// @brief Method GetMatrixImpl_Injected addr 0x2b41e24 size 0x54 virtual false final false
 void GetMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method SetVectorImpl_Injected addr 0x2b41e78 size 0x54 virtual false final false
 void SetVectorImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> value) ;

/// @brief Method SetColorImpl_Injected addr 0x2b41ecc size 0x54 virtual false final false
 void SetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::MaterialPropertyBlock);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MaterialPropertyBlock, "UnityEngine", "MaterialPropertyBlock");
