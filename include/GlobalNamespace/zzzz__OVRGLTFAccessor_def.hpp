#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector4;
}
namespace GlobalNamespace {
struct OVRBinaryChunk;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
struct OVRGLTFType;
}
namespace UnityEngine {
struct Color;
}
namespace OVRSimpleJSON {
class JSONNode;
}
namespace GlobalNamespace {
struct OVRGLTFComponentType;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGLTFAccessor;
}
// Type: ::OVRGLTFAccessor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8470))
// CS Name: OVRGLTFAccessor
class CORDL_TYPE OVRGLTFAccessor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRGLTFAccessor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: " const&", def_value: None }]
constexpr OVRGLTFAccessor(OVRGLTFAccessor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGLTFAccessor", modifiers: "&&", def_value: None }]
constexpr OVRGLTFAccessor(OVRGLTFAccessor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGLTFAccessor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRGLTFAccessor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGLTFAccessor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGLTFAccessor& operator=(OVRGLTFAccessor&& o) noexcept = default;
  constexpr OVRGLTFAccessor& operator=(OVRGLTFAccessor const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_byteOffset, put=__set_byteOffset))  byteOffset;

constexpr void __set_byteOffset(int32_t value) ;

constexpr int32_t __get_byteOffset() const;

 int32_t __declspec(property(get=__get_byteLength, put=__set_byteLength))  byteLength;

constexpr void __set_byteLength(int32_t value) ;

constexpr int32_t __get_byteLength() const;

 int32_t __declspec(property(get=__get_byteStride, put=__set_byteStride))  byteStride;

constexpr void __set_byteStride(int32_t value) ;

constexpr int32_t __get_byteStride() const;

 int32_t __declspec(property(get=__get_bufferId, put=__set_bufferId))  bufferId;

constexpr void __set_bufferId(int32_t value) ;

constexpr int32_t __get_bufferId() const;

 int32_t __declspec(property(get=__get_bufferLength, put=__set_bufferLength))  bufferLength;

constexpr void __set_bufferLength(int32_t value) ;

constexpr int32_t __get_bufferLength() const;

 int32_t __declspec(property(get=__get_additionalOffset, put=__set_additionalOffset))  additionalOffset;

constexpr void __set_additionalOffset(int32_t value) ;

constexpr int32_t __get_additionalOffset() const;

 ::GlobalNamespace::OVRGLTFType __declspec(property(get=__get_dataType, put=__set_dataType))  dataType;

constexpr void __set_dataType(::GlobalNamespace::OVRGLTFType value) ;

constexpr ::GlobalNamespace::OVRGLTFType __get_dataType() const;

 ::GlobalNamespace::OVRGLTFComponentType __declspec(property(get=__get_componentType, put=__set_componentType))  componentType;

constexpr void __set_componentType(::GlobalNamespace::OVRGLTFComponentType value) ;

constexpr ::GlobalNamespace::OVRGLTFComponentType __get_componentType() const;

 int32_t __declspec(property(get=__get_dataCount, put=__set_dataCount))  dataCount;

constexpr void __set_dataCount(int32_t value) ;

constexpr int32_t __get_dataCount() const;


// Methods

// Ctor Parameters [CppParam { name: "node", ty: "::OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }, CppParam { name: "root", ty: "::OVRSimpleJSON::JSONNode", modifiers: "", def_value: None }, CppParam { name: "bufferViewOnly", ty: "bool", modifiers: "", def_value: None }]
explicit OVRGLTFAccessor(::OVRSimpleJSON::JSONNode node, ::OVRSimpleJSON::JSONNode root, bool bufferViewOnly) ;

/// @brief Method .ctor addr 0x25b0888 size 0x340 virtual false final false
 void _ctor(::OVRSimpleJSON::JSONNode node, ::OVRSimpleJSON::JSONNode root, bool bufferViewOnly) ;

/// @brief Method GetDataCount addr 0x25b0d2c size 0x8 virtual false final false
 int32_t GetDataCount() ;

/// @brief Method ToOVRType addr 0x25b0bc8 size 0x164 virtual false final false
static ::GlobalNamespace::OVRGLTFType ToOVRType(::StringW type) ;

/// @brief Method ReadAsInt addr 0x25b0d34 size 0x214 virtual false final false
 void ReadAsInt(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<int32_t>> data, int32_t offset) ;

/// @brief Method ReadAsFloat addr 0x25b1160 size 0x210 virtual false final false
 void ReadAsFloat(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<float_t>> data, int32_t offset) ;

/// @brief Method ReadAsVector2 addr 0x25b13d8 size 0x25c virtual false final false
 void ReadAsVector2(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector2>> data, int32_t offset) ;

/// @brief Method ReadAsVector3 addr 0x25b1634 size 0x398 virtual false final false
 void ReadAsVector3(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector3>> data, int32_t offset, ::UnityEngine::Vector3 conversionScale) ;

/// @brief Method ReadAsVector4 addr 0x25b19cc size 0x3f4 virtual false final false
 void ReadAsVector4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4>> data, int32_t offset, ::UnityEngine::Vector4 conversionScale) ;

/// @brief Method ReadAsColor addr 0x25b1dc0 size 0x488 virtual false final false
 void ReadAsColor(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Color>> data, int32_t offset) ;

/// @brief Method ReadAsMatrix4x4 addr 0x25b2270 size 0x36c virtual false final false
 void ReadAsMatrix4x4(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Matrix4x4>> data, int32_t offset, ::UnityEngine::Vector3 conversionScale) ;

/// @brief Method ReadAsKtxTexture addr 0x25b25dc size 0x110 virtual false final false
 ::ArrayW<uint8_t> ReadAsKtxTexture(::GlobalNamespace::OVRBinaryChunk chunk) ;

/// @brief Method ReadAsBoneWeights addr 0x25b26ec size 0x398 virtual false final false
 void ReadAsBoneWeights(::GlobalNamespace::OVRBinaryChunk chunk, ByRef<::ArrayW<::UnityEngine::Vector4>> data, int32_t offset) ;

/// @brief Method GetStrideForType addr 0x25b0f48 size 0x28 virtual false final false
 int32_t GetStrideForType(::GlobalNamespace::OVRGLTFComponentType type) ;

/// @brief Method GetMaxValueForType addr 0x25b2248 size 0x28 virtual false final false
 float_t GetMaxValueForType(::GlobalNamespace::OVRGLTFComponentType type) ;

/// @brief Method ReadElementAsUint addr 0x25b0f70 size 0x1f0 virtual false final false
 uint32_t ReadElementAsUint(::ArrayW<uint8_t> data, int32_t index, ::GlobalNamespace::OVRGLTFComponentType type) ;

/// @brief Method ReadElementAsFloat addr 0x25b1370 size 0x68 virtual false final false
 float_t ReadElementAsFloat(::ArrayW<uint8_t> data, int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAccessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAccessor, "", "OVRGLTFAccessor");
