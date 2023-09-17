#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerId;
}
// Type: UnityEngine.UIElements::PointerId
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7294))
// CS Name: UnityEngine.UIElements.PointerId
class CORDL_TYPE PointerId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerId() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: " const&", def_value: None }]
constexpr PointerId(PointerId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerId", modifiers: "&&", def_value: None }]
constexpr PointerId(PointerId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerId& operator=(PointerId&& o) noexcept = default;
  constexpr PointerId& operator=(PointerId const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_maxPointers, put=__set_maxPointers))  maxPointers;

static void __set_maxPointers(int32_t value) ;

static int32_t __get_maxPointers() ;

static int32_t __declspec(property(get=__get_invalidPointerId, put=__set_invalidPointerId))  invalidPointerId;

static void __set_invalidPointerId(int32_t value) ;

static int32_t __get_invalidPointerId() ;

static int32_t __declspec(property(get=__get_mousePointerId, put=__set_mousePointerId))  mousePointerId;

static void __set_mousePointerId(int32_t value) ;

static int32_t __get_mousePointerId() ;

static int32_t __declspec(property(get=__get_touchPointerIdBase, put=__set_touchPointerIdBase))  touchPointerIdBase;

static void __set_touchPointerIdBase(int32_t value) ;

static int32_t __get_touchPointerIdBase() ;

static int32_t __declspec(property(get=__get_touchPointerCount, put=__set_touchPointerCount))  touchPointerCount;

static void __set_touchPointerCount(int32_t value) ;

static int32_t __get_touchPointerCount() ;

static int32_t __declspec(property(get=__get_penPointerIdBase, put=__set_penPointerIdBase))  penPointerIdBase;

static void __set_penPointerIdBase(int32_t value) ;

static int32_t __get_penPointerIdBase() ;

static int32_t __declspec(property(get=__get_penPointerCount, put=__set_penPointerCount))  penPointerCount;

static void __set_penPointerCount(int32_t value) ;

static int32_t __get_penPointerCount() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_hoveringPointers, put=__set_hoveringPointers))  hoveringPointers;

static void __set_hoveringPointers(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_hoveringPointers() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::PointerId);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerId, "UnityEngine.UIElements", "PointerId");
