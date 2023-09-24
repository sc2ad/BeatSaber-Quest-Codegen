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
class RecordingToolConfigViewController;
}
// Type: ::RecordingToolConfigViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5834))
// CS Name: RecordingToolConfigViewController
class CORDL_TYPE RecordingToolConfigViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~RecordingToolConfigViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: " const&", def_value: None }]
constexpr RecordingToolConfigViewController(RecordingToolConfigViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolConfigViewController", modifiers: "&&", def_value: None }]
constexpr RecordingToolConfigViewController(RecordingToolConfigViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolConfigViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr RecordingToolConfigViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolConfigViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolConfigViewController& operator=(RecordingToolConfigViewController&& o) noexcept = default;
  constexpr RecordingToolConfigViewController& operator=(RecordingToolConfigViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextPageScrollView __declspec(property(get=__get__textPageScrollView, put=__set__textPageScrollView))  _textPageScrollView;

constexpr void __set__textPageScrollView(HMUI::TextPageScrollView value) ;

constexpr HMUI::TextPageScrollView __get__textPageScrollView() const;

 GlobalNamespace::RecordingToolManager __declspec(property(get=__get__recordingToolManager, put=__set__recordingToolManager))  _recordingToolManager;

constexpr void __set__recordingToolManager(GlobalNamespace::RecordingToolManager value) ;

constexpr GlobalNamespace::RecordingToolManager __get__recordingToolManager() const;


// Methods

/// @brief Method DidActivate addr 0x217ed98 size 0x8c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::RecordingToolConfigViewController New_ctor() ;

/// @brief Method .ctor addr 0x217ee24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RecordingToolConfigViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolConfigViewController, "", "RecordingToolConfigViewController");
