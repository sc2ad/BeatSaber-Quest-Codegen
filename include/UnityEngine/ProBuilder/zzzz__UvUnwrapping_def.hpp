#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
struct ____UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UvUnwrapping;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__UvUnwrapping____c;
}
namespace UnityEngine::ProBuilder {
struct ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform;
}
// Type: ::UVTransform
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12154))
// CS Name: UnityEngine.ProBuilder.UvUnwrapping::UVTransform
struct CORDL_TYPE ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform(::UnityEngine::Vector2 translation, float_t rotation, ::UnityEngine::Vector2 scale) noexcept;


                    constexpr ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform(____UnityEngine__ProBuilder__UvUnwrapping__UVTransform const&) = default;
                    constexpr ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform(____UnityEngine__ProBuilder__UvUnwrapping__UVTransform&&) = default;
                    constexpr ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform& operator=(____UnityEngine__ProBuilder__UvUnwrapping__UVTransform const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform& operator=(____UnityEngine__ProBuilder__UvUnwrapping__UVTransform&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__UvUnwrapping__UVTransform(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Vector2 __declspec(property(get=__get_translation, put=__set_translation))  translation;

constexpr void __set_translation(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_translation() const;

 float_t __declspec(property(get=__get_rotation, put=__set_rotation))  rotation;

constexpr void __set_rotation(float_t value) ;

constexpr float_t __get_rotation() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_scale() const;


// Methods

/// @brief Method ToString addr 0x29ea8d8 size 0x1a4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12155))
// CS Name: UnityEngine.ProBuilder.UvUnwrapping::<>c
class CORDL_TYPE ____UnityEngine__ProBuilder__UvUnwrapping____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__UvUnwrapping____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__UvUnwrapping____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c(____UnityEngine__ProBuilder__UvUnwrapping____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__UvUnwrapping____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c(____UnityEngine__ProBuilder__UvUnwrapping____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__UvUnwrapping____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c& operator=(____UnityEngine__ProBuilder__UvUnwrapping____c&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__UvUnwrapping____c& operator=(____UnityEngine__ProBuilder__UvUnwrapping____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c value) ;

static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c __get___9() ;

static ::System::Func_2<::UnityEngine::ProBuilder::Face,bool> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::Face,bool> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::Face,bool> __get___9__0_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__UvUnwrapping____c() ;

/// @brief Method .ctor addr 0x29eaae0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetAutoUV>b__0_0 addr 0x29eaae8 size 0x18 virtual false final false
 bool _SetAutoUV_b__0_0(::UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::UvUnwrapping
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12156))
// CS Name: UnityEngine.ProBuilder.UvUnwrapping
class CORDL_TYPE UvUnwrapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c;

using UVTransform = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping__UVTransform;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UvUnwrapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "UvUnwrapping", modifiers: " const&", def_value: None }]
constexpr UvUnwrapping(UvUnwrapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UvUnwrapping", modifiers: "&&", def_value: None }]
constexpr UvUnwrapping(UvUnwrapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UvUnwrapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UvUnwrapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UvUnwrapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UvUnwrapping& operator=(UvUnwrapping&& o) noexcept = default;
  constexpr UvUnwrapping& operator=(UvUnwrapping const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __declspec(property(get=__get_s_UVTransformProjectionBuffer, put=__set_s_UVTransformProjectionBuffer))  s_UVTransformProjectionBuffer;

static void __set_s_UVTransformProjectionBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector2> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Vector2> __get_s_UVTransformProjectionBuffer() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_TempVector2, put=__set_s_TempVector2))  s_TempVector2;

static void __set_s_TempVector2(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_TempVector2() ;

static ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_s_IndexBuffer, put=__set_s_IndexBuffer))  s_IndexBuffer;

static void __set_s_IndexBuffer(::System::Collections::Generic::List_1<int32_t> value) ;

static ::System::Collections::Generic::List_1<int32_t> __get_s_IndexBuffer() ;


// Methods

/// @brief Method SetAutoUV addr 0x29e88f0 size 0x188 virtual false final false
static void SetAutoUV(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<::UnityEngine::ProBuilder::Face> faces, bool auto) ;

/// @brief Method SetAutoAndAlignUnwrapParamsToUVs addr 0x29e8a78 size 0x1ec virtual false final false
static void SetAutoAndAlignUnwrapParamsToUVs(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> facesToConvert) ;

/// @brief Method GetAutoUnwrapSettings addr 0x29e90a8 size 0x100 virtual false final false
static ::UnityEngine::ProBuilder::AutoUnwrapSettings GetAutoUnwrapSettings(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

/// @brief Method GetUVTransform addr 0x29e91a8 size 0x108 virtual false final false
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping__UVTransform GetUVTransform(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

/// @brief Method GetIndex addr 0x29e92b0 size 0xb0 virtual false final false
static int32_t GetIndex(::System::Collections::Generic::IList_1<int32_t> collection, int32_t index) ;

/// @brief Method CalculateDelta addr 0x29e8c64 size 0x444 virtual false final false
static ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping__UVTransform CalculateDelta(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> src, ::System::Collections::Generic::IList_1<int32_t> srcIndices, ::System::Collections::Generic::IList_1<::UnityEngine::Vector2> dst, ::System::Collections::Generic::IList_1<int32_t> dstIndices) ;

/// @brief Method GetRotatedSize addr 0x29e9360 size 0x2fc virtual false final false
static ::UnityEngine::Vector2 GetRotatedSize(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> points, ::System::Collections::Generic::IList_1<int32_t> indices, ::UnityEngine::Vector2 center, float_t rotation) ;

/// @brief Method Unwrap addr 0x29e0df0 size 0x140 virtual false final false
static void Unwrap(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face, ::UnityEngine::Vector3 projection) ;

/// @brief Method CopyUVs addr 0x29e0f30 size 0xbc virtual false final false
static void CopyUVs(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face source, ::UnityEngine::ProBuilder::Face dest) ;

/// @brief Method ProjectTextureGroup addr 0x29e9f40 size 0x194 virtual false final false
static void ProjectTextureGroup(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t group, ::UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings) ;

/// @brief Method ApplyUVSettings addr 0x29e965c size 0x8e4 virtual false final false
static void ApplyUVSettings(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t> indexes, ::UnityEngine::ProBuilder::AutoUnwrapSettings uvSettings) ;

/// @brief Method ScaleUVs addr 0x29ea0d4 size 0x228 virtual false final false
static void ScaleUVs(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t> indexes, ::UnityEngine::Vector2 scale, ::UnityEngine::ProBuilder::Bounds2D bounds) ;

/// @brief Method ApplyUVAnchor addr 0x29ea2fc size 0x398 virtual false final false
static void ApplyUVAnchor(::ArrayW<::UnityEngine::Vector2> uvs, ::System::Collections::Generic::IList_1<int32_t> indexes, ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__AutoUnwrapSettings__Anchor anchor) ;

/// @brief Method UpgradeAutoUVScaleOffset addr 0x29ea694 size 0x124 virtual false final false
static void UpgradeAutoUVScaleOffset(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::UvUnwrapping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::UvUnwrapping, "UnityEngine.ProBuilder", "UvUnwrapping");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping____c, "UnityEngine.ProBuilder", "UvUnwrapping/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__UvUnwrapping__UVTransform, "UnityEngine.ProBuilder", "UvUnwrapping/UVTransform");
