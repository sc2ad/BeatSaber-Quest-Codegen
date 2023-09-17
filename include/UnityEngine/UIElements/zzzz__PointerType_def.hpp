#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerType;
}
// Type: UnityEngine.UIElements::PointerType
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7293))
// CS Name: UnityEngine.UIElements.PointerType
class CORDL_TYPE PointerType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointerType() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: " const&", def_value: None }]
constexpr PointerType(PointerType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerType", modifiers: "&&", def_value: None }]
constexpr PointerType(PointerType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointerType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerType& operator=(PointerType&& o) noexcept = default;
  constexpr PointerType& operator=(PointerType const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_mouse, put=__set_mouse))  mouse;

static void __set_mouse(::StringW value) ;

static ::StringW __get_mouse() ;

static ::StringW __declspec(property(get=__get_touch, put=__set_touch))  touch;

static void __set_touch(::StringW value) ;

static ::StringW __get_touch() ;

static ::StringW __declspec(property(get=__get_pen, put=__set_pen))  pen;

static void __set_pen(::StringW value) ;

static ::StringW __get_pen() ;

static ::StringW __declspec(property(get=__get_unknown, put=__set_unknown))  unknown;

static void __set_unknown(::StringW value) ;

static ::StringW __get_unknown() ;


// Methods

/// @brief Method GetPointerType addr 0x2cd7840 size 0x9c virtual false final false
static ::StringW GetPointerType(int32_t pointerId) ;

/// @brief Method IsDirectManipulationDevice addr 0x2cd78dc size 0x8c virtual false final false
static bool IsDirectManipulationDevice(::StringW pointerType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::PointerType);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerType, "UnityEngine.UIElements", "PointerType");
