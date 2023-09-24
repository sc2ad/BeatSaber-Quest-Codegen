#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Rendering {
struct ShaderPropertyType;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine {
struct DisableBatchingType;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShaderHardwareTier;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine::Rendering {
struct ShaderPropertyFlags;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine {
class Shader;
}
// Type: UnityEngine::Shader
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10038))
// CS Name: UnityEngine.Shader
class CORDL_TYPE Shader : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Shader() = default;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: " const&", def_value: None }]
constexpr Shader(Shader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Shader", modifiers: "&&", def_value: None }]
constexpr Shader(Shader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Shader(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Shader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Shader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Shader& operator=(Shader&& o) noexcept = default;
  constexpr Shader& operator=(Shader const& o) noexcept = default;
                


// Properties

static UnityEngine::Rendering::ShaderHardwareTier __declspec(property(get=get_globalShaderHardwareTier, put=set_globalShaderHardwareTier))  globalShaderHardwareTier;

static int32_t __declspec(property(get=get_maximumChunksOverride, put=set_maximumChunksOverride))  maximumChunksOverride;

 int32_t __declspec(property(get=get_maximumLOD, put=set_maximumLOD))  maximumLOD;

static int32_t __declspec(property(get=get_globalMaximumLOD, put=set_globalMaximumLOD))  globalMaximumLOD;

 bool __declspec(property(get=get_isSupported))  isSupported;

static ::StringW __declspec(property(get=get_globalRenderPipeline, put=set_globalRenderPipeline))  globalRenderPipeline;

static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> __declspec(property(get=get_enabledGlobalKeywords))  enabledGlobalKeywords;

static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> __declspec(property(get=get_globalKeywords))  globalKeywords;

 UnityEngine::Rendering::LocalKeywordSpace __declspec(property(get=get_keywordSpace))  keywordSpace;

 int32_t __declspec(property(get=get_renderQueue))  renderQueue;

 UnityEngine::DisableBatchingType __declspec(property(get=get_disableBatching))  disableBatching;

 int32_t __declspec(property(get=get_passCount))  passCount;

 int32_t __declspec(property(get=get_subshaderCount))  subshaderCount;


// Methods

/// @brief Method get_globalShaderHardwareTier addr 0x2b422a0 size 0x68 virtual false final false
static UnityEngine::Rendering::ShaderHardwareTier get_globalShaderHardwareTier() ;

/// @brief Method set_globalShaderHardwareTier addr 0x2b42308 size 0x74 virtual false final false
static void set_globalShaderHardwareTier(UnityEngine::Rendering::ShaderHardwareTier value) ;

/// @brief Method Find addr 0x2b4237c size 0x6c virtual false final false
static UnityEngine::Shader Find(::StringW name) ;

/// @brief Method FindBuiltin addr 0x2b423e8 size 0x3c virtual false final false
static UnityEngine::Shader FindBuiltin(::StringW name) ;

/// @brief Method get_maximumChunksOverride addr 0x2b42424 size 0x28 virtual false final false
static int32_t get_maximumChunksOverride() ;

/// @brief Method set_maximumChunksOverride addr 0x2b4244c size 0x3c virtual false final false
static void set_maximumChunksOverride(int32_t value) ;

/// @brief Method get_maximumLOD addr 0x2b42488 size 0x3c virtual false final false
 int32_t get_maximumLOD() ;

/// @brief Method set_maximumLOD addr 0x2b424c4 size 0x44 virtual false final false
 void set_maximumLOD(int32_t value) ;

/// @brief Method get_globalMaximumLOD addr 0x2b42508 size 0x28 virtual false final false
static int32_t get_globalMaximumLOD() ;

/// @brief Method set_globalMaximumLOD addr 0x2b42530 size 0x3c virtual false final false
static void set_globalMaximumLOD(int32_t value) ;

/// @brief Method get_isSupported addr 0x2b4256c size 0x3c virtual false final false
 bool get_isSupported() ;

/// @brief Method get_globalRenderPipeline addr 0x2b425a8 size 0x28 virtual false final false
static ::StringW get_globalRenderPipeline() ;

/// @brief Method set_globalRenderPipeline addr 0x2b425d0 size 0x3c virtual false final false
static void set_globalRenderPipeline(::StringW value) ;

/// @brief Method get_enabledGlobalKeywords addr 0x2b4260c size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> get_enabledGlobalKeywords() ;

/// @brief Method get_globalKeywords addr 0x2b4265c size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> get_globalKeywords() ;

/// @brief Method get_keywordSpace addr 0x2b426ac size 0x4c virtual false final false
 UnityEngine::Rendering::LocalKeywordSpace get_keywordSpace() ;

/// @brief Method GetEnabledGlobalKeywords addr 0x2b42634 size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> GetEnabledGlobalKeywords() ;

/// @brief Method GetAllGlobalKeywords addr 0x2b42684 size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Rendering::GlobalKeyword> GetAllGlobalKeywords() ;

/// @brief Method EnableKeyword addr 0x2b4273c size 0x3c virtual false final false
static void EnableKeyword(::StringW keyword) ;

/// @brief Method DisableKeyword addr 0x2b42778 size 0x3c virtual false final false
static void DisableKeyword(::StringW keyword) ;

/// @brief Method IsKeywordEnabled addr 0x2b427b4 size 0x3c virtual false final false
static bool IsKeywordEnabled(::StringW keyword) ;

/// @brief Method EnableKeywordFast addr 0x2b427f0 size 0x40 virtual false final false
static void EnableKeywordFast(UnityEngine::Rendering::GlobalKeyword keyword) ;

/// @brief Method DisableKeywordFast addr 0x2b4286c size 0x40 virtual false final false
static void DisableKeywordFast(UnityEngine::Rendering::GlobalKeyword keyword) ;

/// @brief Method SetKeywordFast addr 0x2b428e8 size 0x50 virtual false final false
static void SetKeywordFast(UnityEngine::Rendering::GlobalKeyword keyword, bool value) ;

/// @brief Method IsKeywordEnabledFast addr 0x2b4297c size 0x44 virtual false final false
static bool IsKeywordEnabledFast(UnityEngine::Rendering::GlobalKeyword keyword) ;

/// @brief Method EnableKeyword addr 0x2b429fc size 0xc virtual false final false
static void EnableKeyword(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method DisableKeyword addr 0x2b42a08 size 0xc virtual false final false
static void DisableKeyword(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method SetKeyword addr 0x2b42a14 size 0x14 virtual false final false
static void SetKeyword(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword, bool value) ;

/// @brief Method IsKeywordEnabled addr 0x2b42a28 size 0xc virtual false final false
static bool IsKeywordEnabled(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method get_renderQueue addr 0x2b42a34 size 0x3c virtual false final false
 int32_t get_renderQueue() ;

/// @brief Method get_disableBatching addr 0x2b42a70 size 0x3c virtual false final false
 UnityEngine::DisableBatchingType get_disableBatching() ;

/// @brief Method WarmupAllShaders addr 0x2b42aac size 0x28 virtual false final false
static void WarmupAllShaders() ;

/// @brief Method TagToID addr 0x2b42ad4 size 0x3c virtual false final false
static int32_t TagToID(::StringW name) ;

/// @brief Method IDToTag addr 0x2b42b10 size 0x3c virtual false final false
static ::StringW IDToTag(int32_t name) ;

/// @brief Method PropertyToID addr 0x2b41918 size 0x3c virtual false final false
static int32_t PropertyToID(::StringW name) ;

/// @brief Method GetDependency addr 0x2b42b4c size 0x44 virtual false final false
 UnityEngine::Shader GetDependency(::StringW name) ;

/// @brief Method get_passCount addr 0x2b42b90 size 0x3c virtual false final false
 int32_t get_passCount() ;

/// @brief Method get_subshaderCount addr 0x2b42bcc size 0x3c virtual false final false
 int32_t get_subshaderCount() ;

/// @brief Method GetPassCountInSubshader addr 0x2b42c08 size 0x44 virtual false final false
 int32_t GetPassCountInSubshader(int32_t subshaderIndex) ;

/// @brief Method FindPassTagValue addr 0x2b42c4c size 0x10c virtual false final false
 UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t passIndex, UnityEngine::Rendering::ShaderTagId tagName) ;

/// @brief Method FindPassTagValue addr 0x2b42dac size 0x170 virtual false final false
 UnityEngine::Rendering::ShaderTagId FindPassTagValue(int32_t subshaderIndex, int32_t passIndex, UnityEngine::Rendering::ShaderTagId tagName) ;

/// @brief Method FindSubshaderTagValue addr 0x2b42f78 size 0x10c virtual false final false
 UnityEngine::Rendering::ShaderTagId FindSubshaderTagValue(int32_t subshaderIndex, UnityEngine::Rendering::ShaderTagId tagName) ;

/// @brief Method Internal_FindPassTagValue addr 0x2b42d58 size 0x54 virtual false final false
 int32_t Internal_FindPassTagValue(int32_t passIndex, int32_t tagName) ;

/// @brief Method Internal_FindPassTagValueInSubShader addr 0x2b42f1c size 0x5c virtual false final false
 int32_t Internal_FindPassTagValueInSubShader(int32_t subShaderIndex, int32_t passIndex, int32_t tagName) ;

/// @brief Method Internal_FindSubshaderTagValue addr 0x2b43084 size 0x54 virtual false final false
 int32_t Internal_FindSubshaderTagValue(int32_t subShaderIndex, int32_t tagName) ;

/// @brief Method SetGlobalIntImpl addr 0x2b430d8 size 0x44 virtual false final false
static void SetGlobalIntImpl(int32_t name, int32_t value) ;

/// @brief Method SetGlobalFloatImpl addr 0x2b4311c size 0x4c virtual false final false
static void SetGlobalFloatImpl(int32_t name, float_t value) ;

/// @brief Method SetGlobalVectorImpl addr 0x2b43168 size 0x54 virtual false final false
static void SetGlobalVectorImpl(int32_t name, UnityEngine::Vector4 value) ;

/// @brief Method SetGlobalMatrixImpl addr 0x2b43200 size 0x44 virtual false final false
static void SetGlobalMatrixImpl(int32_t name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetGlobalTextureImpl addr 0x2b43288 size 0x44 virtual false final false
static void SetGlobalTextureImpl(int32_t name, UnityEngine::Texture value) ;

/// @brief Method SetGlobalRenderTextureImpl addr 0x2b432cc size 0x54 virtual false final false
static void SetGlobalRenderTextureImpl(int32_t name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetGlobalBufferImpl addr 0x2b43320 size 0x44 virtual false final false
static void SetGlobalBufferImpl(int32_t name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetGlobalGraphicsBufferImpl addr 0x2b43364 size 0x44 virtual false final false
static void SetGlobalGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetGlobalConstantBufferImpl addr 0x2b433a8 size 0x5c virtual false final false
static void SetGlobalConstantBufferImpl(int32_t name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetGlobalConstantGraphicsBufferImpl addr 0x2b43404 size 0x5c virtual false final false
static void SetGlobalConstantGraphicsBufferImpl(int32_t name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method GetGlobalIntImpl addr 0x2b43460 size 0x3c virtual false final false
static int32_t GetGlobalIntImpl(int32_t name) ;

/// @brief Method GetGlobalFloatImpl addr 0x2b4349c size 0x3c virtual false final false
static float_t GetGlobalFloatImpl(int32_t name) ;

/// @brief Method GetGlobalVectorImpl addr 0x2b434d8 size 0x58 virtual false final false
static UnityEngine::Vector4 GetGlobalVectorImpl(int32_t name) ;

/// @brief Method GetGlobalMatrixImpl addr 0x2b43574 size 0x6c virtual false final false
static UnityEngine::Matrix4x4 GetGlobalMatrixImpl(int32_t name) ;

/// @brief Method GetGlobalTextureImpl addr 0x2b43624 size 0x3c virtual false final false
static UnityEngine::Texture GetGlobalTextureImpl(int32_t name) ;

/// @brief Method SetGlobalFloatArrayImpl addr 0x2b43660 size 0x54 virtual false final false
static void SetGlobalFloatArrayImpl(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetGlobalVectorArrayImpl addr 0x2b436b4 size 0x54 virtual false final false
static void SetGlobalVectorArrayImpl(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetGlobalMatrixArrayImpl addr 0x2b43708 size 0x54 virtual false final false
static void SetGlobalMatrixArrayImpl(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method GetGlobalFloatArrayImpl addr 0x2b4375c size 0x3c virtual false final false
static ::ArrayW<float_t> GetGlobalFloatArrayImpl(int32_t name) ;

/// @brief Method GetGlobalVectorArrayImpl addr 0x2b43798 size 0x3c virtual false final false
static ::ArrayW<UnityEngine::Vector4> GetGlobalVectorArrayImpl(int32_t name) ;

/// @brief Method GetGlobalMatrixArrayImpl addr 0x2b437d4 size 0x3c virtual false final false
static ::ArrayW<UnityEngine::Matrix4x4> GetGlobalMatrixArrayImpl(int32_t name) ;

/// @brief Method GetGlobalFloatArrayCountImpl addr 0x2b43810 size 0x3c virtual false final false
static int32_t GetGlobalFloatArrayCountImpl(int32_t name) ;

/// @brief Method GetGlobalVectorArrayCountImpl addr 0x2b4384c size 0x3c virtual false final false
static int32_t GetGlobalVectorArrayCountImpl(int32_t name) ;

/// @brief Method GetGlobalMatrixArrayCountImpl addr 0x2b43888 size 0x3c virtual false final false
static int32_t GetGlobalMatrixArrayCountImpl(int32_t name) ;

/// @brief Method ExtractGlobalFloatArrayImpl addr 0x2b438c4 size 0x44 virtual false final false
static void ExtractGlobalFloatArrayImpl(int32_t name, ByRef<::ArrayW<float_t>> val) ;

/// @brief Method ExtractGlobalVectorArrayImpl addr 0x2b43908 size 0x44 virtual false final false
static void ExtractGlobalVectorArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Vector4>> val) ;

/// @brief Method ExtractGlobalMatrixArrayImpl addr 0x2b4394c size 0x44 virtual false final false
static void ExtractGlobalMatrixArrayImpl(int32_t name, ByRef<::ArrayW<UnityEngine::Matrix4x4>> val) ;

/// @brief Method SetGlobalFloatArray addr 0x2b43990 size 0x110 virtual false final false
static void SetGlobalFloatArray(int32_t name, ::ArrayW<float_t> values, int32_t count) ;

/// @brief Method SetGlobalVectorArray addr 0x2b43aa0 size 0x110 virtual false final false
static void SetGlobalVectorArray(int32_t name, ::ArrayW<UnityEngine::Vector4> values, int32_t count) ;

/// @brief Method SetGlobalMatrixArray addr 0x2b43bb0 size 0x110 virtual false final false
static void SetGlobalMatrixArray(int32_t name, ::ArrayW<UnityEngine::Matrix4x4> values, int32_t count) ;

/// @brief Method ExtractGlobalFloatArray addr 0x2b43cc0 size 0x178 virtual false final false
static void ExtractGlobalFloatArray(int32_t name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method ExtractGlobalVectorArray addr 0x2b43e38 size 0x178 virtual false final false
static void ExtractGlobalVectorArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method ExtractGlobalMatrixArray addr 0x2b43fb0 size 0x178 virtual false final false
static void ExtractGlobalMatrixArray(int32_t name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetGlobalInt addr 0x2b44128 size 0x7c virtual false final false
static void SetGlobalInt(::StringW name, int32_t value) ;

/// @brief Method SetGlobalInt addr 0x2b441a4 size 0x4c virtual false final false
static void SetGlobalInt(int32_t nameID, int32_t value) ;

/// @brief Method SetGlobalFloat addr 0x2b441f0 size 0x78 virtual false final false
static void SetGlobalFloat(::StringW name, float_t value) ;

/// @brief Method SetGlobalFloat addr 0x2b44268 size 0x4c virtual false final false
static void SetGlobalFloat(int32_t nameID, float_t value) ;

/// @brief Method SetGlobalInteger addr 0x2b442b4 size 0x70 virtual false final false
static void SetGlobalInteger(::StringW name, int32_t value) ;

/// @brief Method SetGlobalInteger addr 0x2b44324 size 0x44 virtual false final false
static void SetGlobalInteger(int32_t nameID, int32_t value) ;

/// @brief Method SetGlobalVector addr 0x2b44368 size 0x70 virtual false final false
static void SetGlobalVector(::StringW name, UnityEngine::Vector4 value) ;

/// @brief Method SetGlobalVector addr 0x2b443d8 size 0x4 virtual false final false
static void SetGlobalVector(int32_t nameID, UnityEngine::Vector4 value) ;

/// @brief Method SetGlobalColor addr 0x2b443dc size 0x70 virtual false final false
static void SetGlobalColor(::StringW name, UnityEngine::Color value) ;

/// @brief Method SetGlobalColor addr 0x2b4444c size 0x4 virtual false final false
static void SetGlobalColor(int32_t nameID, UnityEngine::Color value) ;

/// @brief Method SetGlobalMatrix addr 0x2b44450 size 0x8c virtual false final false
static void SetGlobalMatrix(::StringW name, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetGlobalMatrix addr 0x2b444dc size 0x5c virtual false final false
static void SetGlobalMatrix(int32_t nameID, UnityEngine::Matrix4x4 value) ;

/// @brief Method SetGlobalTexture addr 0x2b44538 size 0x70 virtual false final false
static void SetGlobalTexture(::StringW name, UnityEngine::Texture value) ;

/// @brief Method SetGlobalTexture addr 0x2b445a8 size 0x44 virtual false final false
static void SetGlobalTexture(int32_t nameID, UnityEngine::Texture value) ;

/// @brief Method SetGlobalTexture addr 0x2b445ec size 0x80 virtual false final false
static void SetGlobalTexture(::StringW name, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetGlobalTexture addr 0x2b4466c size 0x54 virtual false final false
static void SetGlobalTexture(int32_t nameID, UnityEngine::RenderTexture value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetGlobalBuffer addr 0x2b446c0 size 0x70 virtual false final false
static void SetGlobalBuffer(::StringW name, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetGlobalBuffer addr 0x2b44730 size 0x44 virtual false final false
static void SetGlobalBuffer(int32_t nameID, UnityEngine::ComputeBuffer value) ;

/// @brief Method SetGlobalBuffer addr 0x2b44774 size 0x70 virtual false final false
static void SetGlobalBuffer(::StringW name, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetGlobalBuffer addr 0x2b447e4 size 0x44 virtual false final false
static void SetGlobalBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value) ;

/// @brief Method SetGlobalConstantBuffer addr 0x2b44828 size 0x88 virtual false final false
static void SetGlobalConstantBuffer(::StringW name, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetGlobalConstantBuffer addr 0x2b448b0 size 0x5c virtual false final false
static void SetGlobalConstantBuffer(int32_t nameID, UnityEngine::ComputeBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetGlobalConstantBuffer addr 0x2b4490c size 0x88 virtual false final false
static void SetGlobalConstantBuffer(::StringW name, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetGlobalConstantBuffer addr 0x2b44994 size 0x5c virtual false final false
static void SetGlobalConstantBuffer(int32_t nameID, UnityEngine::GraphicsBuffer value, int32_t offset, int32_t size) ;

/// @brief Method SetGlobalFloatArray addr 0x2b449f0 size 0xa4 virtual false final false
static void SetGlobalFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetGlobalFloatArray addr 0x2b44a94 size 0x78 virtual false final false
static void SetGlobalFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method SetGlobalFloatArray addr 0x2b44b0c size 0x54 virtual false final false
static void SetGlobalFloatArray(::StringW name, ::ArrayW<float_t> values) ;

/// @brief Method SetGlobalFloatArray addr 0x2b44b60 size 0x18 virtual false final false
static void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values) ;

/// @brief Method SetGlobalVectorArray addr 0x2b44b78 size 0xa4 virtual false final false
static void SetGlobalVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetGlobalVectorArray addr 0x2b44c1c size 0x78 virtual false final false
static void SetGlobalVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method SetGlobalVectorArray addr 0x2b44c94 size 0x54 virtual false final false
static void SetGlobalVectorArray(::StringW name, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetGlobalVectorArray addr 0x2b44ce8 size 0x18 virtual false final false
static void SetGlobalVectorArray(int32_t nameID, ::ArrayW<UnityEngine::Vector4> values) ;

/// @brief Method SetGlobalMatrixArray addr 0x2b44d00 size 0xa4 virtual false final false
static void SetGlobalMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetGlobalMatrixArray addr 0x2b44da4 size 0x78 virtual false final false
static void SetGlobalMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetGlobalMatrixArray addr 0x2b44e1c size 0x54 virtual false final false
static void SetGlobalMatrixArray(::StringW name, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method SetGlobalMatrixArray addr 0x2b44e70 size 0x18 virtual false final false
static void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetGlobalInt addr 0x2b44e88 size 0x84 virtual false final false
static int32_t GetGlobalInt(::StringW name) ;

/// @brief Method GetGlobalInt addr 0x2b44f0c size 0x58 virtual false final false
static int32_t GetGlobalInt(int32_t nameID) ;

/// @brief Method GetGlobalFloat addr 0x2b44f64 size 0x68 virtual false final false
static float_t GetGlobalFloat(::StringW name) ;

/// @brief Method GetGlobalFloat addr 0x2b44fcc size 0x3c virtual false final false
static float_t GetGlobalFloat(int32_t nameID) ;

/// @brief Method GetGlobalInteger addr 0x2b45008 size 0x68 virtual false final false
static int32_t GetGlobalInteger(::StringW name) ;

/// @brief Method GetGlobalInteger addr 0x2b45070 size 0x3c virtual false final false
static int32_t GetGlobalInteger(int32_t nameID) ;

/// @brief Method GetGlobalVector addr 0x2b450ac size 0x40 virtual false final false
static UnityEngine::Vector4 GetGlobalVector(::StringW name) ;

/// @brief Method GetGlobalVector addr 0x2b450ec size 0x4 virtual false final false
static UnityEngine::Vector4 GetGlobalVector(int32_t nameID) ;

/// @brief Method GetGlobalColor addr 0x2b450f0 size 0x40 virtual false final false
static UnityEngine::Color GetGlobalColor(::StringW name) ;

/// @brief Method GetGlobalColor addr 0x2b45130 size 0x4 virtual false final false
static UnityEngine::Color GetGlobalColor(int32_t nameID) ;

/// @brief Method GetGlobalMatrix addr 0x2b45134 size 0xac virtual false final false
static UnityEngine::Matrix4x4 GetGlobalMatrix(::StringW name) ;

/// @brief Method GetGlobalMatrix addr 0x2b451e0 size 0x7c virtual false final false
static UnityEngine::Matrix4x4 GetGlobalMatrix(int32_t nameID) ;

/// @brief Method GetGlobalTexture addr 0x2b4525c size 0x68 virtual false final false
static UnityEngine::Texture GetGlobalTexture(::StringW name) ;

/// @brief Method GetGlobalTexture addr 0x2b452c4 size 0x3c virtual false final false
static UnityEngine::Texture GetGlobalTexture(int32_t nameID) ;

/// @brief Method GetGlobalFloatArray addr 0x2b45300 size 0x40 virtual false final false
static ::ArrayW<float_t> GetGlobalFloatArray(::StringW name) ;

/// @brief Method GetGlobalFloatArray addr 0x2b45340 size 0x78 virtual false final false
static ::ArrayW<float_t> GetGlobalFloatArray(int32_t nameID) ;

/// @brief Method GetGlobalVectorArray addr 0x2b453b8 size 0x40 virtual false final false
static ::ArrayW<UnityEngine::Vector4> GetGlobalVectorArray(::StringW name) ;

/// @brief Method GetGlobalVectorArray addr 0x2b453f8 size 0x78 virtual false final false
static ::ArrayW<UnityEngine::Vector4> GetGlobalVectorArray(int32_t nameID) ;

/// @brief Method GetGlobalMatrixArray addr 0x2b45470 size 0x40 virtual false final false
static ::ArrayW<UnityEngine::Matrix4x4> GetGlobalMatrixArray(::StringW name) ;

/// @brief Method GetGlobalMatrixArray addr 0x2b454b0 size 0x78 virtual false final false
static ::ArrayW<UnityEngine::Matrix4x4> GetGlobalMatrixArray(int32_t nameID) ;

/// @brief Method GetGlobalFloatArray addr 0x2b45528 size 0x48 virtual false final false
static void GetGlobalFloatArray(::StringW name, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetGlobalFloatArray addr 0x2b45570 size 0x4 virtual false final false
static void GetGlobalFloatArray(int32_t nameID, System::Collections::Generic::List_1<float_t> values) ;

/// @brief Method GetGlobalVectorArray addr 0x2b45574 size 0x48 virtual false final false
static void GetGlobalVectorArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetGlobalVectorArray addr 0x2b455bc size 0x4 virtual false final false
static void GetGlobalVectorArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Vector4> values) ;

/// @brief Method GetGlobalMatrixArray addr 0x2b455c0 size 0x48 virtual false final false
static void GetGlobalMatrixArray(::StringW name, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

/// @brief Method GetGlobalMatrixArray addr 0x2b45608 size 0x4 virtual false final false
static void GetGlobalMatrixArray(int32_t nameID, System::Collections::Generic::List_1<UnityEngine::Matrix4x4> values) ;

static UnityEngine::Shader New_ctor() ;

/// @brief Method .ctor addr 0x2b4560c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method GetPropertyName addr 0x2b45664 size 0x44 virtual false final false
static ::StringW GetPropertyName(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyNameId addr 0x2b456a8 size 0x44 virtual false final false
static int32_t GetPropertyNameId(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyType addr 0x2b456ec size 0x44 virtual false final false
static UnityEngine::Rendering::ShaderPropertyType GetPropertyType(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyDescription addr 0x2b45730 size 0x44 virtual false final false
static ::StringW GetPropertyDescription(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyFlags addr 0x2b45774 size 0x44 virtual false final false
static UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyAttributes addr 0x2b457b8 size 0x44 virtual false final false
static ::ArrayW<::StringW> GetPropertyAttributes(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyDefaultIntValue addr 0x2b457fc size 0x44 virtual false final false
static int32_t GetPropertyDefaultIntValue(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyDefaultValue addr 0x2b45840 size 0x60 virtual false final false
static UnityEngine::Vector4 GetPropertyDefaultValue(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyTextureDimension addr 0x2b458f4 size 0x44 virtual false final false
static UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName addr 0x2b45938 size 0x44 virtual false final false
static ::StringW GetPropertyTextureDefaultName(UnityEngine::Shader shader, int32_t propertyIndex) ;

/// @brief Method FindTextureStackImpl addr 0x2b4597c size 0x5c virtual false final false
static bool FindTextureStackImpl(UnityEngine::Shader s, int32_t propertyIdx, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex) ;

/// @brief Method CheckPropertyIndex addr 0x2b459d8 size 0xa4 virtual false final false
static void CheckPropertyIndex(UnityEngine::Shader s, int32_t propertyIndex) ;

/// @brief Method GetPropertyCount addr 0x2b45a7c size 0x3c virtual false final false
 int32_t GetPropertyCount() ;

/// @brief Method FindPropertyIndex addr 0x2b45ab8 size 0x44 virtual false final false
 int32_t FindPropertyIndex(::StringW propertyName) ;

/// @brief Method GetPropertyName addr 0x2b45afc size 0x48 virtual false final false
 ::StringW GetPropertyName(int32_t propertyIndex) ;

/// @brief Method GetPropertyNameId addr 0x2b45b44 size 0x48 virtual false final false
 int32_t GetPropertyNameId(int32_t propertyIndex) ;

/// @brief Method GetPropertyType addr 0x2b45b8c size 0x48 virtual false final false
 UnityEngine::Rendering::ShaderPropertyType GetPropertyType(int32_t propertyIndex) ;

/// @brief Method GetPropertyDescription addr 0x2b45bd4 size 0x48 virtual false final false
 ::StringW GetPropertyDescription(int32_t propertyIndex) ;

/// @brief Method GetPropertyFlags addr 0x2b45c1c size 0x48 virtual false final false
 UnityEngine::Rendering::ShaderPropertyFlags GetPropertyFlags(int32_t propertyIndex) ;

/// @brief Method GetPropertyAttributes addr 0x2b45c64 size 0x48 virtual false final false
 ::ArrayW<::StringW> GetPropertyAttributes(int32_t propertyIndex) ;

/// @brief Method GetPropertyDefaultFloatValue addr 0x2b45cac size 0x8c virtual false final false
 float_t GetPropertyDefaultFloatValue(int32_t propertyIndex) ;

/// @brief Method GetPropertyDefaultVectorValue addr 0x2b45d38 size 0x88 virtual false final false
 UnityEngine::Vector4 GetPropertyDefaultVectorValue(int32_t propertyIndex) ;

/// @brief Method GetPropertyRangeLimits addr 0x2b45dc0 size 0x94 virtual false final false
 UnityEngine::Vector2 GetPropertyRangeLimits(int32_t propertyIndex) ;

/// @brief Method GetPropertyTextureDimension addr 0x2b45e54 size 0xa8 virtual false final false
 UnityEngine::Rendering::TextureDimension GetPropertyTextureDimension(int32_t propertyIndex) ;

/// @brief Method GetPropertyTextureDefaultName addr 0x2b45efc size 0xa8 virtual false final false
 ::StringW GetPropertyTextureDefaultName(int32_t propertyIndex) ;

/// @brief Method FindTextureStack addr 0x2b45fa4 size 0xc0 virtual false final false
 bool FindTextureStack(int32_t propertyIndex, ByRef<::StringW> stackName, ByRef<int32_t> layerIndex) ;

/// @brief Method get_keywordSpace_Injected addr 0x2b426f8 size 0x44 virtual false final false
 void get_keywordSpace_Injected(ByRef<UnityEngine::Rendering::LocalKeywordSpace> ret) ;

/// @brief Method EnableKeywordFast_Injected addr 0x2b42830 size 0x3c virtual false final false
static void EnableKeywordFast_Injected(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method DisableKeywordFast_Injected addr 0x2b428ac size 0x3c virtual false final false
static void DisableKeywordFast_Injected(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method SetKeywordFast_Injected addr 0x2b42938 size 0x44 virtual false final false
static void SetKeywordFast_Injected(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword, bool value) ;

/// @brief Method IsKeywordEnabledFast_Injected addr 0x2b429c0 size 0x3c virtual false final false
static bool IsKeywordEnabledFast_Injected(ByRef<UnityEngine::Rendering::GlobalKeyword> keyword) ;

/// @brief Method SetGlobalVectorImpl_Injected addr 0x2b431bc size 0x44 virtual false final false
static void SetGlobalVectorImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> value) ;

/// @brief Method SetGlobalMatrixImpl_Injected addr 0x2b43244 size 0x44 virtual false final false
static void SetGlobalMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> value) ;

/// @brief Method GetGlobalVectorImpl_Injected addr 0x2b43530 size 0x44 virtual false final false
static void GetGlobalVectorImpl_Injected(int32_t name, ByRef<UnityEngine::Vector4> ret) ;

/// @brief Method GetGlobalMatrixImpl_Injected addr 0x2b435e0 size 0x44 virtual false final false
static void GetGlobalMatrixImpl_Injected(int32_t name, ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method GetPropertyDefaultValue_Injected addr 0x2b458a0 size 0x54 virtual false final false
static void GetPropertyDefaultValue_Injected(UnityEngine::Shader shader, int32_t propertyIndex, ByRef<UnityEngine::Vector4> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Shader);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Shader, "UnityEngine", "Shader");
