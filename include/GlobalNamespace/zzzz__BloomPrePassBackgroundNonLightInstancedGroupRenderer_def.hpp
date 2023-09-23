#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;
}
namespace GlobalNamespace {
class BloomPrePassBackgroundNonLightInstancedGroupRenderer;
}
namespace GlobalNamespace {
class GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;
}
// Type: ::SupportedProperty
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14622))
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty
class CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty& operator=(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty&& o) noexcept = default;
  constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty& operator=(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType __declspec(property(get=__get_propertyType, put=__set_propertyType))  propertyType;

constexpr void __set_propertyType(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType value) ;

constexpr GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType __get_propertyType() const;

 ::StringW __declspec(property(get=__get_propertyName, put=__set_propertyName))  propertyName;

constexpr void __set_propertyName(::StringW value) ;

constexpr ::StringW __get_propertyName() const;

 int32_t __declspec(property(get=__get_propertyId, put=__set_propertyId))  propertyId;

constexpr void __set_propertyId(int32_t value) ;

constexpr int32_t __get_propertyId() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty() ;

/// @brief Method .ctor addr 0x1f93714 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PropertyType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14623))
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType
struct CORDL_TYPE GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const&) = default;
                    constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType&&) = default;
                    constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType& operator=(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType& operator=(GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped : int32_t {
__Float = 0,
__Vector = 1,
__Color = 2,
__Matrix4x4 = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Float offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Float;

/// @brief Field Vector offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Vector;

/// @brief Field Color offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Color;

/// @brief Field Matrix4x4 offset 0
static GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType const Matrix4x4;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomPrePassBackgroundNonLightInstancedGroupRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14639))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14624))
// CS Name: BloomPrePassBackgroundNonLightInstancedGroupRenderer
class CORDL_TYPE BloomPrePassBackgroundNonLightInstancedGroupRenderer : public GlobalNamespace::BloomPrePassNonLightPass {
public:
// Declarations
using PropertyType = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType;

using SupportedProperty = GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~BloomPrePassBackgroundNonLightInstancedGroupRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundNonLightInstancedGroupRenderer", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer(BloomPrePassBackgroundNonLightInstancedGroupRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundNonLightInstancedGroupRenderer(void* ptr) noexcept : GlobalNamespace::BloomPrePassNonLightPass(ptr) {
}


  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer& operator=(BloomPrePassBackgroundNonLightInstancedGroupRenderer&& o) noexcept = default;
  constexpr BloomPrePassBackgroundNonLightInstancedGroupRenderer& operator=(BloomPrePassBackgroundNonLightInstancedGroupRenderer const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> __declspec(property(get=__get__renderers, put=__set__renderers))  _renderers;

constexpr void __set__renderers(::ArrayW<GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> value) ;

constexpr ::ArrayW<GlobalNamespace::BloomPrePassBackgroundNonLightRenderer> __get__renderers() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty> __declspec(property(get=__get__supportedProperties, put=__set__supportedProperties))  _supportedProperties;

constexpr void __set__supportedProperties(::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty> __get__supportedProperties() const;

static int32_t __declspec(property(get=__get__worldSpaceCameraPosID, put=__set__worldSpaceCameraPosID))  _worldSpaceCameraPosID;

static void __set__worldSpaceCameraPosID(int32_t value) ;

static int32_t __get__worldSpaceCameraPosID() ;

/// @brief Field kInternalMatricesCachingId offset 0
static constexpr ::ConstString  kInternalMatricesCachingId{u"INTERNAL_MATRICES"};

 System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t>> __declspec(property(get=__get__reusableFloatArrays, put=__set__reusableFloatArrays))  _reusableFloatArrays;

constexpr void __set__reusableFloatArrays(System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<float_t>> __get__reusableFloatArrays() const;

 System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Vector4>> __declspec(property(get=__get__reusableVectorArrays, put=__set__reusableVectorArrays))  _reusableVectorArrays;

constexpr void __set__reusableVectorArrays(System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Vector4>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Vector4>> __get__reusableVectorArrays() const;

 System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Matrix4x4>> __declspec(property(get=__get__reusableMatrixArrays, put=__set__reusableMatrixArrays))  _reusableMatrixArrays;

constexpr void __set__reusableMatrixArrays(System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Matrix4x4>> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::ArrayW<UnityEngine::Matrix4x4>> __get__reusableMatrixArrays() const;

 int32_t __declspec(property(get=__get__reusableArraysSize, put=__set__reusableArraysSize))  _reusableArraysSize;

constexpr void __set__reusableArraysSize(int32_t value) ;

constexpr int32_t __get__reusableArraysSize() const;

 UnityEngine::Rendering::CommandBuffer __declspec(property(get=__get__commandBuffer, put=__set__commandBuffer))  _commandBuffer;

constexpr void __set__commandBuffer(UnityEngine::Rendering::CommandBuffer value) ;

constexpr UnityEngine::Rendering::CommandBuffer __get__commandBuffer() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__reusableSetMaterialPropertyBlock, put=__set__reusableSetMaterialPropertyBlock))  _reusableSetMaterialPropertyBlock;

constexpr void __set__reusableSetMaterialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get__reusableSetMaterialPropertyBlock() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get__reusableGetMaterialPropertyBlock, put=__set__reusableGetMaterialPropertyBlock))  _reusableGetMaterialPropertyBlock;

constexpr void __set__reusableGetMaterialPropertyBlock(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get__reusableGetMaterialPropertyBlock() const;


// Methods

/// @brief Method Awake addr 0x1f92950 size 0x4 virtual false final false
 void Awake() ;

/// @brief Method InitIfNeeded addr 0x1f92954 size 0x258 virtual false final false
 void InitIfNeeded() ;

/// @brief Method Render addr 0x1f92bdc size 0x6c4 virtual true final false
 void Render(UnityEngine::RenderTexture dest, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix) ;

/// @brief Method GetCachedMatrixArray addr 0x1f932a0 size 0xdc virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> GetCachedMatrixArray(::StringW propertyName) ;

/// @brief Method GetCachedFloatArray addr 0x1f93458 size 0xdc virtual false final false
 ::ArrayW<float_t> GetCachedFloatArray(::StringW propertyName) ;

/// @brief Method GetCachedVectorArray addr 0x1f9337c size 0xdc virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetCachedVectorArray(::StringW propertyName) ;

/// @brief Method AutoFillRenderers addr 0x1f93534 size 0x50 virtual false final false
 void AutoFillRenderers() ;

// Ctor Parameters []
explicit BloomPrePassBackgroundNonLightInstancedGroupRenderer() ;

/// @brief Method .ctor addr 0x1f93584 size 0x128 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__PropertyType, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/PropertyType");
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BloomPrePassBackgroundNonLightInstancedGroupRenderer__SupportedProperty, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty");
