#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct MaterialGlobalIlluminationFlags;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine {
class Material;
}
// Type: UnityEngine::Material
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10039))
// CS Name: UnityEngine.Material
class CORDL_TYPE Material : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Material() = default;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: " const&", def_value: None }]
constexpr Material(Material const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Material", modifiers: "&&", def_value: None }]
constexpr Material(Material&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Material(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Material& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Material& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Material& operator=(Material&& o) noexcept = default;
  constexpr Material& operator=(Material const& o) noexcept = default;
                


// Properties

 UnityEngine::Shader __declspec(property(get=get_shader, put=set_shader))  shader;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 UnityEngine::Texture __declspec(property(get=get_mainTexture, put=set_mainTexture))  mainTexture;

 UnityEngine::Vector2 __declspec(property(get=get_mainTextureOffset, put=set_mainTextureOffset))  mainTextureOffset;

 UnityEngine::Vector2 __declspec(property(get=get_mainTextureScale, put=set_mainTextureScale))  mainTextureScale;

 int32_t __declspec(property(get=get_renderQueue, put=set_renderQueue))  renderQueue;

 int32_t __declspec(property(get=get_rawRenderQueue))  rawRenderQueue;

 ::ArrayW<UnityEngine::Rendering::LocalKeyword> __declspec(property(get=get_enabledKeywords, put=set_enabledKeywords))  enabledKeywords;

 UnityEngine::MaterialGlobalIlluminationFlags __declspec(property(get=get_globalIlluminationFlags, put=set_globalIlluminationFlags))  globalIlluminationFlags;

 bool __declspec(property(get=get_doubleSidedGI, put=set_doubleSidedGI))  doubleSidedGI;

 bool __declspec(property(get=get_enableInstancing, put=set_enableInstancing))  enableInstancing;

 int32_t __declspec(property(get=get_passCount))  passCount;

 ::ArrayW<::StringW> __declspec(property(get=get_shaderKeywords, put=set_shaderKeywords))  shaderKeywords;


// Methods

/// @brief Method Create addr 0x2b46064 size 0x58 virtual false final false
static UnityEngine::Material Create(::StringW scriptContents) ;

/// @brief Method CreateWithShader addr 0x2b4613c size 0x44 virtual false final false
static void CreateWithShader(UnityEngine::Material self, UnityEngine::Shader shader) ;

/// @brief Method CreateWithMaterial addr 0x2b46180 size 0x44 virtual false final false
static void CreateWithMaterial(UnityEngine::Material self, UnityEngine::Material source) ;

/// @brief Method CreateWithString addr 0x2b461c4 size 0x3c virtual false final false
static void CreateWithString(UnityEngine::Material self) ;

// Ctor Parameters [CppParam { name: "shader", ty: "UnityEngine::Shader", modifiers: "", def_value: None }]
explicit Material(UnityEngine::Shader shader) ;

/// @brief Method .ctor addr 0x2b46200 size 0x90 virtual false final false
 void _ctor(UnityEngine::Shader shader) ;

// Ctor Parameters [CppParam { name: "source", ty: "UnityEngine::Material", modifiers: "", def_value: None }]
explicit Material(UnityEngine::Material source) ;

/// @brief Method .ctor addr 0x2b46290 size 0x90 virtual false final false
 void _ctor(UnityEngine::Material source) ;

// Ctor Parameters [CppParam { name: "contents", ty: "::StringW", modifiers: "", def_value: None }]
explicit Material(::StringW contents) ;

/// @brief Method .ctor addr 0x2b460bc size 0x80 virtual false final false
 void _ctor(::StringW contents) ;

/// @brief Method GetDefaultMaterial addr 0x2b46320 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultMaterial() ;

/// @brief Method GetDefaultParticleMaterial addr 0x2b46348 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultParticleMaterial() ;

/// @brief Method GetDefaultLineMaterial addr 0x2b46370 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultLineMaterial() ;

/// @brief Method get_shader addr 0x2b46398 size 0x3c virtual false final false
 UnityEngine::Shader get_shader() ;

/// @brief Method set_shader addr 0x2b463d4 size 0x44 virtual false final false
 void set_shader(UnityEngine::Shader value) ;

/// @brief Method get_color addr 0x2b46418 size 0x8c virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2b46538 size 0xd4 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_mainTexture addr 0x2b4668c size 0xb0 virtual false final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method set_mainTexture addr 0x2b467f0 size 0xc8 virtual false final false
 void set_mainTexture(UnityEngine::Texture value) ;

/// @brief Method get_mainTextureOffset addr 0x2b4698c size 0x94 virtual false final false
 UnityEngine::Vector2 get_mainTextureOffset() ;

/// @brief Method set_mainTextureOffset addr 0x2b46a90 size 0xb0 virtual false final false
 void set_mainTextureOffset(UnityEngine::Vector2 value) ;

/// @brief Method get_mainTextureScale addr 0x2b46ba8 size 0x8c virtual false final false
 UnityEngine::Vector2 get_mainTextureScale() ;

/// @brief Method set_mainTextureScale addr 0x2b46c84 size 0xb0 virtual false final false
 void set_mainTextureScale(UnityEngine::Vector2 value) ;

/// @brief Method GetFirstPropertyNameIdByAttribute addr 0x2b464a4 size 0x44 virtual false final false
 int32_t GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag) ;

/// @brief Method HasProperty addr 0x2b46d9c size 0x44 virtual false final false
 bool HasProperty(int32_t nameID) ;

/// @brief Method HasProperty addr 0x2b46de0 size 0x70 virtual false final false
 bool HasProperty(::StringW name) ;

/// @brief Method HasFloatImpl addr 0x2b46e50 size 0x44 virtual false final false
 bool HasFloatImpl(int32_t name) ;

/// @brief Method HasFloat addr 0x2b46e94 size 0x70 virtual false final false
 bool HasFloat(::StringW name) ;

/// @brief Method HasFloat addr 0x2b46f04 size 0x44 virtual false final false
 bool HasFloat(int32_t nameID) ;

/// @brief Method HasInt addr 0x2b46f48 size 0x70 virtual false final false
 bool HasInt(::StringW name) ;

/// @brief Method HasInt addr 0x2b46fb8 size 0x44 virtual false final false
 bool HasInt(int32_t nameID) ;

/// @brief Method HasIntImpl addr 0x2b46ffc size 0x44 virtual false final false
 bool HasIntImpl(int32_t name) ;

/// @brief Method HasInteger addr 0x2b47040 size 0x70 virtual false final false
 bool HasInteger(::StringW name) ;

/// @brief Method HasInteger addr 0x2b470b0 size 0x44 virtual false final false
 bool HasInteger(int32_t nameID) ;

/// @brief Method HasTextureImpl addr 0x2b470f4 size 0x44 virtual false final false
 bool HasTextureImpl(int32_t name) ;

/// @brief Method HasTexture addr 0x2b47138 size 0x70 virtual false final false
 bool HasTexture(::StringW name) ;

/// @brief Method HasTexture addr 0x2b471a8 size 0x44 virtual false final false
 bool HasTexture(int32_t nameID) ;

/// @brief Method HasMatrixImpl addr 0x2b471ec size 0x44 virtual false final false
 bool HasMatrixImpl(int32_t name) ;

/// @brief Method HasMatrix addr 0x2b47230 size 0x70 virtual false final false
 bool HasMatrix(::StringW name) ;

/// @brief Method HasMatrix addr 0x2b472a0 size 0x44 virtual false final false
 bool HasMatrix(int32_t nameID) ;

/// @brief Method HasVectorImpl addr 0x2b472e4 size 0x44 virtual false final false
 bool HasVectorImpl(int32_t name) ;

/// @brief Method HasVector addr 0x2b47328 size 0x70 virtual false final false
 bool HasVector(::StringW name) ;

/// @brief Method HasVector addr 0x2b47398 size 0x44 virtual false final false
 bool HasVector(int32_t nameID) ;

/// @brief Method HasColor addr 0x2b473dc size 0x70 virtual false final false
 bool HasColor(::StringW name) ;

/// @brief Method HasColor addr 0x2b4744c size 0x44 virtual false final false
 bool HasColor(int32_t nameID) ;

/// @brief Method HasBufferImpl addr 0x2b47490 size 0x44 virtual false final false
 bool HasBufferImpl(int32_t name) ;

/// @brief Method HasBuffer addr 0x2b474d4 size 0x70 virtual false final false
 bool HasBuffer(::StringW name) ;

/// @brief Method HasBuffer addr 0x2b47544 size 0x44 virtual false final false
 bool HasBuffer(int32_t nameID) ;

/// @brief Method HasConstantBufferImpl addr 0x2b47588 size 0x44 virtual false final false
 bool HasConstantBufferImpl(int32_t name) ;

/// @brief Method HasConstantBuffer addr 0x2b475cc size 0x70 virtual false final false
 bool HasConstantBuffer(::StringW name) ;

/// @brief Method HasConstantBuffer addr 0x2b4763c size 0x44 virtual false final false
 bool HasConstantBuffer(int32_t nameID) ;

/// @brief Method get_renderQueue addr 0x2b47680 size 0x3c virtual false final false
 int32_t get_renderQueue() ;

/// @brief Method set_renderQueue addr 0x2b476bc size 0x44 virtual false final false
 void set_renderQueue(int32_t value) ;

/// @brief Method get_rawRenderQueue addr 0x2b47700 size 0x3c virtual false final false
 int32_t get_rawRenderQueue() ;

/// @brief Method EnableKeyword addr 0x2b4773c size 0x44 virtual false final false
 void EnableKeyword(::StringW keyword) ;

/// @brief Method DisableKeyword addr 0x2b47780 size 0x44 virtual false final false
 void DisableKeyword(::StringW keyword) ;

/// @brief Method IsKeywordEnabled addr 0x2b477c4 size 0x44 virtual false final false
 bool IsKeywordEnabled(::StringW keyword) ;

/// @brief Method EnableLocalKeyword addr 0x2b47808 size 0x44 virtual false final false
 void EnableLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method DisableLocalKeyword addr 0x2b47890 size 0x44 virtual false final false
 void DisableLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method SetLocalKeyword addr 0x2b47918 size 0x54 virtual false final false
 void SetLocalKeyword(UnityEngine::Rendering::LocalKeyword keyword, bool value) ;

/// @brief Method IsLocalKeywordEnabled addr 0x2b479c0 size 0x44 virtual false final false
 bool IsLocalKeywordEnabled(UnityEngine::Rendering::LocalKeyword keyword) ;

/// @brief Method EnableKeyword addr 0x2b47a48 size 0x5c virtual false final false
 void EnableKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method DisableKeyword addr 0x2b47aa4 size 0x5c virtual false final false
 void DisableKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetKeyword addr 0x2b47b00 size 0x64 virtual false final false
 void SetKeyword(ByRef<UnityEngine::Rendering::LocalKeyword> keyword, bool value) ;

/// @brief Method IsKeywordEnabled addr 0x2b47b64 size 0x60 virtual false final false
 bool IsKeywordEnabled(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method GetEnabledKeywords addr 0x2b47bc4 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Rendering::LocalKeyword> GetEnabledKeywords() ;

/// @brief Method SetEnabledKeywords addr 0x2b47c00 size 0x44 virtual false final false
 void SetEnabledKeywords(::ArrayW<UnityEngine::Rendering::LocalKeyword> keywords) ;

/// @brief Method get_enabledKeywords addr 0x2b47c44 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Rendering::LocalKeyword> get_enabledKeywords() ;

/// @brief Method set_enabledKeywords addr 0x2b47c80 size 0x44 virtual false final false
 void set_enabledKeywords(::ArrayW<UnityEngine::Rendering::LocalKeyword> value) ;

/// @brief Method get_globalIlluminationFlags addr 0x2b47cc4 size 0x3c virtual false final false
 UnityEngine::MaterialGlobalIlluminationFlags get_globalIlluminationFlags() ;

/// @brief Method set_globalIlluminationFlags addr 0x2b47d00 size 0x44 virtual false final false
 void set_globalIlluminationFlags(UnityEngine::MaterialGlobalIlluminationFlags value) ;

/// @brief Method get_doubleSidedGI addr 0x2b47d44 size 0x3c virtual false final false
 bool get_doubleSidedGI() ;

/// @brief Method set_doubleSidedGI addr 0x2b47d80 size 0x44 virtual false final false
 void set_doubleSidedGI(bool value) ;

/// @brief Method get_enableInstancing addr 0x2b3fb44 size 0x3c virtual false final false
 bool get_enableInstancing() ;

/// @brief Method set_enableInstancing addr 0x2b47dc4 size 0x44 virtual false final false
 void set_enableInstancing(bool value) ;

/// @brief Method get_passCount addr 0x2b47e08 size 0x3c virtual false final false
 int32_t get_passCount() ;

/// @brief Method SetShaderPassEnabled addr 0x2b47e44 size 0x54 virtual false final false
 void SetShaderPassEnabled(::StringW passName, bool enabled) ;

/// @brief Method GetShaderPassEnabled addr 0x2b47e98 size 0x44 virtual false final false
 bool GetShaderPassEnabled(::StringW passName) ;

/// @brief Method GetPassName addr 0x2b47edc size 0x44 virtual false final false
 ::StringW GetPassName(int32_t pass) ;

/// @brief Method FindPass addr 0x2b47f20 size 0x44 virtual false final false
 int32_t FindPass(::StringW passName) ;

/// @brief Method SetOverrideTag addr 0x2b47f64 size 0x54 virtual false final false
 void SetOverrideTag(::StringW tag, ::StringW val) ;

/// @brief Method GetTagImpl addr 0x2b47fb8 size 0x5c virtual false final false
 ::StringW GetTagImpl(::StringW tag, bool currentSubShaderOnly, ::StringW defaultValue) ;

/// @brief Method GetTag addr 0x2b48014 size 0x5c virtual false final false
 ::StringW GetTag(::StringW tag, bool searchFallbacks, ::StringW defaultValue) ;

/// @brief Method GetTag addr 0x2b48070 size 0x88 virtual false final false
 ::StringW GetTag(::StringW tag, bool searchFallbacks) ;

/// @brief Method Lerp addr 0x2b480f8 size 0x64 virtual false final false
 void Lerp(UnityEngine::Material start, UnityEngine::Material end, float_t t) ;

/// @brief Method SetPass addr 0x2b4815c size 0x44 virtual false final false
 bool SetPass(int32_t pass) ;

/// @brief Method CopyPropertiesFromMaterial addr 0x2b481a0 size 0x44 virtual false final false
 void CopyPropertiesFromMaterial(UnityEngine::Material mat) ;

/// @brief Method GetShaderKeywords addr 0x2b481e4 size 0x3c virtual false final false
 ::ArrayW<::StringW> GetShaderKeywords() ;

/// @brief Method SetShaderKeywords addr 0x2b48220 size 0x44 virtual false final false
 void SetShaderKeywords(::ArrayW<::StringW> names) ;

/// @brief Method get_shaderKeywords addr 0x2b48264 size 0x3c virtual false final false
 ::ArrayW<::StringW> get_shaderKeywords() ;

/// @brief Method set_shaderKeywords addr 0x2b482a0 size 0x44 virtual false final false
 void set_shaderKeywords(::ArrayW<::StringW> value) ;

/// @brief Method ComputeCRC addr 0x2b482e4 size 0x3c virtual false final false
 int32_t ComputeCRC() ;

/// @brief Method GetTexturePropertyNames addr 0x2b48320 size 0x3c virtual false final false
 ::ArrayW<::StringW> GetTexturePropertyNames() ;

/// @brief Method GetTexturePropertyNameIDs addr 0x2b4835c size 0x3c virtual false final false
 ::ArrayW<int32_t> GetTexturePropertyNameIDs() ;

/// @brief Method GetTexturePropertyNamesInternal addr 0x2b48398 size 0x44 virtual false final false
 void GetTexturePropertyNamesInternal(::bs_hook::Il2CppWrapperType outNames) ;

/// @brief Method GetTexturePropertyNameIDsInternal addr 0x2b483dc size 0x44 virtual false final false
 void GetTexturePropertyNameIDsInternal(::bs_hook::Il2CppWrapperType outNames) ;

/// @brief Method GetTexturePropertyNames addr 0x2b48420 size 0x94 virtual false final false
 void GetTexturePropertyNames(System::Collections::Generic::List_1<::StringW> outNames) ;

/// @brief Method GetTexturePropertyNameIDs addr 0x2b484b4 size 0x94 virtual false final false
 void GetTexturePropertyNameIDs(System::Collections::Generic::List_1<int32_t> outNames) ;

/// @brief Method SetIntImpl addr 0x2b48548 size 0x54 virtual false final false
 void SetIntImpl(int32_t name, int32_t value) ;

/// @brief Method SetFloatImpl addr 0x2b4859c size 0x54 virtual false final false
 void SetFloatImpl(int32_t name, float_t value) ;

/// @brief Method SetColorImpl addr 0x2b485f0 size 0x5c virtual false final false
 void SetColorImpl(int32_t name, UnityEngine::Color value) ;

/// @brief Method SetMatrixImpl addr 0x2b486a0 size 0x54 virtual false final false
 void SetMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetTextureImpl addr 0x2b48748 size 0x54 virtual false final false
 void SetTextureImpl(int32_t name, UnityEngine::Texture value) ;

/// @brief Method SetRenderTextureImpl addr 0x2b4879c size 0x5c virtual false final false
 void SetRenderTextureImpl(int32_t name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetBufferImpl addr 0x2b487f8 size 0x54 virtual false final false
 void SetBufferImpl(int32_t name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetGraphicsBufferImpl addr 0x2b4884c size 0x54 virtual false final false
 void SetGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetConstantBufferImpl addr 0x2b488a0 size 0x6c virtual false final false
 void SetConstantBufferImpl(int32_t name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantGraphicsBufferImpl addr 0x2b4890c size 0x6c virtual false final false
 void SetConstantGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method GetIntImpl addr 0x2b48978 size 0x44 virtual false final false
 int32_t GetIntImpl(int32_t name) ;

/// @brief Method GetFloatImpl addr 0x2b489bc size 0x44 virtual false final false
 float_t GetFloatImpl(int32_t name) ;

/// @brief Method GetColorImpl addr 0x2b48a00 size 0x60 virtual false final false
 UnityEngine::Color GetColorImpl(int32_t name) ;

/// @brief Method GetMatrixImpl addr 0x2b48ab4 size 0x7c virtual false final false
 UnityEngine::Matrix4x4 GetMatrixImpl(int32_t name) ;

/// @brief Method GetTextureImpl addr 0x2b48b84 size 0x44 virtual false final false
 UnityEngine::Texture GetTextureImpl(int32_t name) ;

/// @brief Method SetFloatArrayImpl addr 0x2b48bc8 size 0x5c virtual false final false
 void SetFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArrayImpl addr 0x2b48c24 size 0x5c virtual false final false
 void SetVectorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetColorArrayImpl addr 0x2b48c80 size 0x5c virtual false final false
 void SetColorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Color> values, int32_t count) ;

/// @brief Method SetMatrixArrayImpl addr 0x2b48cdc size 0x5c virtual false final false
 void SetMatrixArrayImpl(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method GetFloatArrayImpl addr 0x2b48d38 size 0x44 virtual false final false
 ::ArrayW<float_t> GetFloatArrayImpl(int32_t name) ;

/// @brief Method GetVectorArrayImpl addr 0x2b48d7c size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArrayImpl(int32_t name) ;

/// @brief Method GetColorArrayImpl addr 0x2b48dc0 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArrayImpl(int32_t name) ;

/// @brief Method GetMatrixArrayImpl addr 0x2b48e04 size 0x44 virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArrayImpl(int32_t name) ;

/// @brief Method GetFloatArrayCountImpl addr 0x2b48e48 size 0x44 virtual false final false
 int32_t GetFloatArrayCountImpl(int32_t name) ;

/// @brief Method GetVectorArrayCountImpl addr 0x2b48e8c size 0x44 virtual false final false
 int32_t GetVectorArrayCountImpl(int32_t name) ;

/// @brief Method GetColorArrayCountImpl addr 0x2b48ed0 size 0x44 virtual false final false
 int32_t GetColorArrayCountImpl(int32_t name) ;

/// @brief Method GetMatrixArrayCountImpl addr 0x2b48f14 size 0x44 virtual false final false
 int32_t GetMatrixArrayCountImpl(int32_t name) ;

/// @brief Method ExtractFloatArrayImpl addr 0x2b48f58 size 0x54 virtual false final false
 void ExtractFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t>> val) ;

/// @brief Method ExtractVectorArrayImpl addr 0x2b48fac size 0x54 virtual false final false
 void ExtractVectorArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Vector4>> val) ;

/// @brief Method ExtractColorArrayImpl addr 0x2b49000 size 0x54 virtual false final false
 void ExtractColorArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Color>> val) ;

/// @brief Method ExtractMatrixArrayImpl addr 0x2b49054 size 0x54 virtual false final false
 void ExtractMatrixArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Matrix4x4>> val) ;

/// @brief Method GetTextureScaleAndOffsetImpl addr 0x2b490a8 size 0x60 virtual false final false
 UnityEngine::Vector4 GetTextureScaleAndOffsetImpl(int32_t name) ;

/// @brief Method SetTextureOffsetImpl addr 0x2b4915c size 0x58 virtual false final false
 void SetTextureOffsetImpl(int32_t name, UnityEngine::Vector2 offset) ;

/// @brief Method SetTextureScaleImpl addr 0x2b49208 size 0x58 virtual false final false
 void SetTextureScaleImpl(int32_t name, UnityEngine::Vector2 scale) ;

/// @brief Method SetFloatArray addr 0x2b492b4 size 0x118 virtual false final false
 void SetFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetVectorArray addr 0x2b493cc size 0x118 virtual false final false
 void SetVectorArray(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetColorArray addr 0x2b494e4 size 0x118 virtual false final false
 void SetColorArray(int32_t name, ::ArrayW<UnityEngine::Color> values, int32_t count) ;

/// @brief Method SetMatrixArray addr 0x2b495fc size 0x118 virtual false final false
 void SetMatrixArray(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method ExtractFloatArray addr 0x2b49714 size 0x184 virtual false final false
 void ExtractFloatArray(int32_t name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method ExtractVectorArray addr 0x2b49898 size 0x184 virtual false final false
 void ExtractVectorArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method ExtractColorArray addr 0x2b49a1c size 0x184 virtual false final false
 void ExtractColorArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method ExtractMatrixArray addr 0x2b49ba0 size 0x184 virtual false final false
 void ExtractMatrixArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetInt addr 0x2b49d24 size 0x8c virtual false final false
 void SetInt(::StringW name, int32_t value) ;

/// @brief Method SetInt addr 0x2b49db0 size 0x54 virtual false final false
 void SetInt(int32_t nameID, int32_t value) ;

/// @brief Method SetFloat addr 0x2b49e04 size 0x80 virtual false final false
 void SetFloat(::StringW name, float_t value) ;

/// @brief Method SetFloat addr 0x2b49e84 size 0x54 virtual false final false
 void SetFloat(int32_t nameID, float_t value) ;

/// @brief Method SetInteger addr 0x2b49ed8 size 0x80 virtual false final false
 void SetInteger(::StringW name, int32_t value) ;

/// @brief Method SetInteger addr 0x2b49f58 size 0x54 virtual false final false
 void SetInteger(int32_t nameID, int32_t value) ;

/// @brief Method SetColor addr 0x2b46610 size 0x7c virtual false final false
 void SetColor(::StringW name, UnityEngine::Color value) ;

/// @brief Method SetColor addr 0x2b4660c size 0x4 virtual false final false
 void SetColor(int32_t nameID, UnityEngine::Color value) ;

/// @brief Method SetVector addr 0x2b49fac size 0x7c virtual false final false
 void SetVector(::StringW name, UnityEngine::Vector4 value) ;

/// @brief Method SetVector addr 0x2b4a028 size 0x4 virtual false final false
 void SetVector(int32_t nameID, UnityEngine::Vector4 value) ;

/// @brief Method SetMatrix addr 0x2b4a02c size 0x9c virtual false final false
 void SetMatrix(::StringW name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetMatrix addr 0x2b4a0c8 size 0x64 virtual false final false
 void SetMatrix(int32_t nameID, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetTexture addr 0x2b4690c size 0x80 virtual false final false
 void SetTexture(::StringW name, UnityEngine::Texture value) ;

/// @brief Method SetTexture addr 0x2b468b8 size 0x54 virtual false final false
 void SetTexture(int32_t nameID, UnityEngine::Texture value) ;

/// @brief Method SetTexture addr 0x2b4a12c size 0x88 virtual false final false
 void SetTexture(::StringW name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetTexture addr 0x2b4a1b4 size 0x5c virtual false final false
 void SetTexture(int32_t nameID, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetBuffer addr 0x2b4a210 size 0x80 virtual false final false
 void SetBuffer(::StringW name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetBuffer addr 0x2b4a290 size 0x54 virtual false final false
 void SetBuffer(int32_t nameID, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetBuffer addr 0x2b4a2e4 size 0x80 virtual false final false
 void SetBuffer(::StringW name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetBuffer addr 0x2b4a364 size 0x54 virtual false final false
 void SetBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetConstantBuffer addr 0x2b4a3b8 size 0x98 virtual false final false
 void SetConstantBuffer(::StringW name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b4a450 size 0x6c virtual false final false
 void SetConstantBuffer(int32_t nameID, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b4a4bc size 0x98 virtual false final false
 void SetConstantBuffer(::StringW name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetConstantBuffer addr 0x2b4a554 size 0x6c virtual false final false
 void SetConstantBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetFloatArray addr 0x2b4a5c0 size 0xac virtual false final false
 void SetFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b4a66c size 0x80 virtual false final false
 void SetFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b4a6ec size 0x68 virtual false final false
 void SetFloatArray(::StringW name, ::ArrayW<float_t> values) ;

/// @brief Method SetFloatArray addr 0x2b4a754 size 0x18 virtual false final false
 void SetFloatArray(int32_t nameID, ::ArrayW<float_t> values) ;

/// @brief Method SetColorArray addr 0x2b4a76c size 0xac virtual false final false
 void SetColorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b4a818 size 0x80 virtual false final false
 void SetColorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b4a898 size 0x68 virtual false final false
 void SetColorArray(::StringW name, ::ArrayW<UnityEngine::Color> values) ;

/// @brief Method SetColorArray addr 0x2b4a900 size 0x18 virtual false final false
 void SetColorArray(int32_t nameID, ::ArrayW<UnityEngine::Color> values) ;

/// @brief Method SetVectorArray addr 0x2b4a918 size 0xac virtual false final false
 void SetVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b4a9c4 size 0x80 virtual false final false
 void SetVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b4aa44 size 0x68 virtual false final false
 void SetVectorArray(::StringW name, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetVectorArray addr 0x2b4aaac size 0x18 virtual false final false
 void SetVectorArray(int32_t nameID, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetMatrixArray addr 0x2b4aac4 size 0xac virtual false final false
 void SetMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b4ab70 size 0x80 virtual false final false
 void SetMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b4abf0 size 0x68 virtual false final false
 void SetMatrixArray(::StringW name, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetMatrixArray addr 0x2b4ac58 size 0x18 virtual false final false
 void SetMatrixArray(int32_t nameID, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetInt addr 0x2b4ac70 size 0x8c virtual false final false
 int32_t GetInt(::StringW name) ;

/// @brief Method GetInt addr 0x2b4acfc size 0x60 virtual false final false
 int32_t GetInt(int32_t nameID) ;

/// @brief Method GetFloat addr 0x2b4ad5c size 0x70 virtual false final false
 float_t GetFloat(::StringW name) ;

/// @brief Method GetFloat addr 0x2b4adcc size 0x44 virtual false final false
 float_t GetFloat(int32_t nameID) ;

/// @brief Method GetInteger addr 0x2b4ae10 size 0x70 virtual false final false
 int32_t GetInteger(::StringW name) ;

/// @brief Method GetInteger addr 0x2b4ae80 size 0x44 virtual false final false
 int32_t GetInteger(int32_t nameID) ;

/// @brief Method GetColor addr 0x2b464ec size 0x4c virtual false final false
 UnityEngine::Color GetColor(::StringW name) ;

/// @brief Method GetColor addr 0x2b464e8 size 0x4 virtual false final false
 UnityEngine::Color GetColor(int32_t nameID) ;

/// @brief Method GetVector addr 0x2b4aec4 size 0x4c virtual false final false
 UnityEngine::Vector4 GetVector(::StringW name) ;

/// @brief Method GetVector addr 0x2b4af10 size 0x4 virtual false final false
 UnityEngine::Vector4 GetVector(int32_t nameID) ;

/// @brief Method GetMatrix addr 0x2b4af14 size 0xbc virtual false final false
 UnityEngine::Matrix4x4 GetMatrix(::StringW name) ;

/// @brief Method GetMatrix addr 0x2b4afd0 size 0x8c virtual false final false
 UnityEngine::Matrix4x4 GetMatrix(int32_t nameID) ;

/// @brief Method GetTexture addr 0x2b46780 size 0x70 virtual false final false
 UnityEngine::Texture GetTexture(::StringW name) ;

/// @brief Method GetTexture addr 0x2b4673c size 0x44 virtual false final false
 UnityEngine::Texture GetTexture(int32_t nameID) ;

/// @brief Method GetFloatArray addr 0x2b4b05c size 0x4c virtual false final false
 ::ArrayW<float_t> GetFloatArray(::StringW name) ;

/// @brief Method GetFloatArray addr 0x2b4b0a8 size 0x84 virtual false final false
 ::ArrayW<float_t> GetFloatArray(int32_t nameID) ;

/// @brief Method GetColorArray addr 0x2b4b12c size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArray(::StringW name) ;

/// @brief Method GetColorArray addr 0x2b4b178 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Color> GetColorArray(int32_t nameID) ;

/// @brief Method GetVectorArray addr 0x2b4b1fc size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArray(::StringW name) ;

/// @brief Method GetVectorArray addr 0x2b4b248 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetVectorArray(int32_t nameID) ;

/// @brief Method GetMatrixArray addr 0x2b4b2cc size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArray(::StringW name) ;

/// @brief Method GetMatrixArray addr 0x2b4b318 size 0x84 virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetMatrixArray(int32_t nameID) ;

/// @brief Method GetFloatArray addr 0x2b4b39c size 0x5c virtual false final false
 void GetFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetFloatArray addr 0x2b4b3f8 size 0x4 virtual false final false
 void GetFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetColorArray addr 0x2b4b3fc size 0x5c virtual false final false
 void GetColorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method GetColorArray addr 0x2b4b458 size 0x4 virtual false final false
 void GetColorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Color> values) ;

/// @brief Method GetVectorArray addr 0x2b4b45c size 0x5c virtual false final false
 void GetVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetVectorArray addr 0x2b4b4b8 size 0x4 virtual false final false
 void GetVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetMatrixArray addr 0x2b4b4bc size 0x5c virtual false final false
 void GetMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetMatrixArray addr 0x2b4b518 size 0x4 virtual false final false
 void GetMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetTextureOffset addr 0x2b46b44 size 0x64 virtual false final false
 void SetTextureOffset(::StringW name, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureOffset addr 0x2b46b40 size 0x4 virtual false final false
 void SetTextureOffset(int32_t nameID, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureScale addr 0x2b46d38 size 0x64 virtual false final false
 void SetTextureScale(::StringW name, UnityEngine::Vector2 value) ;

/// @brief Method SetTextureScale addr 0x2b46d34 size 0x4 virtual false final false
 void SetTextureScale(int32_t nameID, UnityEngine::Vector2 value) ;

/// @brief Method GetTextureOffset addr 0x2b46a38 size 0x58 virtual false final false
 UnityEngine::Vector2 GetTextureOffset(::StringW name) ;

/// @brief Method GetTextureOffset addr 0x2b46a20 size 0x18 virtual false final false
 UnityEngine::Vector2 GetTextureOffset(int32_t nameID) ;

/// @brief Method GetTextureScale addr 0x2b46c38 size 0x4c virtual false final false
 UnityEngine::Vector2 GetTextureScale(::StringW name) ;

/// @brief Method GetTextureScale addr 0x2b46c34 size 0x4 virtual false final false
 UnityEngine::Vector2 GetTextureScale(int32_t nameID) ;

/// @brief Method EnableLocalKeyword_Injected addr 0x2b4784c size 0x44 virtual false final false
 void EnableLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method DisableLocalKeyword_Injected addr 0x2b478d4 size 0x44 virtual false final false
 void DisableLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetLocalKeyword_Injected addr 0x2b4796c size 0x54 virtual false final false
 void SetLocalKeyword_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword, bool value) ;

/// @brief Method IsLocalKeywordEnabled_Injected addr 0x2b47a04 size 0x44 virtual false final false
 bool IsLocalKeywordEnabled_Injected(ByRef<UnityEngine::Rendering::LocalKeyword> keyword) ;

/// @brief Method SetColorImpl_Injected addr 0x2b4864c size 0x54 virtual false final false
 void SetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> value) ;

/// @brief Method SetMatrixImpl_Injected addr 0x2b486f4 size 0x54 virtual false final false
 void SetMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> value) ;

/// @brief Method GetColorImpl_Injected addr 0x2b48a60 size 0x54 virtual false final false
 void GetColorImpl_Injected(int32_t name, ByRef<UnityEngine::Color> ret) ;

/// @brief Method GetMatrixImpl_Injected addr 0x2b48b30 size 0x54 virtual false final false
 void GetMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method GetTextureScaleAndOffsetImpl_Injected addr 0x2b49108 size 0x54 virtual false final false
 void GetTextureScaleAndOffsetImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method SetTextureOffsetImpl_Injected addr 0x2b491b4 size 0x54 virtual false final false
 void SetTextureOffsetImpl_Injected(int32_t name, ByRef<UnityEngine::Vector2> offset) ;

/// @brief Method SetTextureScaleImpl_Injected addr 0x2b49260 size 0x54 virtual false final false
 void SetTextureScaleImpl_Injected(int32_t name, ByRef<UnityEngine::Vector2> scale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Material);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Material, "UnityEngine", "Material");
