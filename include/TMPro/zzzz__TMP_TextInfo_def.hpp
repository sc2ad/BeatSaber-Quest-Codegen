#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace TMPro {
struct TMP_WordInfo;
}
namespace TMPro {
struct TMP_MeshInfo;
}
namespace TMPro {
struct MaterialReference;
}
namespace UnityEngine {
struct Vector2;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
namespace TMPro {
struct TMP_LineInfo;
}
namespace TMPro {
struct TMP_PageInfo;
}
namespace TMPro {
class TMP_Text;
}
namespace TMPro {
struct TMP_LinkInfo;
}
// Forward declare root types
namespace TMPro {
class TMP_TextInfo;
}
// Type: TMPro::TMP_TextInfo
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12392))
// CS Name: TMPro.TMP_TextInfo
class CORDL_TYPE TMP_TextInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~TMP_TextInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: " const&", def_value: None }]
constexpr TMP_TextInfo(TMP_TextInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextInfo", modifiers: "&&", def_value: None }]
constexpr TMP_TextInfo(TMP_TextInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_TextInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_TextInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_TextInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_TextInfo& operator=(TMP_TextInfo&& o) noexcept = default;
  constexpr TMP_TextInfo& operator=(TMP_TextInfo const& o) noexcept = default;
                


// Fields

static UnityEngine::Vector2 __declspec(property(get=__get_k_InfinityVectorPositive, put=__set_k_InfinityVectorPositive))  k_InfinityVectorPositive;

static void __set_k_InfinityVectorPositive(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_InfinityVectorPositive() ;

static UnityEngine::Vector2 __declspec(property(get=__get_k_InfinityVectorNegative, put=__set_k_InfinityVectorNegative))  k_InfinityVectorNegative;

static void __set_k_InfinityVectorNegative(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_InfinityVectorNegative() ;

 TMPro::TMP_Text __declspec(property(get=__get_textComponent, put=__set_textComponent))  textComponent;

constexpr void __set_textComponent(TMPro::TMP_Text value) ;

constexpr TMPro::TMP_Text __get_textComponent() const;

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

 ::ArrayW<TMPro::TMP_CharacterInfo> __declspec(property(get=__get_characterInfo, put=__set_characterInfo))  characterInfo;

constexpr void __set_characterInfo(::ArrayW<TMPro::TMP_CharacterInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_CharacterInfo> __get_characterInfo() const;

 ::ArrayW<TMPro::TMP_WordInfo> __declspec(property(get=__get_wordInfo, put=__set_wordInfo))  wordInfo;

constexpr void __set_wordInfo(::ArrayW<TMPro::TMP_WordInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_WordInfo> __get_wordInfo() const;

 ::ArrayW<TMPro::TMP_LinkInfo> __declspec(property(get=__get_linkInfo, put=__set_linkInfo))  linkInfo;

constexpr void __set_linkInfo(::ArrayW<TMPro::TMP_LinkInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_LinkInfo> __get_linkInfo() const;

 ::ArrayW<TMPro::TMP_LineInfo> __declspec(property(get=__get_lineInfo, put=__set_lineInfo))  lineInfo;

constexpr void __set_lineInfo(::ArrayW<TMPro::TMP_LineInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_LineInfo> __get_lineInfo() const;

 ::ArrayW<TMPro::TMP_PageInfo> __declspec(property(get=__get_pageInfo, put=__set_pageInfo))  pageInfo;

constexpr void __set_pageInfo(::ArrayW<TMPro::TMP_PageInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_PageInfo> __get_pageInfo() const;

 ::ArrayW<TMPro::TMP_MeshInfo> __declspec(property(get=__get_meshInfo, put=__set_meshInfo))  meshInfo;

constexpr void __set_meshInfo(::ArrayW<TMPro::TMP_MeshInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_MeshInfo> __get_meshInfo() const;

 ::ArrayW<TMPro::TMP_MeshInfo> __declspec(property(get=__get_m_CachedMeshInfo, put=__set_m_CachedMeshInfo))  m_CachedMeshInfo;

constexpr void __set_m_CachedMeshInfo(::ArrayW<TMPro::TMP_MeshInfo> value) ;

constexpr ::ArrayW<TMPro::TMP_MeshInfo> __get_m_CachedMeshInfo() const;


// Methods

static TMPro::TMP_TextInfo New_ctor() ;

/// @brief Method .ctor addr 0x2ab04cc size 0x128 virtual false final false
 void _ctor() ;

static TMPro::TMP_TextInfo New_ctor(int32_t characterCount) ;

/// @brief Method .ctor addr 0x2ab05f4 size 0x12c virtual false final false
 void _ctor(int32_t characterCount) ;

static TMPro::TMP_TextInfo New_ctor(TMPro::TMP_Text textComponent) ;

/// @brief Method .ctor addr 0x2ab0720 size 0x16c virtual false final false
 void _ctor(TMPro::TMP_Text textComponent) ;

/// @brief Method Clear addr 0x2ab088c size 0x5c virtual false final false
 void Clear() ;

/// @brief Method ClearAllData addr 0x2ab08e8 size 0x12c virtual false final false
 void ClearAllData() ;

/// @brief Method ClearMeshInfo addr 0x2ab0a14 size 0x70 virtual false final false
 void ClearMeshInfo(bool updateMesh) ;

/// @brief Method ClearAllMeshInfo addr 0x2ab0a84 size 0x64 virtual false final false
 void ClearAllMeshInfo() ;

/// @brief Method ResetVertexLayout addr 0x2ab0ae8 size 0x74 virtual false final false
 void ResetVertexLayout(bool isVolumetric) ;

/// @brief Method ClearUnusedVertices addr 0x2ab0b5c size 0x64 virtual false final false
 void ClearUnusedVertices(::ArrayW<TMPro::MaterialReference> materials) ;

/// @brief Method ClearLineInfo addr 0x2ab0bc0 size 0x180 virtual false final false
 void ClearLineInfo() ;

/// @brief Method ClearPageInfo addr 0x2ab0d40 size 0x98 virtual false final false
 void ClearPageInfo() ;

/// @brief Method CopyMeshInfoVertexData addr 0x2ab0dd8 size 0x3c8 virtual false final false
 ::ArrayW<TMPro::TMP_MeshInfo> CopyMeshInfoVertexData() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Resize(ByRef<::ArrayW<T>> array, int32_t size) ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Resize(ByRef<::ArrayW<T>> array, int32_t size, bool isBlockAllocated) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_TextInfo);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextInfo, "TMPro", "TMP_TextInfo");
