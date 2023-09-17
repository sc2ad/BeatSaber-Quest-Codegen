#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTemporalFiltering;
}
// Type: ::SimpleTemporalFiltering
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15332))
// CS Name: SimpleTemporalFiltering
class CORDL_TYPE SimpleTemporalFiltering : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SimpleTemporalFiltering() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: " const&", def_value: None }]
constexpr SimpleTemporalFiltering(SimpleTemporalFiltering const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleTemporalFiltering", modifiers: "&&", def_value: None }]
constexpr SimpleTemporalFiltering(SimpleTemporalFiltering&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleTemporalFiltering(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimpleTemporalFiltering& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleTemporalFiltering& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleTemporalFiltering& operator=(SimpleTemporalFiltering&& o) noexcept = default;
  constexpr SimpleTemporalFiltering& operator=(SimpleTemporalFiltering const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::RenderTexture> __declspec(property(get=__get__temporalFilteringTextures, put=__set__temporalFilteringTextures))  _temporalFilteringTextures;

constexpr void __set__temporalFilteringTextures(::ArrayW<::UnityEngine::RenderTexture> value) ;

constexpr ::ArrayW<::UnityEngine::RenderTexture> __get__temporalFilteringTextures() const;

 int32_t __declspec(property(get=__get__prevTemporalFilteringTextureIdx, put=__set__prevTemporalFilteringTextureIdx))  _prevTemporalFilteringTextureIdx;

constexpr void __set__prevTemporalFilteringTextureIdx(int32_t value) ;

constexpr int32_t __get__prevTemporalFilteringTextureIdx() const;

 ::UnityEngine::Material __declspec(property(get=__get__temporalFilteringMaterial, put=__set__temporalFilteringMaterial))  _temporalFilteringMaterial;

constexpr void __set__temporalFilteringMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__temporalFilteringMaterial() const;

 int32_t __declspec(property(get=__get__bufferTexID, put=__set__bufferTexID))  _bufferTexID;

constexpr void __set__bufferTexID(int32_t value) ;

constexpr int32_t __get__bufferTexID() const;


// Methods

// Ctor Parameters []
explicit SimpleTemporalFiltering() ;

/// @brief Method .ctor addr 0x267a7a0 size 0xcc virtual false final false
 void _ctor() ;

/// @brief Method FilterTexture addr 0x267a86c size 0x180 virtual false final false
 ::UnityEngine::RenderTexture FilterTexture(::UnityEngine::RenderTexture src) ;

/// @brief Method CreateRenderTexturesIfNeeded addr 0x267a9ec size 0x28c virtual false final false
 void CreateRenderTexturesIfNeeded(int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SimpleTemporalFiltering);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTemporalFiltering, "", "SimpleTemporalFiltering");
