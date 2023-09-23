#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace SFB {
struct ExtensionFilter;
}
// Forward declare root types
namespace SFB {
class IStandaloneFileBrowser;
}
// Type: SFB::IStandaloneFileBrowser
namespace SFB {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6148))
// CS Name: SFB.IStandaloneFileBrowser
class CORDL_TYPE IStandaloneFileBrowser : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStandaloneFileBrowser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStandaloneFileBrowser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OpenFilePanel addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::StringW> OpenFilePanel(::StringW title, ::StringW directory, ::ArrayW<SFB::ExtensionFilter> extensions, bool multiselect) ;

/// @brief Method OpenFolderPanel addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::StringW> OpenFolderPanel(::StringW title, ::StringW directory, bool multiselect) ;

/// @brief Method SaveFilePanel addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW SaveFilePanel(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<SFB::ExtensionFilter> extensions) ;

/// @brief Method OpenFilePanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenFilePanelAsync(::StringW title, ::StringW directory, ::ArrayW<SFB::ExtensionFilter> extensions, bool multiselect, System::Action_1<::ArrayW<::StringW>> cb) ;

/// @brief Method OpenFolderPanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenFolderPanelAsync(::StringW title, ::StringW directory, bool multiselect, System::Action_1<::ArrayW<::StringW>> cb) ;

/// @brief Method SaveFilePanelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 void SaveFilePanelAsync(::StringW title, ::StringW directory, ::StringW defaultName, ::ArrayW<SFB::ExtensionFilter> extensions, System::Action_1<::StringW> cb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def SFB
NEED_NO_BOX(SFB::IStandaloneFileBrowser);
DEFINE_IL2CPP_ARG_TYPE(SFB::IStandaloneFileBrowser, "SFB", "IStandaloneFileBrowser");
