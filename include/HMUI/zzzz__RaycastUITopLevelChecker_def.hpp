#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace HMUI {
class RaycastUITopLevelChecker;
}
// Type: HMUI::RaycastUITopLevelChecker
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13598))
// CS Name: HMUI.RaycastUITopLevelChecker
class CORDL_TYPE RaycastUITopLevelChecker : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RaycastUITopLevelChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: " const&", def_value: None }]
constexpr RaycastUITopLevelChecker(RaycastUITopLevelChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: "&&", def_value: None }]
constexpr RaycastUITopLevelChecker(RaycastUITopLevelChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RaycastUITopLevelChecker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RaycastUITopLevelChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RaycastUITopLevelChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RaycastUITopLevelChecker& operator=(RaycastUITopLevelChecker&& o) noexcept = default;
  constexpr RaycastUITopLevelChecker& operator=(RaycastUITopLevelChecker const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> __declspec(property(get=__get_results, put=__set_results))  results;

constexpr void __set_results(System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult> __get_results() const;

 UnityEngine::Canvas __declspec(property(get=__get__canvas, put=__set__canvas))  _canvas;

constexpr void __set__canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get__canvas() const;


// Properties

 bool __declspec(property(get=get_isOnTop))  isOnTop;


// Methods

/// @brief Method Awake addr 0x1fabb64 size 0x74 virtual false final false
 void Awake() ;

/// @brief Method get_isOnTop addr 0x1fabbd8 size 0x208 virtual false final false
 bool get_isOnTop() ;

static HMUI::RaycastUITopLevelChecker New_ctor() ;

/// @brief Method .ctor addr 0x1fabde0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::RaycastUITopLevelChecker);
DEFINE_IL2CPP_ARG_TYPE(HMUI::RaycastUITopLevelChecker, "HMUI", "RaycastUITopLevelChecker");
