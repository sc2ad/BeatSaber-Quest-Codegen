#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements {
struct GradientSettings;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GradientSettingsAtlas;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture;
}
// Type: ::RawTexture
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7478))
// CS Name: UnityEngine.UIElements.UIR.GradientSettingsAtlas::RawTexture
struct CORDL_TYPE UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture(::ArrayW<UnityEngine::Color32> rgba, int32_t width, int32_t height) noexcept;


                    constexpr UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture(UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture const&) = default;
                    constexpr UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture(UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture&&) = default;
                    constexpr UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture& operator=(UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture& operator=(UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=__get_rgba, put=__set_rgba))  rgba;

constexpr void __set_rgba(::ArrayW<UnityEngine::Color32> value) ;

constexpr ::ArrayW<UnityEngine::Color32> __get_rgba() const;

 int32_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(int32_t value) ;

constexpr int32_t __get_width() const;

 int32_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(int32_t value) ;

constexpr int32_t __get_height() const;


// Methods

/// @brief Method WriteRawInt2Packed addr 0x2d14d7c size 0x88 virtual false final false
 void WriteRawInt2Packed(int32_t v0, int32_t v1, int32_t destX, int32_t destY) ;

/// @brief Method WriteRawFloat4Packed addr 0x2d14cd4 size 0xa8 virtual false final false
 void WriteRawFloat4Packed(float_t f0, float_t f1, float_t f2, float_t f3, int32_t destX, int32_t destY) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::GradientSettingsAtlas
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7479))
// CS Name: UnityEngine.UIElements.UIR.GradientSettingsAtlas
class CORDL_TYPE GradientSettingsAtlas : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RawTexture = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GradientSettingsAtlas() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientSettingsAtlas", modifiers: " const&", def_value: None }]
constexpr GradientSettingsAtlas(GradientSettingsAtlas const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientSettingsAtlas", modifiers: "&&", def_value: None }]
constexpr GradientSettingsAtlas(GradientSettingsAtlas&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientSettingsAtlas(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GradientSettingsAtlas& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientSettingsAtlas& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientSettingsAtlas& operator=(GradientSettingsAtlas&& o) noexcept = default;
  constexpr GradientSettingsAtlas& operator=(GradientSettingsAtlas const& o) noexcept = default;
                


// Fields

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerWrite, put=__set_s_MarkerWrite))  s_MarkerWrite;

static void __set_s_MarkerWrite(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerWrite() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerCommit, put=__set_s_MarkerCommit))  s_MarkerCommit;

static void __set_s_MarkerCommit(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerCommit() ;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;

 int32_t __declspec(property(get=__get_m_ElemWidth, put=__set_m_ElemWidth))  m_ElemWidth;

constexpr void __set_m_ElemWidth(int32_t value) ;

constexpr int32_t __get_m_ElemWidth() const;

 UnityEngine::UIElements::UIR::BestFitAllocator __declspec(property(get=__get_m_Allocator, put=__set_m_Allocator))  m_Allocator;

constexpr void __set_m_Allocator(UnityEngine::UIElements::UIR::BestFitAllocator value) ;

constexpr UnityEngine::UIElements::UIR::BestFitAllocator __get_m_Allocator() const;

 UnityEngine::Texture2D __declspec(property(get=__get_m_Atlas, put=__set_m_Atlas))  m_Atlas;

constexpr void __set_m_Atlas(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_m_Atlas() const;

 UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture __declspec(property(get=__get_m_RawAtlas, put=__set_m_RawAtlas))  m_RawAtlas;

constexpr void __set_m_RawAtlas(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture value) ;

constexpr UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture __get_m_RawAtlas() const;

static int32_t __declspec(property(get=__get_s_TextureCounter, put=__set_s_TextureCounter))  s_TextureCounter;

static void __set_s_TextureCounter(int32_t value) ;

static int32_t __get_s_TextureCounter() ;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;

 bool __declspec(property(get=__get__MustCommit_k__BackingField, put=__set__MustCommit_k__BackingField))  _MustCommit_k__BackingField;

constexpr void __set__MustCommit_k__BackingField(bool value) ;

constexpr bool __get__MustCommit_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_length))  length;

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;

 UnityEngine::Texture2D __declspec(property(get=get_atlas))  atlas;

 bool __declspec(property(get=get_MustCommit, put=set_MustCommit))  MustCommit;


// Methods

/// @brief Method get_length addr 0x2d14544 size 0x8 virtual false final false
 int32_t get_length() ;

/// @brief Method get_disposed addr 0x2d1454c size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d14554 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d14560 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d145cc size 0x78 virtual true final false
 void Dispose(bool disposing) ;

static UnityEngine::UIElements::UIR::GradientSettingsAtlas New_ctor(int32_t length) ;

/// @brief Method .ctor addr 0x2d14644 size 0x30 virtual false final false
 void _ctor(int32_t length) ;

/// @brief Method Reset addr 0x2d14674 size 0xcc virtual false final false
 void Reset() ;

/// @brief Method get_atlas addr 0x2d14740 size 0x8 virtual false final false
 UnityEngine::Texture2D get_atlas() ;

/// @brief Method Add addr 0x2d14748 size 0xec virtual false final false
 UnityEngine::UIElements::UIR::Alloc Add(int32_t count) ;

/// @brief Method Write addr 0x2d14834 size 0x4a0 virtual false final false
 void Write(UnityEngine::UIElements::UIR::Alloc alloc, ::ArrayW<UnityEngine::UIElements::GradientSettings> settings, UnityEngine::UIElements::UIR::GradientRemap remap) ;

/// @brief Method get_MustCommit addr 0x2d14e04 size 0x8 virtual false final false
 bool get_MustCommit() ;

/// @brief Method set_MustCommit addr 0x2d14e0c size 0xc virtual false final false
 void set_MustCommit(bool value) ;

/// @brief Method Commit addr 0x2d14e18 size 0x64 virtual false final false
 void Commit() ;

/// @brief Method PrepareAtlas addr 0x2d14e7c size 0x168 virtual false final false
 void PrepareAtlas() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::GradientSettingsAtlas);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::GradientSettingsAtlas, "UnityEngine.UIElements.UIR", "GradientSettingsAtlas");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__GradientSettingsAtlas__RawTexture, "UnityEngine.UIElements.UIR", "GradientSettingsAtlas/RawTexture");
