#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Polyglot {
class LocalizationDocument;
}
namespace Polyglot {
struct Language;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Polyglot {
class LocalizationAsset;
}
namespace Polyglot {
class ILocalize;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace Polyglot {
struct LanguageDirection;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace Polyglot {
class Localization;
}
// Type: Polyglot::Localization
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15534))
// CS Name: Polyglot.Localization
class CORDL_TYPE Localization : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Localization() = default;

// Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: " const&", def_value: None }]
constexpr Localization(Localization const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Localization", modifiers: "&&", def_value: None }]
constexpr Localization(Localization&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Localization(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr Localization& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Localization& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Localization& operator=(Localization&& o) noexcept = default;
  constexpr Localization& operator=(Localization const& o) noexcept = default;
                


// Fields

/// @brief Field KeyNotFound offset 0
static constexpr ::ConstString  KeyNotFound{u"[{0}]"};

 Polyglot::LocalizationDocument __declspec(property(get=__get_customDocument, put=__set_customDocument))  customDocument;

constexpr void __set_customDocument(Polyglot::LocalizationDocument value) ;

constexpr Polyglot::LocalizationDocument __get_customDocument() const;

 System::Collections::Generic::List_1<Polyglot::LocalizationAsset> __declspec(property(get=__get_inputFiles, put=__set_inputFiles))  inputFiles;

constexpr void __set_inputFiles(System::Collections::Generic::List_1<Polyglot::LocalizationAsset> value) ;

constexpr System::Collections::Generic::List_1<Polyglot::LocalizationAsset> __get_inputFiles() const;

static Polyglot::Localization __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(Polyglot::Localization value) ;

static Polyglot::Localization __get_instance() ;

 System::Collections::Generic::List_1<Polyglot::Language> __declspec(property(get=__get_supportedLanguages, put=__set_supportedLanguages))  supportedLanguages;

constexpr void __set_supportedLanguages(System::Collections::Generic::List_1<Polyglot::Language> value) ;

constexpr System::Collections::Generic::List_1<Polyglot::Language> __get_supportedLanguages() const;

 Polyglot::Language __declspec(property(get=__get_selectedLanguage, put=__set_selectedLanguage))  selectedLanguage;

constexpr void __set_selectedLanguage(Polyglot::Language value) ;

constexpr Polyglot::Language __get_selectedLanguage() const;

 Polyglot::Language __declspec(property(get=__get_fallbackLanguage, put=__set_fallbackLanguage))  fallbackLanguage;

constexpr void __set_fallbackLanguage(Polyglot::Language value) ;

constexpr Polyglot::Language __get_fallbackLanguage() const;

 UnityEngine::Events::UnityEvent __declspec(property(get=__get_Localize, put=__set_Localize))  Localize;

constexpr void __set_Localize(UnityEngine::Events::UnityEvent value) ;

constexpr UnityEngine::Events::UnityEvent __get_Localize() const;

 System::Globalization::CultureInfo __declspec(property(get=__get_selectedCultureInfo, put=__set_selectedCultureInfo))  selectedCultureInfo;

constexpr void __set_selectedCultureInfo(System::Globalization::CultureInfo value) ;

constexpr System::Globalization::CultureInfo __get_selectedCultureInfo() const;


// Properties

 Polyglot::LocalizationDocument __declspec(property(get=get_CustomDocument))  CustomDocument;

 System::Collections::Generic::List_1<Polyglot::LocalizationAsset> __declspec(property(get=get_InputFiles))  InputFiles;

static Polyglot::Localization __declspec(property(get=get_Instance, put=set_Instance))  Instance;

static bool __declspec(property(get=get_HasInstance))  HasInstance;

 System::Collections::Generic::List_1<Polyglot::Language> __declspec(property(get=get_SupportedLanguages))  SupportedLanguages;

 Polyglot::LanguageDirection __declspec(property(get=get_SelectedLanguageDirection))  SelectedLanguageDirection;

 int32_t __declspec(property(get=get_SelectedLanguageIndex))  SelectedLanguageIndex;

 System::Globalization::CultureInfo __declspec(property(get=get_SelectedCultureInfo))  SelectedCultureInfo;

 Polyglot::Language __declspec(property(get=get_SelectedLanguage, put=set_SelectedLanguage))  SelectedLanguage;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_EnglishLanguageNames))  EnglishLanguageNames;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_LocalizedLanguageNames))  LocalizedLanguageNames;

 ::StringW __declspec(property(get=get_EnglishLanguageName))  EnglishLanguageName;

 ::StringW __declspec(property(get=get_LocalizedLanguageName))  LocalizedLanguageName;


// Methods

/// @brief Method get_CustomDocument addr 0x2671a48 size 0x8 virtual false final false
 Polyglot::LocalizationDocument get_CustomDocument() ;

/// @brief Method get_InputFiles addr 0x2671a50 size 0x8 virtual false final false
 System::Collections::Generic::List_1<Polyglot::LocalizationAsset> get_InputFiles() ;

/// @brief Method get_Instance addr 0x26715ac size 0x94 virtual false final false
static Polyglot::Localization get_Instance() ;

/// @brief Method set_Instance addr 0x2671af8 size 0x4c virtual false final false
static void set_Instance(Polyglot::Localization value) ;

/// @brief Method get_HasInstance addr 0x2671a58 size 0xa0 virtual false final false
static bool get_HasInstance() ;

/// @brief Method get_SupportedLanguages addr 0x2671b44 size 0x8 virtual false final false
 System::Collections::Generic::List_1<Polyglot::Language> get_SupportedLanguages() ;

/// @brief Method get_SelectedLanguageDirection addr 0x2671b4c size 0x14 virtual false final false
 Polyglot::LanguageDirection get_SelectedLanguageDirection() ;

/// @brief Method GetLanguageDirection addr 0x2671b60 size 0x1c virtual false final false
 Polyglot::LanguageDirection GetLanguageDirection(Polyglot::Language language) ;

/// @brief Method get_SelectedLanguageIndex addr 0x2671884 size 0x74 virtual false final false
 int32_t get_SelectedLanguageIndex() ;

/// @brief Method get_SelectedCultureInfo addr 0x2671b7c size 0x8 virtual false final false
 System::Globalization::CultureInfo get_SelectedCultureInfo() ;

/// @brief Method get_SelectedLanguage addr 0x2671b84 size 0x8 virtual false final false
 Polyglot::Language get_SelectedLanguage() ;

/// @brief Method set_SelectedLanguage addr 0x2671b8c size 0x104 virtual false final false
 void set_SelectedLanguage(Polyglot::Language value) ;

/// @brief Method IsLanguageSupported addr 0x2671c90 size 0x78 virtual false final false
 bool IsLanguageSupported(Polyglot::Language language) ;

/// @brief Method InvokeOnLocalize addr 0x2671dac size 0x14 virtual false final false
 void InvokeOnLocalize() ;

/// @brief Method get_EnglishLanguageNames addr 0x2671814 size 0x70 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_EnglishLanguageNames() ;

/// @brief Method get_LocalizedLanguageNames addr 0x26720d0 size 0x70 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_LocalizedLanguageNames() ;

/// @brief Method get_EnglishLanguageName addr 0x2672140 size 0x40 virtual false final false
 ::StringW get_EnglishLanguageName() ;

/// @brief Method get_LocalizedLanguageName addr 0x26721a4 size 0x40 virtual false final false
 ::StringW get_LocalizedLanguageName() ;

/// @brief Method SelectLanguage addr 0x26721e4 size 0x78 virtual false final false
 void SelectLanguage(int32_t selected) ;

/// @brief Method SelectLanguage addr 0x267225c size 0x4 virtual false final false
 void SelectLanguage(Polyglot::Language selected) ;

/// @brief Method SelectCultureInfo addr 0x2671d08 size 0xa4 virtual false final false
 void SelectCultureInfo() ;

/// @brief Method ConvertSystemLanguage addr 0x2672260 size 0x38 virtual false final false
 Polyglot::Language ConvertSystemLanguage(UnityEngine::SystemLanguage selected) ;

/// @brief Method AddOnLocalizeEvent addr 0x2671640 size 0x1d4 virtual false final false
 void AddOnLocalizeEvent(Polyglot::ILocalize localize) ;

/// @brief Method RemoveOnLocalizeEvent addr 0x2672298 size 0xec virtual false final false
 void RemoveOnLocalizeEvent(Polyglot::ILocalize localize) ;

/// @brief Method Get addr 0x2672180 size 0x24 virtual false final false
static ::StringW Get(::StringW key) ;

/// @brief Method Get addr 0x2672384 size 0x3b4 virtual false final false
static ::StringW Get(::StringW key, Polyglot::Language language) ;

/// @brief Method KeyExist addr 0x26727c8 size 0xb0 virtual false final false
static bool KeyExist(::StringW key) ;

/// @brief Method GetKeys addr 0x2672878 size 0x4c virtual false final false
static System::Collections::Generic::List_1<::StringW> GetKeys() ;

/// @brief Method GetFormat addr 0x2672958 size 0x6c virtual false final false
static ::StringW GetFormat(::StringW key, ::ArrayW<::bs_hook::Il2CppWrapperType> arguments) ;

/// @brief Method InputFilesContains addr 0x26729c4 size 0x1c4 virtual false final false
 bool InputFilesContains(Polyglot::LocalizationDocument doc) ;

static Polyglot::Localization New_ctor() ;

/// @brief Method .ctor addr 0x2672b88 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::Localization);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Localization, "Polyglot", "Localization");
