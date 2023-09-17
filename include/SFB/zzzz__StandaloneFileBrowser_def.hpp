#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace SFB {
class IStandaloneFileBrowser;
}
namespace System {
template<typename T>
class Action_1;
}
namespace SFB {
struct ExtensionFilter;
}
// Forward declare root types
namespace SFB {
class StandaloneFileBrowser;
}
// Type: SFB::StandaloneFileBrowser
namespace SFB {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6150))
// CS Name: SFB.StandaloneFileBrowser
class CORDL_TYPE StandaloneFileBrowser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandaloneFileBrowser() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: " const&", def_value: None }]
constexpr StandaloneFileBrowser(StandaloneFileBrowser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneFileBrowser", modifiers: "&&", def_value: None }]
constexpr StandaloneFileBrowser(StandaloneFileBrowser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandaloneFileBrowser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandaloneFileBrowser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandaloneFileBrowser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandaloneFileBrowser& operator=(StandaloneFileBrowser&& o) noexcept = default;
  constexpr StandaloneFileBrowser& operator=(StandaloneFileBrowser const& o) noexcept = default;
                


// Fields

static ::SFB::IStandaloneFileBrowser __declspec(property(get=__get__platformWrapper, put=__set__platformWrapper))  _platformWrapper;

static void __set__platformWrapper(::SFB::IStandaloneFileBrowser value) ;

static ::SFB::IStandaloneFileBrowser __get__platformWrapper() ;


// Methods

/// @brief Method OpenFilePanel addr 0x21d56b4 size 0x140 virtual false final false
static ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::StringW extension, bool multiselect) ;

/// @brief Method OpenFilePanel addr 0x21d57f4 size 0xf8 virtual false final false
static ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect) ;

/// @brief Method OpenFilePanelAsync addr 0x21d58ec size 0x148 virtual false final false
static void OpenFilePanelAsync(::StringW title, ::StringW directory, ::StringW extension, bool multiselect, ::System::Action_1<::ArrayW<::StringW>> cb) ;

/// @brief Method OpenFilePanelAsync addr 0x21d5a34 size 0x104 virtual false final false
static void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<::SFB::ExtensionFilter> extensions, bool multiselect, ::System::Action_1<::ArrayW<::StringW>> cb) ;

/// @brief Method OpenFolderPanel addr 0x21d5b38 size 0xec virtual false final false
static ::ArrayW<::StringW> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect) ;

/// @brief Method OpenFolderPanelAsync addr 0x21d5c24 size 0xfc virtual false final false
static void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, ::System::Action_1<::ArrayW<::StringW>> cb) ;

/// @brief Method SaveFilePanel addr 0x21d5d20 size 0x140 virtual false final false
static ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension) ;

/// @brief Method SaveFilePanel addr 0x21d5e60 size 0xfc virtual false final false
static ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions) ;

/// @brief Method SaveFilePanelAsync addr 0x21d5f5c size 0x148 virtual false final false
static void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::StringW extension, ::System::Action_1<::StringW> cb) ;

/// @brief Method SaveFilePanelAsync addr 0x21d60a4 size 0x104 virtual false final false
static void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<::SFB::ExtensionFilter> extensions, ::System::Action_1<::StringW> cb) ;

// Ctor Parameters []
explicit StandaloneFileBrowser() ;

/// @brief Method .ctor addr 0x21d61a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def SFB
} // end anonymous namespace
NEED_NO_BOX(::SFB::StandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(::SFB::StandaloneFileBrowser, "SFB", "StandaloneFileBrowser");
