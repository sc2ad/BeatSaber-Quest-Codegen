#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace HMUI {
class TextPageScrollView;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
// Type: ::RecordingToolLoggingViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5835))
// CS Name: RecordingToolLoggingViewController
class CORDL_TYPE RecordingToolLoggingViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RecordingToolLoggingViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: " const&", def_value: None }]
constexpr RecordingToolLoggingViewController(RecordingToolLoggingViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolLoggingViewController", modifiers: "&&", def_value: None }]
constexpr RecordingToolLoggingViewController(RecordingToolLoggingViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolLoggingViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr RecordingToolLoggingViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolLoggingViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolLoggingViewController& operator=(RecordingToolLoggingViewController&& o) noexcept = default;
  constexpr RecordingToolLoggingViewController& operator=(RecordingToolLoggingViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 GlobalNamespace::RecordingToolManager __declspec(property(get=__get__recordingToolManager, put=__set__recordingToolManager))  _recordingToolManager;

constexpr void __set__recordingToolManager(GlobalNamespace::RecordingToolManager value) ;

constexpr GlobalNamespace::RecordingToolManager __get__recordingToolManager() const;


// Methods

/// @brief Method DidActivate addr 0x217ee2c size 0xa4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit RecordingToolLoggingViewController() ;

/// @brief Method .ctor addr 0x217eed0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolLoggingViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolLoggingViewController, "", "RecordingToolLoggingViewController");
