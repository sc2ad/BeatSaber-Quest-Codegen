#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class TextAsset;
}
namespace Polyglot {
struct GoogleDriveDownloadFormat;
}
// Forward declare root types
namespace Polyglot {
class LocalizationDocument;
}
// Type: Polyglot::LocalizationDocument
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15536))
// CS Name: Polyglot.LocalizationDocument
class CORDL_TYPE LocalizationDocument : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LocalizationDocument() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: " const&", def_value: None }]
constexpr LocalizationDocument(LocalizationDocument const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationDocument", modifiers: "&&", def_value: None }]
constexpr LocalizationDocument(LocalizationDocument&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationDocument(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LocalizationDocument& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationDocument& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationDocument& operator=(LocalizationDocument&& o) noexcept = default;
  constexpr LocalizationDocument& operator=(LocalizationDocument const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_docsId, put=__set_docsId))  docsId;

constexpr void __set_docsId(::StringW value) ;

constexpr ::StringW __get_docsId() const;

 ::StringW __declspec(property(get=__get_sheetId, put=__set_sheetId))  sheetId;

constexpr void __set_sheetId(::StringW value) ;

constexpr ::StringW __get_sheetId() const;

 Polyglot::GoogleDriveDownloadFormat __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(Polyglot::GoogleDriveDownloadFormat value) ;

constexpr Polyglot::GoogleDriveDownloadFormat __get_format() const;

 UnityEngine::TextAsset __declspec(property(get=__get_textAsset, put=__set_textAsset))  textAsset;

constexpr void __set_textAsset(UnityEngine::TextAsset value) ;

constexpr UnityEngine::TextAsset __get_textAsset() const;

 bool __declspec(property(get=__get_downloadOnStart, put=__set_downloadOnStart))  downloadOnStart;

constexpr void __set_downloadOnStart(bool value) ;

constexpr bool __get_downloadOnStart() const;


// Properties

 UnityEngine::TextAsset __declspec(property(get=get_TextAsset, put=set_TextAsset))  TextAsset;

 ::StringW __declspec(property(get=get_DocsId, put=set_DocsId))  DocsId;

 ::StringW __declspec(property(get=get_SheetId, put=set_SheetId))  SheetId;

 Polyglot::GoogleDriveDownloadFormat __declspec(property(get=get_Format, put=set_Format))  Format;

 bool __declspec(property(get=get_DownloadOnStart, put=set_DownloadOnStart))  DownloadOnStart;


// Methods

/// @brief Method get_TextAsset addr 0x2672c48 size 0x8 virtual false final false
 UnityEngine::TextAsset get_TextAsset() ;

/// @brief Method set_TextAsset addr 0x2672c50 size 0x8 virtual false final false
 void set_TextAsset(UnityEngine::TextAsset value) ;

/// @brief Method get_DocsId addr 0x2672c58 size 0x8 virtual false final false
 ::StringW get_DocsId() ;

/// @brief Method set_DocsId addr 0x2672c60 size 0x8 virtual false final false
 void set_DocsId(::StringW value) ;

/// @brief Method get_SheetId addr 0x2672c68 size 0x8 virtual false final false
 ::StringW get_SheetId() ;

/// @brief Method set_SheetId addr 0x2672c70 size 0x8 virtual false final false
 void set_SheetId(::StringW value) ;

/// @brief Method get_Format addr 0x2672c78 size 0x8 virtual false final false
 Polyglot::GoogleDriveDownloadFormat get_Format() ;

/// @brief Method set_Format addr 0x2672c80 size 0x8 virtual false final false
 void set_Format(Polyglot::GoogleDriveDownloadFormat value) ;

/// @brief Method get_DownloadOnStart addr 0x2672c88 size 0x8 virtual false final false
 bool get_DownloadOnStart() ;

/// @brief Method set_DownloadOnStart addr 0x2672c90 size 0xc virtual false final false
 void set_DownloadOnStart(bool value) ;

static Polyglot::LocalizationDocument New_ctor() ;

/// @brief Method .ctor addr 0x2672c9c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::LocalizationDocument);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationDocument, "Polyglot", "LocalizationDocument");
