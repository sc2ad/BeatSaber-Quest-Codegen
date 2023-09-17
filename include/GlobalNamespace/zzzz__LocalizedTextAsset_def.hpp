#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Polyglot {
struct Language;
}
namespace UnityEngine {
class TextAsset;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedTextAsset;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalizedTextAsset__TextInfo;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalizedTextAsset____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0;
}
// Type: ::TextInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5960))
// CS Name: LocalizedTextAsset::TextInfo
class CORDL_TYPE ____GlobalNamespace__LocalizedTextAsset__TextInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__LocalizedTextAsset__TextInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset__TextInfo", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo(____GlobalNamespace__LocalizedTextAsset__TextInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset__TextInfo", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo(____GlobalNamespace__LocalizedTextAsset__TextInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalizedTextAsset__TextInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo& operator=(____GlobalNamespace__LocalizedTextAsset__TextInfo&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalizedTextAsset__TextInfo& operator=(____GlobalNamespace__LocalizedTextAsset__TextInfo const& o) noexcept = default;
                


// Fields

 ::Polyglot::Language __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(::Polyglot::Language value) ;

constexpr ::Polyglot::Language __get_language() const;

 ::UnityEngine::TextAsset __declspec(property(get=__get_localizedText, put=__set_localizedText))  localizedText;

constexpr void __set_localizedText(::UnityEngine::TextAsset value) ;

constexpr ::UnityEngine::TextAsset __get_localizedText() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LocalizedTextAsset__TextInfo() ;

/// @brief Method .ctor addr 0x219d54c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass6_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5961))
// CS Name: LocalizedTextAsset::<>c__DisplayClass6_0
class CORDL_TYPE ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0(____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0(____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0& operator=(____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0& operator=(____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 ::Polyglot::Language __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(::Polyglot::Language value) ;

constexpr ::Polyglot::Language __get_language() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x219d53c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_localizedText>b__1 addr 0x219d554 size 0x24 virtual false final false
 bool _get_localizedText_b__1(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5962))
// CS Name: LocalizedTextAsset::<>c
class CORDL_TYPE ____GlobalNamespace__LocalizedTextAsset____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__LocalizedTextAsset____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset____c(____GlobalNamespace__LocalizedTextAsset____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LocalizedTextAsset____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LocalizedTextAsset____c(____GlobalNamespace__LocalizedTextAsset____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LocalizedTextAsset____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__LocalizedTextAsset____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LocalizedTextAsset____c& operator=(____GlobalNamespace__LocalizedTextAsset____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__LocalizedTextAsset____c& operator=(____GlobalNamespace__LocalizedTextAsset____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c value) ;

static ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo,bool> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo,bool> value) ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo,bool> __get___9__6_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__LocalizedTextAsset____c() ;

/// @brief Method .ctor addr 0x219d5dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_localizedText>b__6_0 addr 0x219d5e4 size 0x20 virtual false final false
 bool _get_localizedText_b__6_0(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalizedTextAsset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5963))
// CS Name: LocalizedTextAsset
class CORDL_TYPE LocalizedTextAsset : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c;

using __c__DisplayClass6_0 = ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0;

using TextInfo = ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LocalizedTextAsset() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: " const&", def_value: None }]
constexpr LocalizedTextAsset(LocalizedTextAsset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTextAsset", modifiers: "&&", def_value: None }]
constexpr LocalizedTextAsset(LocalizedTextAsset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedTextAsset(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr LocalizedTextAsset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedTextAsset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedTextAsset& operator=(LocalizedTextAsset&& o) noexcept = default;
  constexpr LocalizedTextAsset& operator=(LocalizedTextAsset const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo> __declspec(property(get=__get__textInfos, put=__set__textInfos))  _textInfos;

constexpr void __set__textInfos(::ArrayW<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo> __get__textInfos() const;

 ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo __declspec(property(get=__get__lastTextInfo, put=__set__lastTextInfo))  _lastTextInfo;

constexpr void __set__lastTextInfo(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo __get__lastTextInfo() const;


// Properties

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo> __declspec(property(get=get_textInfos))  textInfos;

 ::StringW __declspec(property(get=get_localizedText))  localizedText;


// Methods

/// @brief Method get_textInfos addr 0x219d228 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo> get_textInfos() ;

/// @brief Method get_localizedText addr 0x219d230 size 0x30c virtual false final false
 ::StringW get_localizedText() ;

// Ctor Parameters []
explicit LocalizedTextAsset() ;

/// @brief Method .ctor addr 0x219d544 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LocalizedTextAsset);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalizedTextAsset, "", "LocalizedTextAsset");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset__TextInfo, "", "LocalizedTextAsset/TextInfo");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c, "", "LocalizedTextAsset/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LocalizedTextAsset____c__DisplayClass6_0, "", "LocalizedTextAsset/<>c__DisplayClass6_0");
