#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class CrashManagerSO;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class CrashInfoViewController;
}
// Type: ::CrashInfoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5712))
// CS Name: CrashInfoViewController
class CORDL_TYPE CrashInfoViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrashInfoViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: " const&", def_value: None }]
constexpr CrashInfoViewController(CrashInfoViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrashInfoViewController", modifiers: "&&", def_value: None }]
constexpr CrashInfoViewController(CrashInfoViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrashInfoViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CrashInfoViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrashInfoViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrashInfoViewController& operator=(CrashInfoViewController&& o) noexcept = default;
  constexpr CrashInfoViewController& operator=(CrashInfoViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CrashManagerSO __declspec(property(get=__get__crashManager, put=__set__crashManager))  _crashManager;

constexpr void __set__crashManager(GlobalNamespace::CrashManagerSO value) ;

constexpr GlobalNamespace::CrashManagerSO __get__crashManager() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;


// Methods

/// @brief Method Start addr 0x215819c size 0x78 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit CrashInfoViewController() ;

/// @brief Method .ctor addr 0x2158214 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CrashInfoViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CrashInfoViewController, "", "CrashInfoViewController");
