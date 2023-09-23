#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Rect;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace UnityEngine {
class RectOffset;
}
// Type: UnityEngine::RectOffset
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10103))
// CS Name: UnityEngine.RectOffset
class CORDL_TYPE RectOffset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RectOffset() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: " const&", def_value: None }]
constexpr RectOffset(RectOffset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectOffset", modifiers: "&&", def_value: None }]
constexpr RectOffset(RectOffset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectOffset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RectOffset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectOffset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectOffset& operator=(RectOffset&& o) noexcept = default;
  constexpr RectOffset& operator=(RectOffset const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_SourceStyle, put=__set_m_SourceStyle))  m_SourceStyle;

constexpr void __set_m_SourceStyle(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_SourceStyle() const;


// Properties

 int32_t __declspec(property(get=get_left, put=set_left))  left;

 int32_t __declspec(property(get=get_right, put=set_right))  right;

 int32_t __declspec(property(get=get_top, put=set_top))  top;

 int32_t __declspec(property(get=get_bottom, put=set_bottom))  bottom;

 int32_t __declspec(property(get=get_horizontal))  horizontal;

 int32_t __declspec(property(get=get_vertical))  vertical;


// Methods

// Ctor Parameters []
explicit RectOffset() ;

/// @brief Method .ctor addr 0x2b516ac size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "sourceStyle", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit RectOffset(::bs_hook::Il2CppWrapperType sourceStyle, ::cordl_internals::intptr_t source) ;

/// @brief Method .ctor addr 0x2b5171c size 0x2c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType sourceStyle, ::cordl_internals::intptr_t source) ;

/// @brief Method Finalize addr 0x2b51748 size 0xa0 virtual true final false
 void Finalize() ;

// Ctor Parameters [CppParam { name: "left", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "right", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "int32_t", modifiers: "", def_value: None }]
explicit RectOffset(int32_t left, int32_t right, int32_t top, int32_t bottom) ;

/// @brief Method .ctor addr 0x2b51888 size 0x114 virtual false final false
 void _ctor(int32_t left, int32_t right, int32_t top, int32_t bottom) ;

/// @brief Method ToString addr 0x2b51aac size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2b51ab8 size 0x29c virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method Destroy addr 0x2b517e8 size 0xa0 virtual false final false
 void Destroy() ;

/// @brief Method InternalCreate addr 0x2b516f4 size 0x28 virtual false final false
static ::cordl_internals::intptr_t InternalCreate() ;

/// @brief Method InternalDestroy addr 0x2b51e44 size 0x3c virtual false final false
static void InternalDestroy(::cordl_internals::intptr_t ptr) ;

/// @brief Method get_left addr 0x2b51d54 size 0x3c virtual false final false
 int32_t get_left() ;

/// @brief Method set_left addr 0x2b5199c size 0x44 virtual false final false
 void set_left(int32_t value) ;

/// @brief Method get_right addr 0x2b51d90 size 0x3c virtual false final false
 int32_t get_right() ;

/// @brief Method set_right addr 0x2b519e0 size 0x44 virtual false final false
 void set_right(int32_t value) ;

/// @brief Method get_top addr 0x2b51dcc size 0x3c virtual false final false
 int32_t get_top() ;

/// @brief Method set_top addr 0x2b51a24 size 0x44 virtual false final false
 void set_top(int32_t value) ;

/// @brief Method get_bottom addr 0x2b51e08 size 0x3c virtual false final false
 int32_t get_bottom() ;

/// @brief Method set_bottom addr 0x2b51a68 size 0x44 virtual false final false
 void set_bottom(int32_t value) ;

/// @brief Method get_horizontal addr 0x2b51e80 size 0x3c virtual false final false
 int32_t get_horizontal() ;

/// @brief Method get_vertical addr 0x2b51ebc size 0x3c virtual false final false
 int32_t get_vertical() ;

/// @brief Method Remove addr 0x2b51ef8 size 0x64 virtual false final false
 UnityEngine::Rect Remove(UnityEngine::Rect rect) ;

/// @brief Method Remove_Injected addr 0x2b51f5c size 0x54 virtual false final false
 void Remove_Injected(ByRef<UnityEngine::Rect> rect, ByRef<UnityEngine::Rect> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RectOffset);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectOffset, "UnityEngine", "RectOffset");
