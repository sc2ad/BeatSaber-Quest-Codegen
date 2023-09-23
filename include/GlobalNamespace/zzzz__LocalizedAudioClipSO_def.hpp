#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class AudioClip;
}
namespace Polyglot {
struct Language;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo;
}
namespace GlobalNamespace {
class GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
// Type: ::LocalizedAudioClipInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5957))
// CS Name: LocalizedAudioClipSO::LocalizedAudioClipInfo
class CORDL_TYPE GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo(GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo(GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo& operator=(GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo&& o) noexcept = default;
  constexpr GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo& operator=(GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo const& o) noexcept = default;
                


// Fields

 Polyglot::Language __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(Polyglot::Language value) ;

constexpr Polyglot::Language __get_language() const;

 UnityEngine::AudioClip __declspec(property(get=__get_localizedAudioClip, put=__set_localizedAudioClip))  localizedAudioClip;

constexpr void __set_localizedAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get_localizedAudioClip() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo() ;

/// @brief Method .ctor addr 0x219d1fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5958))
// CS Name: LocalizedAudioClipSO::<>c__DisplayClass4_0
class CORDL_TYPE GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0(GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0(GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0& operator=(GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0&& o) noexcept = default;
  constexpr GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0& operator=(GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 Polyglot::Language __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(Polyglot::Language value) ;

constexpr Polyglot::Language __get_language() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0x219d1ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_localizedAudioClip>b__0 addr 0x219d204 size 0x24 virtual false final false
 bool _get_localizedAudioClip_b__0(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LocalizedAudioClipSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5959))
// CS Name: LocalizedAudioClipSO
class CORDL_TYPE LocalizedAudioClipSO : public UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass4_0 = GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0;

using LocalizedAudioClipInfo = GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LocalizedAudioClipSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO", modifiers: " const&", def_value: None }]
constexpr LocalizedAudioClipSO(LocalizedAudioClipSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClipSO", modifiers: "&&", def_value: None }]
constexpr LocalizedAudioClipSO(LocalizedAudioClipSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizedAudioClipSO(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr LocalizedAudioClipSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizedAudioClipSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizedAudioClipSO& operator=(LocalizedAudioClipSO&& o) noexcept = default;
  constexpr LocalizedAudioClipSO& operator=(LocalizedAudioClipSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo> __declspec(property(get=__get__localizedAudioClipInfo, put=__set__localizedAudioClipInfo))  _localizedAudioClipInfo;

constexpr void __set__localizedAudioClipInfo(::ArrayW<GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo> __get__localizedAudioClipInfo() const;

 GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo __declspec(property(get=__get__lastLocalizedAudioClipInfo, put=__set__lastLocalizedAudioClipInfo))  _lastLocalizedAudioClipInfo;

constexpr void __set__lastLocalizedAudioClipInfo(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo __get__lastLocalizedAudioClipInfo() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_localizedAudioClip))  localizedAudioClip;


// Methods

/// @brief Method get_localizedAudioClip addr 0x219d0e4 size 0x108 virtual false final false
 UnityEngine::AudioClip get_localizedAudioClip() ;

// Ctor Parameters []
explicit LocalizedAudioClipSO() ;

/// @brief Method .ctor addr 0x219d1f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO__LocalizedAudioClipInfo, "", "LocalizedAudioClipSO/LocalizedAudioClipInfo");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LocalizedAudioClipSO____c__DisplayClass4_0, "", "LocalizedAudioClipSO/<>c__DisplayClass4_0");
NEED_NO_BOX(GlobalNamespace::LocalizedAudioClipSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedAudioClipSO, "", "LocalizedAudioClipSO");
