#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__AtlasBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine::UIElements {
class DynamicAtlasPage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class DynamicAtlasCustomFilter;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
struct ____UnityEngine__UIElements__UIR__Allocator2D__Alloc2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlas;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__DynamicAtlas__TextureInfo;
}
// Type: ::TextureInfo
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7499)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 3840 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6845))
// CS Name: UnityEngine.UIElements.DynamicAtlas::TextureInfo
class CORDL_TYPE ____UnityEngine__UIElements__DynamicAtlas__TextureInfo : public ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~____UnityEngine__UIElements__DynamicAtlas__TextureInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__DynamicAtlas__TextureInfo", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo(____UnityEngine__UIElements__DynamicAtlas__TextureInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__DynamicAtlas__TextureInfo", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo(____UnityEngine__UIElements__DynamicAtlas__TextureInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__DynamicAtlas__TextureInfo(void* ptr) noexcept : ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo>(ptr) {
}


  constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo& operator=(____UnityEngine__UIElements__DynamicAtlas__TextureInfo&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__DynamicAtlas__TextureInfo& operator=(____UnityEngine__UIElements__DynamicAtlas__TextureInfo const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::DynamicAtlasPage __declspec(property(get=__get_page, put=__set_page))  page;

constexpr void __set_page(::UnityEngine::UIElements::DynamicAtlasPage value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasPage __get_page() const;

 int32_t __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(int32_t value) ;

constexpr int32_t __get_counter() const;

 ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Allocator2D__Alloc2D __declspec(property(get=__get_alloc, put=__set_alloc))  alloc;

constexpr void __set_alloc(::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Allocator2D__Alloc2D value) ;

constexpr ::UnityEngine::UIElements::UIR::____UnityEngine__UIElements__UIR__Allocator2D__Alloc2D __get_alloc() const;

 ::UnityEngine::RectInt __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(::UnityEngine::RectInt value) ;

constexpr ::UnityEngine::RectInt __get_rect() const;

static ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> __declspec(property(get=__get_pool, put=__set_pool))  pool;

static void __set_pool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> value) ;

static ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> __get_pool() ;


// Methods

/// @brief Method Create addr 0x2c3bfd0 size 0x58 virtual false final false
static ::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo Create() ;

/// @brief Method Reset addr 0x2c3c070 size 0x30 virtual false final false
static void Reset(::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo info) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__DynamicAtlas__TextureInfo() ;

/// @brief Method .ctor addr 0x2c3c028 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::DynamicAtlas
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6842))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6846))
// CS Name: UnityEngine.UIElements.DynamicAtlas
class CORDL_TYPE DynamicAtlas : public ::UnityEngine::UIElements::AtlasBase {
public:
// Declarations
using TextureInfo = ::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~DynamicAtlas() = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlas", modifiers: " const&", def_value: None }]
constexpr DynamicAtlas(DynamicAtlas const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DynamicAtlas", modifiers: "&&", def_value: None }]
constexpr DynamicAtlas(DynamicAtlas&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DynamicAtlas(void* ptr) noexcept : ::UnityEngine::UIElements::AtlasBase(ptr) {
}


  constexpr DynamicAtlas& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DynamicAtlas& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DynamicAtlas& operator=(DynamicAtlas&& o) noexcept = default;
  constexpr DynamicAtlas& operator=(DynamicAtlas const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> __declspec(property(get=__get_m_Database, put=__set_m_Database))  m_Database;

constexpr void __set_m_Database(::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture,::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo> __get_m_Database() const;

 ::UnityEngine::UIElements::DynamicAtlasPage __declspec(property(get=__get_m_PointPage, put=__set_m_PointPage))  m_PointPage;

constexpr void __set_m_PointPage(::UnityEngine::UIElements::DynamicAtlasPage value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasPage __get_m_PointPage() const;

 ::UnityEngine::UIElements::DynamicAtlasPage __declspec(property(get=__get_m_BilinearPage, put=__set_m_BilinearPage))  m_BilinearPage;

constexpr void __set_m_BilinearPage(::UnityEngine::UIElements::DynamicAtlasPage value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasPage __get_m_BilinearPage() const;

 ::UnityEngine::ColorSpace __declspec(property(get=__get_m_ColorSpace, put=__set_m_ColorSpace))  m_ColorSpace;

constexpr void __set_m_ColorSpace(::UnityEngine::ColorSpace value) ;

constexpr ::UnityEngine::ColorSpace __get_m_ColorSpace() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel> __declspec(property(get=__get_m_Panels, put=__set_m_Panels))  m_Panels;

constexpr void __set_m_Panels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IPanel> __get_m_Panels() const;

 int32_t __declspec(property(get=__get_m_MinAtlasSize, put=__set_m_MinAtlasSize))  m_MinAtlasSize;

constexpr void __set_m_MinAtlasSize(int32_t value) ;

constexpr int32_t __get_m_MinAtlasSize() const;

 int32_t __declspec(property(get=__get_m_MaxAtlasSize, put=__set_m_MaxAtlasSize))  m_MaxAtlasSize;

constexpr void __set_m_MaxAtlasSize(int32_t value) ;

constexpr int32_t __get_m_MaxAtlasSize() const;

 int32_t __declspec(property(get=__get_m_MaxSubTextureSize, put=__set_m_MaxSubTextureSize))  m_MaxSubTextureSize;

constexpr void __set_m_MaxSubTextureSize(int32_t value) ;

constexpr int32_t __get_m_MaxSubTextureSize() const;

 ::UnityEngine::UIElements::DynamicAtlasFilters __declspec(property(get=__get_m_ActiveFilters, put=__set_m_ActiveFilters))  m_ActiveFilters;

constexpr void __set_m_ActiveFilters(::UnityEngine::UIElements::DynamicAtlasFilters value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasFilters __get_m_ActiveFilters() const;

 ::UnityEngine::UIElements::DynamicAtlasCustomFilter __declspec(property(get=__get_m_CustomFilter, put=__set_m_CustomFilter))  m_CustomFilter;

constexpr void __set_m_CustomFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter value) ;

constexpr ::UnityEngine::UIElements::DynamicAtlasCustomFilter __get_m_CustomFilter() const;


// Properties

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 int32_t __declspec(property(put=set_minAtlasSize))  minAtlasSize;

 int32_t __declspec(property(put=set_maxAtlasSize))  maxAtlasSize;

static ::UnityEngine::UIElements::DynamicAtlasFilters __declspec(property(get=get_defaultFilters))  defaultFilters;

 ::UnityEngine::UIElements::DynamicAtlasFilters __declspec(property(put=set_activeFilters))  activeFilters;

 int32_t __declspec(property(get=get_maxSubTextureSize, put=set_maxSubTextureSize))  maxSubTextureSize;

 ::UnityEngine::UIElements::DynamicAtlasCustomFilter __declspec(property(put=set_customFilter))  customFilter;


// Methods

/// @brief Method get_isInitialized addr 0x2c3b424 size 0x20 virtual false final false
 bool get_isInitialized() ;

/// @brief Method OnAssignedToPanel addr 0x2c3b444 size 0xd0 virtual true final false
 void OnAssignedToPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method OnRemovedFromPanel addr 0x2c3b514 size 0x98 virtual true final false
 void OnRemovedFromPanel(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method Reset addr 0x2c3b624 size 0xac virtual true final false
 void Reset() ;

/// @brief Method InitPages addr 0x2c3b6d0 size 0x108 virtual false final false
 void InitPages() ;

/// @brief Method DestroyPages addr 0x2c3b5ac size 0x78 virtual false final false
 void DestroyPages() ;

/// @brief Method TryGetAtlas addr 0x2c3b7d8 size 0x35c virtual true final false
 bool TryGetAtlas(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::Texture2D src, ByRef<::UnityEngine::UIElements::TextureId> atlas, ByRef<::UnityEngine::RectInt> atlasRect) ;

/// @brief Method ReturnAtlas addr 0x2c3bb34 size 0x13c virtual true final false
 void ReturnAtlas(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::Texture2D src, ::UnityEngine::UIElements::TextureId atlas) ;

/// @brief Method OnUpdateDynamicTextures addr 0x2c3bc70 size 0x68 virtual true final false
 void OnUpdateDynamicTextures(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method IsTextureFormatSupported addr 0x2c3bcd8 size 0x34 virtual false final false
static bool IsTextureFormatSupported(::UnityEngine::TextureFormat format) ;

/// @brief Method IsTextureValid addr 0x2c3bd0c size 0x120 virtual true final false
 bool IsTextureValid(::UnityEngine::Texture2D texture, ::UnityEngine::FilterMode atlasFilterMode) ;

/// @brief Method set_minAtlasSize addr 0x2c3be34 size 0x20 virtual false final false
 void set_minAtlasSize(int32_t value) ;

/// @brief Method set_maxAtlasSize addr 0x2c3be54 size 0x20 virtual false final false
 void set_maxAtlasSize(int32_t value) ;

/// @brief Method get_defaultFilters addr 0x2c3be74 size 0x8 virtual false final false
static ::UnityEngine::UIElements::DynamicAtlasFilters get_defaultFilters() ;

/// @brief Method set_activeFilters addr 0x2c3be7c size 0x20 virtual false final false
 void set_activeFilters(::UnityEngine::UIElements::DynamicAtlasFilters value) ;

/// @brief Method get_maxSubTextureSize addr 0x2c3be2c size 0x8 virtual false final false
 int32_t get_maxSubTextureSize() ;

/// @brief Method set_maxSubTextureSize addr 0x2c3be9c size 0x20 virtual false final false
 void set_maxSubTextureSize(int32_t value) ;

/// @brief Method set_customFilter addr 0x2c3bebc size 0x48 virtual false final false
 void set_customFilter(::UnityEngine::UIElements::DynamicAtlasCustomFilter value) ;

// Ctor Parameters []
explicit DynamicAtlas() ;

/// @brief Method .ctor addr 0x2c3bf04 size 0xcc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlas);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlas, "UnityEngine.UIElements", "DynamicAtlas");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__DynamicAtlas__TextureInfo, "UnityEngine.UIElements", "DynamicAtlas/TextureInfo");
