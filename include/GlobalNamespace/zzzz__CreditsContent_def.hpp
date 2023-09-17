#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CreditsContent;
}
// Type: ::CreditsContent
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5572))
// CS Name: CreditsContent
class CORDL_TYPE CreditsContent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~CreditsContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: " const&", def_value: None }]
constexpr CreditsContent(CreditsContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CreditsContent", modifiers: "&&", def_value: None }]
constexpr CreditsContent(CreditsContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CreditsContent(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CreditsContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CreditsContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CreditsContent& operator=(CreditsContent&& o) noexcept = default;
  constexpr CreditsContent& operator=(CreditsContent const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__normalTextPrefab, put=__set__normalTextPrefab))  _normalTextPrefab;

constexpr void __set__normalTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__normalTextPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__normalLocalizedTextPrefab, put=__set__normalLocalizedTextPrefab))  _normalLocalizedTextPrefab;

constexpr void __set__normalLocalizedTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__normalLocalizedTextPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__titleTextPrefab, put=__set__titleTextPrefab))  _titleTextPrefab;

constexpr void __set__titleTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__titleTextPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__titleLocalizedTextPrefab, put=__set__titleLocalizedTextPrefab))  _titleLocalizedTextPrefab;

constexpr void __set__titleLocalizedTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__titleLocalizedTextPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__headerTextPrefab, put=__set__headerTextPrefab))  _headerTextPrefab;

constexpr void __set__headerTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__headerTextPrefab() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__headerLocalizedTextPrefab, put=__set__headerLocalizedTextPrefab))  _headerLocalizedTextPrefab;

constexpr void __set__headerLocalizedTextPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__headerLocalizedTextPrefab() const;

 int32_t __declspec(property(get=__get__columnCount, put=__set__columnCount))  _columnCount;

constexpr void __set__columnCount(int32_t value) ;

constexpr int32_t __get__columnCount() const;

 float_t __declspec(property(get=__get__spaceHeight, put=__set__spaceHeight))  _spaceHeight;

constexpr void __set__spaceHeight(float_t value) ;

constexpr float_t __get__spaceHeight() const;

 float_t __declspec(property(get=__get__titleHeight, put=__set__titleHeight))  _titleHeight;

constexpr void __set__titleHeight(float_t value) ;

constexpr float_t __get__titleHeight() const;

 ::UnityEngine::Transform __declspec(property(get=__get__contentRoot, put=__set__contentRoot))  _contentRoot;

constexpr void __set__contentRoot(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__contentRoot() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__rootRectTransform, put=__set__rootRectTransform))  _rootRectTransform;

constexpr void __set__rootRectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__rootRectTransform() const;

 ::UnityEngine::TextAsset __declspec(property(get=__get__creditsContentTextAsset, put=__set__creditsContentTextAsset))  _creditsContentTextAsset;

constexpr void __set__creditsContentTextAsset(::UnityEngine::TextAsset value) ;

constexpr ::UnityEngine::TextAsset __get__creditsContentTextAsset() const;


// Properties

 ::UnityEngine::GameObject __declspec(property(get=get_normalTextPrefab))  normalTextPrefab;

 ::UnityEngine::GameObject __declspec(property(get=get_normalLocalizedTextPrefab))  normalLocalizedTextPrefab;

 ::UnityEngine::GameObject __declspec(property(get=get_titleTextPrefab))  titleTextPrefab;

 ::UnityEngine::GameObject __declspec(property(get=get_titleLocalizedTextPrefab))  titleLocalizedTextPrefab;

 ::UnityEngine::GameObject __declspec(property(get=get_headerTextPrefab))  headerTextPrefab;

 ::UnityEngine::GameObject __declspec(property(get=get_headerLocalizedTextPrefab))  headerLocalizedTextPrefab;

 int32_t __declspec(property(get=get_columnCount))  columnCount;

 float_t __declspec(property(get=get_spaceHeight))  spaceHeight;

 float_t __declspec(property(get=get_titleHeight))  titleHeight;

 ::UnityEngine::Transform __declspec(property(get=get_contentRoot))  contentRoot;

 ::UnityEngine::RectTransform __declspec(property(get=get_rootRectTransform))  rootRectTransform;

 ::UnityEngine::TextAsset __declspec(property(get=get_creditsContentTextAsset))  creditsContentTextAsset;


// Methods

/// @brief Method get_normalTextPrefab addr 0x212eb94 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_normalTextPrefab() ;

/// @brief Method get_normalLocalizedTextPrefab addr 0x212eb9c size 0x8 virtual false final false
 ::UnityEngine::GameObject get_normalLocalizedTextPrefab() ;

/// @brief Method get_titleTextPrefab addr 0x212eba4 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_titleTextPrefab() ;

/// @brief Method get_titleLocalizedTextPrefab addr 0x212ebac size 0x8 virtual false final false
 ::UnityEngine::GameObject get_titleLocalizedTextPrefab() ;

/// @brief Method get_headerTextPrefab addr 0x212ebb4 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_headerTextPrefab() ;

/// @brief Method get_headerLocalizedTextPrefab addr 0x212ebbc size 0x8 virtual false final false
 ::UnityEngine::GameObject get_headerLocalizedTextPrefab() ;

/// @brief Method get_columnCount addr 0x212ebc4 size 0x8 virtual false final false
 int32_t get_columnCount() ;

/// @brief Method get_spaceHeight addr 0x212ebcc size 0x8 virtual false final false
 float_t get_spaceHeight() ;

/// @brief Method get_titleHeight addr 0x212ebd4 size 0x8 virtual false final false
 float_t get_titleHeight() ;

/// @brief Method get_contentRoot addr 0x212ebdc size 0x8 virtual false final false
 ::UnityEngine::Transform get_contentRoot() ;

/// @brief Method get_rootRectTransform addr 0x212ebe4 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_rootRectTransform() ;

/// @brief Method get_creditsContentTextAsset addr 0x212ebec size 0x8 virtual false final false
 ::UnityEngine::TextAsset get_creditsContentTextAsset() ;

// Ctor Parameters []
explicit CreditsContent() ;

/// @brief Method .ctor addr 0x212ebf4 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CreditsContent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CreditsContent, "", "CreditsContent");
