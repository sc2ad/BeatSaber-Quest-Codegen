#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class ScrollViewItemForVisibilityController;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class HMUI__ScrollViewItemsVisibilityController____c;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class HMUI__ScrollViewItemsVisibilityController____c;
}
namespace HMUI {
class ScrollViewItemsVisibilityController;
}
// Type: ::<>c
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13701))
// CS Name: HMUI.ScrollViewItemsVisibilityController::<>c
class CORDL_TYPE HMUI__ScrollViewItemsVisibilityController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HMUI__ScrollViewItemsVisibilityController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollViewItemsVisibilityController____c", modifiers: " const&", def_value: None }]
constexpr HMUI__ScrollViewItemsVisibilityController____c(HMUI__ScrollViewItemsVisibilityController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__ScrollViewItemsVisibilityController____c", modifiers: "&&", def_value: None }]
constexpr HMUI__ScrollViewItemsVisibilityController____c(HMUI__ScrollViewItemsVisibilityController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__ScrollViewItemsVisibilityController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__ScrollViewItemsVisibilityController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__ScrollViewItemsVisibilityController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__ScrollViewItemsVisibilityController____c& operator=(HMUI__ScrollViewItemsVisibilityController____c&& o) noexcept = default;
  constexpr HMUI__ScrollViewItemsVisibilityController____c& operator=(HMUI__ScrollViewItemsVisibilityController____c const& o) noexcept = default;
                


// Fields

static HMUI::HMUI__ScrollViewItemsVisibilityController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(HMUI::HMUI__ScrollViewItemsVisibilityController____c value) ;

static HMUI::HMUI__ScrollViewItemsVisibilityController____c __get___9() ;

static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> value) ;

static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> __get___9__11_0() ;

static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> __declspec(property(get=__get___9__11_1, put=__set___9__11_1))  __9__11_1;

static void __set___9__11_1(System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> value) ;

static System::Func_2<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>,float_t> __get___9__11_1() ;


// Methods

static HMUI::HMUI__ScrollViewItemsVisibilityController____c New_ctor() ;

/// @brief Method .ctor addr 0x1fd1f6c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__11_0 addr 0x1fd1f74 size 0x44 virtual false final false
 float_t _Start_b__11_0(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t> item) ;

/// @brief Method <Start>b__11_1 addr 0x1fd1fb8 size 0x44 virtual false final false
 float_t _Start_b__11_1(System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t> item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ScrollViewItemsVisibilityController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13702))
// CS Name: HMUI.ScrollViewItemsVisibilityController
class CORDL_TYPE ScrollViewItemsVisibilityController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = HMUI::HMUI__ScrollViewItemsVisibilityController____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~ScrollViewItemsVisibilityController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemsVisibilityController", modifiers: " const&", def_value: None }]
constexpr ScrollViewItemsVisibilityController(ScrollViewItemsVisibilityController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollViewItemsVisibilityController", modifiers: "&&", def_value: None }]
constexpr ScrollViewItemsVisibilityController(ScrollViewItemsVisibilityController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollViewItemsVisibilityController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScrollViewItemsVisibilityController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollViewItemsVisibilityController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollViewItemsVisibilityController& operator=(ScrollViewItemsVisibilityController&& o) noexcept = default;
  constexpr ScrollViewItemsVisibilityController& operator=(ScrollViewItemsVisibilityController const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get__viewport, put=__set__viewport))  _viewport;

constexpr void __set__viewport(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__viewport() const;

 UnityEngine::RectTransform __declspec(property(get=__get__contentRectTransform, put=__set__contentRectTransform))  _contentRectTransform;

constexpr void __set__contentRectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__contentRectTransform() const;

 ::ArrayW<HMUI::ScrollViewItemForVisibilityController> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<HMUI::ScrollViewItemForVisibilityController> value) ;

constexpr ::ArrayW<HMUI::ScrollViewItemForVisibilityController> __get__items() const;

 float_t __declspec(property(get=__get__lastContentAnchoredPositionY, put=__set__lastContentAnchoredPositionY))  _lastContentAnchoredPositionY;

constexpr void __set__lastContentAnchoredPositionY(float_t value) ;

constexpr float_t __get__lastContentAnchoredPositionY() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__viewportWorldCorners, put=__set__viewportWorldCorners))  _viewportWorldCorners;

constexpr void __set__viewportWorldCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__viewportWorldCorners() const;

 ::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> __declspec(property(get=__get__upperItemsCornes, put=__set__upperItemsCornes))  _upperItemsCornes;

constexpr void __set__upperItemsCornes(::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> value) ;

constexpr ::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> __get__upperItemsCornes() const;

 ::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> __declspec(property(get=__get__lowerItemsCornes, put=__set__lowerItemsCornes))  _lowerItemsCornes;

constexpr void __set__lowerItemsCornes(::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> value) ;

constexpr ::ArrayW<System::Tuple_2<HMUI::ScrollViewItemForVisibilityController,float_t>> __get__lowerItemsCornes() const;

 int32_t __declspec(property(get=__get__lowerLastVisibleIndex, put=__set__lowerLastVisibleIndex))  _lowerLastVisibleIndex;

constexpr void __set__lowerLastVisibleIndex(int32_t value) ;

constexpr int32_t __get__lowerLastVisibleIndex() const;

 int32_t __declspec(property(get=__get__upperLastVisibleIndex, put=__set__upperLastVisibleIndex))  _upperLastVisibleIndex;

constexpr void __set__upperLastVisibleIndex(int32_t value) ;

constexpr int32_t __get__upperLastVisibleIndex() const;

 float_t __declspec(property(get=__get__contentMaxY, put=__set__contentMaxY))  _contentMaxY;

constexpr void __set__contentMaxY(float_t value) ;

constexpr float_t __get__contentMaxY() const;

 float_t __declspec(property(get=__get__contentMinY, put=__set__contentMinY))  _contentMinY;

constexpr void __set__contentMinY(float_t value) ;

constexpr float_t __get__contentMinY() const;


// Methods

/// @brief Method Start addr 0x1fd1630 size 0x4a0 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x1fd1c78 size 0x9c virtual false final false
 void Update() ;

/// @brief Method UpdateVisibilityUpDirection addr 0x1fd1ad0 size 0x1a8 virtual false final false
 void UpdateVisibilityUpDirection(float_t newContentAnchoredPositionY) ;

/// @brief Method UpdateVisibilityDownDirection addr 0x1fd1d14 size 0x19c virtual false final false
 void UpdateVisibilityDownDirection(float_t newContentAnchoredPositionY) ;

static HMUI::ScrollViewItemsVisibilityController New_ctor() ;

/// @brief Method .ctor addr 0x1fd1eb0 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__ScrollViewItemsVisibilityController____c);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ScrollViewItemsVisibilityController____c, "HMUI", "ScrollViewItemsVisibilityController/<>c");
NEED_NO_BOX(HMUI::ScrollViewItemsVisibilityController);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollViewItemsVisibilityController, "HMUI", "ScrollViewItemsVisibilityController");
