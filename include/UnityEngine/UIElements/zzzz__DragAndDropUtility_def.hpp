#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragAndDropUtility;
}
// Type: UnityEngine.UIElements::DragAndDropUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7050))
// CS Name: UnityEngine.UIElements.DragAndDropUtility
class CORDL_TYPE DragAndDropUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DragAndDropUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: " const&", def_value: None }]
constexpr DragAndDropUtility(DragAndDropUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DragAndDropUtility", modifiers: "&&", def_value: None }]
constexpr DragAndDropUtility(DragAndDropUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DragAndDropUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DragAndDropUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DragAndDropUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DragAndDropUtility& operator=(DragAndDropUtility&& o) noexcept = default;
  constexpr DragAndDropUtility& operator=(DragAndDropUtility const& o) noexcept = default;
                


// Fields

static System::Func_1<UnityEngine::UIElements::IDragAndDrop> __declspec(property(get=__get_s_MakeClientFunc, put=__set_s_MakeClientFunc))  s_MakeClientFunc;

static void __set_s_MakeClientFunc(System::Func_1<UnityEngine::UIElements::IDragAndDrop> value) ;

static System::Func_1<UnityEngine::UIElements::IDragAndDrop> __get_s_MakeClientFunc() ;

static UnityEngine::UIElements::IDragAndDrop __declspec(property(get=__get_s_DragAndDrop, put=__set_s_DragAndDrop))  s_DragAndDrop;

static void __set_s_DragAndDrop(UnityEngine::UIElements::IDragAndDrop value) ;

static UnityEngine::UIElements::IDragAndDrop __get_s_DragAndDrop() ;


// Properties

static UnityEngine::UIElements::IDragAndDrop __declspec(property(get=get_dragAndDrop))  dragAndDrop;


// Methods

/// @brief Method get_dragAndDrop addr 0x2c92d48 size 0xac virtual false final false
static UnityEngine::UIElements::IDragAndDrop get_dragAndDrop() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::DragAndDropUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::DragAndDropUtility, "UnityEngine.UIElements", "DragAndDropUtility");
