#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
struct PageInfo;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
namespace UnityEngine::TextCore::Text {
struct WordInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct LinkInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
// Type: UnityEngine.TextCore.Text::TextInfo
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13526))
// CS Name: UnityEngine.TextCore.Text.TextInfo
class CORDL_TYPE TextInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~TextInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: " const&", def_value: None }]
constexpr TextInfo(TextInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInfo", modifiers: "&&", def_value: None }]
constexpr TextInfo(TextInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInfo& operator=(TextInfo&& o) noexcept = default;
  constexpr TextInfo& operator=(TextInfo const& o) noexcept = default;
                


// Fields

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_InfinityVectorPositive, put=__set_s_InfinityVectorPositive))  s_InfinityVectorPositive;

static void __set_s_InfinityVectorPositive(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_InfinityVectorPositive() ;

static ::UnityEngine::Vector2 __declspec(property(get=__get_s_InfinityVectorNegative, put=__set_s_InfinityVectorNegative))  s_InfinityVectorNegative;

static void __set_s_InfinityVectorNegative(::UnityEngine::Vector2 value) ;

static ::UnityEngine::Vector2 __get_s_InfinityVectorNegative() ;

 int32_t __declspec(property(get=__get_characterCount, put=__set_characterCount))  characterCount;

constexpr void __set_characterCount(int32_t value) ;

constexpr int32_t __get_characterCount() const;

 int32_t __declspec(property(get=__get_spriteCount, put=__set_spriteCount))  spriteCount;

constexpr void __set_spriteCount(int32_t value) ;

constexpr int32_t __get_spriteCount() const;

 int32_t __declspec(property(get=__get_spaceCount, put=__set_spaceCount))  spaceCount;

constexpr void __set_spaceCount(int32_t value) ;

constexpr int32_t __get_spaceCount() const;

 int32_t __declspec(property(get=__get_wordCount, put=__set_wordCount))  wordCount;

constexpr void __set_wordCount(int32_t value) ;

constexpr int32_t __get_wordCount() const;

 int32_t __declspec(property(get=__get_linkCount, put=__set_linkCount))  linkCount;

constexpr void __set_linkCount(int32_t value) ;

constexpr int32_t __get_linkCount() const;

 int32_t __declspec(property(get=__get_lineCount, put=__set_lineCount))  lineCount;

constexpr void __set_lineCount(int32_t value) ;

constexpr int32_t __get_lineCount() const;

 int32_t __declspec(property(get=__get_pageCount, put=__set_pageCount))  pageCount;

constexpr void __set_pageCount(int32_t value) ;

constexpr int32_t __get_pageCount() const;

 int32_t __declspec(property(get=__get_materialCount, put=__set_materialCount))  materialCount;

constexpr void __set_materialCount(int32_t value) ;

constexpr int32_t __get_materialCount() const;

 ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> __declspec(property(get=__get_textElementInfo, put=__set_textElementInfo))  textElementInfo;

constexpr void __set_textElementInfo(::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::TextElementInfo> __get_textElementInfo() const;

 ::ArrayW<::UnityEngine::TextCore::Text::WordInfo> __declspec(property(get=__get_wordInfo, put=__set_wordInfo))  wordInfo;

constexpr void __set_wordInfo(::ArrayW<::UnityEngine::TextCore::Text::WordInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::WordInfo> __get_wordInfo() const;

 ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo> __declspec(property(get=__get_linkInfo, put=__set_linkInfo))  linkInfo;

constexpr void __set_linkInfo(::ArrayW<::UnityEngine::TextCore::Text::LinkInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::LinkInfo> __get_linkInfo() const;

 ::ArrayW<::UnityEngine::TextCore::Text::LineInfo> __declspec(property(get=__get_lineInfo, put=__set_lineInfo))  lineInfo;

constexpr void __set_lineInfo(::ArrayW<::UnityEngine::TextCore::Text::LineInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::LineInfo> __get_lineInfo() const;

 ::ArrayW<::UnityEngine::TextCore::Text::PageInfo> __declspec(property(get=__get_pageInfo, put=__set_pageInfo))  pageInfo;

constexpr void __set_pageInfo(::ArrayW<::UnityEngine::TextCore::Text::PageInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::PageInfo> __get_pageInfo() const;

 ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> __declspec(property(get=__get_meshInfo, put=__set_meshInfo))  meshInfo;

constexpr void __set_meshInfo(::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> value) ;

constexpr ::ArrayW<::UnityEngine::TextCore::Text::MeshInfo> __get_meshInfo() const;

 bool __declspec(property(get=__get_isDirty, put=__set_isDirty))  isDirty;

constexpr void __set_isDirty(bool value) ;

constexpr bool __get_isDirty() const;


// Methods

// Ctor Parameters []
explicit TextInfo() ;

/// @brief Method .ctor addr 0x2bcfde8 size 0x134 virtual false final false
 void _ctor() ;

/// @brief Method Clear addr 0x2bcff1c size 0x5c virtual false final false
 void Clear() ;

/// @brief Method ClearMeshInfo addr 0x2bcff78 size 0x80 virtual false final false
 void ClearMeshInfo(bool updateMesh) ;

/// @brief Method ClearLineInfo addr 0x2bd0024 size 0x16c virtual false final false
 void ClearLineInfo() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Resize(ByRef<::ArrayW<T>> array, int32_t size) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Resize(ByRef<::ArrayW<T>> array, int32_t size, bool isBlockAllocated) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextInfo, "UnityEngine.TextCore.Text", "TextInfo");
