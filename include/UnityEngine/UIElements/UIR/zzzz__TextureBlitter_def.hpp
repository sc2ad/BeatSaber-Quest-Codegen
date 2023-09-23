#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct RectInt;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo;
}
// Type: ::BlitInfo
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7486))
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter::BlitInfo
struct CORDL_TYPE UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "src", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "srcRect", ty: "UnityEngine::RectInt", modifiers: "", def_value: None }, CppParam { name: "dstPos", ty: "UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "border", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tint", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo(UnityEngine::Texture src, UnityEngine::RectInt srcRect, UnityEngine::Vector2Int dstPos, int32_t border, UnityEngine::Color tint) noexcept;


                    constexpr UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo(UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo const&) = default;
                    constexpr UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo(UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo&&) = default;
                    constexpr UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo& operator=(UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo& operator=(UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Texture __declspec(property(get=__get_src, put=__set_src))  src;

constexpr void __set_src(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_src() const;

 UnityEngine::RectInt __declspec(property(get=__get_srcRect, put=__set_srcRect))  srcRect;

constexpr void __set_srcRect(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_srcRect() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_dstPos, put=__set_dstPos))  dstPos;

constexpr void __set_dstPos(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_dstPos() const;

 int32_t __declspec(property(get=__get_border, put=__set_border))  border;

constexpr void __set_border(int32_t value) ;

constexpr int32_t __get_border() const;

 UnityEngine::Color __declspec(property(get=__get_tint, put=__set_tint))  tint;

constexpr void __set_tint(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_tint() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::TextureBlitter
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7487))
// CS Name: UnityEngine.UIElements.UIR.TextureBlitter
class CORDL_TYPE TextureBlitter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BlitInfo = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~TextureBlitter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: " const&", def_value: None }]
constexpr TextureBlitter(TextureBlitter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextureBlitter", modifiers: "&&", def_value: None }]
constexpr TextureBlitter(TextureBlitter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextureBlitter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextureBlitter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextureBlitter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextureBlitter& operator=(TextureBlitter&& o) noexcept = default;
  constexpr TextureBlitter& operator=(TextureBlitter const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_k_TextureIds, put=__set_k_TextureIds))  k_TextureIds;

static void __set_k_TextureIds(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_TextureIds() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_CommitSampler, put=__set_s_CommitSampler))  s_CommitSampler;

static void __set_s_CommitSampler(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_CommitSampler() ;

 ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> __declspec(property(get=__get_m_SingleBlit, put=__set_m_SingleBlit))  m_SingleBlit;

constexpr void __set_m_SingleBlit(::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> __get_m_SingleBlit() const;

 UnityEngine::Material __declspec(property(get=__get_m_BlitMaterial, put=__set_m_BlitMaterial))  m_BlitMaterial;

constexpr void __set_m_BlitMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_BlitMaterial() const;

 UnityEngine::MaterialPropertyBlock __declspec(property(get=__get_m_Properties, put=__set_m_Properties))  m_Properties;

constexpr void __set_m_Properties(UnityEngine::MaterialPropertyBlock value) ;

constexpr UnityEngine::MaterialPropertyBlock __get_m_Properties() const;

 UnityEngine::RectInt __declspec(property(get=__get_m_Viewport, put=__set_m_Viewport))  m_Viewport;

constexpr void __set_m_Viewport(UnityEngine::RectInt value) ;

constexpr UnityEngine::RectInt __get_m_Viewport() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_m_PrevRT, put=__set_m_PrevRT))  m_PrevRT;

constexpr void __set_m_PrevRT(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_m_PrevRT() const;

 System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> __declspec(property(get=__get_m_PendingBlits, put=__set_m_PendingBlits))  m_PendingBlits;

constexpr void __set_m_PendingBlits(System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> __get_m_PendingBlits() const;

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method get_disposed addr 0x2d156e0 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2d156e8 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2d0708c size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d156f4 size 0x7c virtual true final false
 void Dispose(bool disposing) ;

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit TextureBlitter(int32_t capacity) ;

/// @brief Method .ctor addr 0x2d06d84 size 0xb4 virtual false final false
 void _ctor(int32_t capacity) ;

/// @brief Method QueueBlit addr 0x2d07478 size 0x1a4 virtual false final false
 void QueueBlit(UnityEngine::Texture src, UnityEngine::RectInt srcRect, UnityEngine::Vector2Int dstPos, bool addBorder, UnityEngine::Color tint) ;

/// @brief Method BlitOneNow addr 0x2d07cfc size 0xe4 virtual false final false
 void BlitOneNow(UnityEngine::RenderTexture dst, UnityEngine::Texture src, UnityEngine::RectInt srcRect, UnityEngine::Vector2Int dstPos, bool addBorder, UnityEngine::Color tint) ;

/// @brief Method Commit addr 0x2d07ad8 size 0xec virtual false final false
 void Commit(UnityEngine::RenderTexture dst) ;

/// @brief Method BeginBlit addr 0x2d1589c size 0x1fc virtual false final false
 void BeginBlit(UnityEngine::RenderTexture dst) ;

/// @brief Method DoBlit addr 0x2d15a98 size 0x51c virtual false final false
 void DoBlit(System::Collections::Generic::IList_1<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo> blitInfos, int32_t startIndex) ;

/// @brief Method EndBlit addr 0x2d15fb4 size 0xe0 virtual false final false
 void EndBlit() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::TextureBlitter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::TextureBlitter, "UnityEngine.UIElements.UIR", "TextureBlitter");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__TextureBlitter__BlitInfo, "UnityEngine.UIElements.UIR", "TextureBlitter/BlitInfo");
