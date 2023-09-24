#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class UnityEngine__RectTransform__ReapplyDrivenProperties;
}
namespace UnityEngine {
struct UnityEngine__RectTransform__Axis;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct UnityEngine__RectTransform__Axis;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class UnityEngine__RectTransform__ReapplyDrivenProperties;
}
// Type: ::Axis
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10220))
// CS Name: UnityEngine.RectTransform::Axis
struct CORDL_TYPE UnityEngine__RectTransform__Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__RectTransform__Axis(int32_t value__) noexcept;


                    constexpr UnityEngine__RectTransform__Axis(UnityEngine__RectTransform__Axis const&) = default;
                    constexpr UnityEngine__RectTransform__Axis(UnityEngine__RectTransform__Axis&&) = default;
                    constexpr UnityEngine__RectTransform__Axis& operator=(UnityEngine__RectTransform__Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__RectTransform__Axis& operator=(UnityEngine__RectTransform__Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__RectTransform__Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__RectTransform__Axis_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__RectTransform__Axis_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__RectTransform__Axis_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static UnityEngine::UnityEngine__RectTransform__Axis const Horizontal;

/// @brief Field Vertical offset 0
static UnityEngine::UnityEngine__RectTransform__Axis const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::ReapplyDrivenProperties
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10221))
// CS Name: UnityEngine.RectTransform::ReapplyDrivenProperties
class CORDL_TYPE UnityEngine__RectTransform__ReapplyDrivenProperties : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__RectTransform__ReapplyDrivenProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__RectTransform__ReapplyDrivenProperties", modifiers: " const&", def_value: None }]
constexpr UnityEngine__RectTransform__ReapplyDrivenProperties(UnityEngine__RectTransform__ReapplyDrivenProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__RectTransform__ReapplyDrivenProperties", modifiers: "&&", def_value: None }]
constexpr UnityEngine__RectTransform__ReapplyDrivenProperties(UnityEngine__RectTransform__ReapplyDrivenProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__RectTransform__ReapplyDrivenProperties(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__RectTransform__ReapplyDrivenProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__RectTransform__ReapplyDrivenProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__RectTransform__ReapplyDrivenProperties& operator=(UnityEngine__RectTransform__ReapplyDrivenProperties&& o) noexcept = default;
  constexpr UnityEngine__RectTransform__ReapplyDrivenProperties& operator=(UnityEngine__RectTransform__ReapplyDrivenProperties const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b6d0f8 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b6d1cc size 0x14 virtual true final false
 void Invoke(UnityEngine::RectTransform driven) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::RectTransform
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10217))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10222))
// CS Name: UnityEngine.RectTransform
class CORDL_TYPE RectTransform : public UnityEngine::Transform {
public:
// Declarations
using ReapplyDrivenProperties = UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties;

using Axis = UnityEngine::UnityEngine__RectTransform__Axis;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RectTransform() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: " const&", def_value: None }]
constexpr RectTransform(RectTransform const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "&&", def_value: None }]
constexpr RectTransform(RectTransform&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectTransform(void* ptr) noexcept : UnityEngine::Transform(ptr) {
}


  constexpr RectTransform& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectTransform& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectTransform& operator=(RectTransform&& o) noexcept = default;
  constexpr RectTransform& operator=(RectTransform const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties __declspec(property(get=__get_reapplyDrivenProperties, put=__set_reapplyDrivenProperties))  reapplyDrivenProperties;

static void __set_reapplyDrivenProperties(UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties value) ;

static UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties __get_reapplyDrivenProperties() ;


// Properties

 UnityEngine::Rect __declspec(property(get=get_rect))  rect;

 UnityEngine::Vector2 __declspec(property(get=get_anchorMin, put=set_anchorMin))  anchorMin;

 UnityEngine::Vector2 __declspec(property(get=get_anchorMax, put=set_anchorMax))  anchorMax;

 UnityEngine::Vector2 __declspec(property(get=get_anchoredPosition, put=set_anchoredPosition))  anchoredPosition;

 UnityEngine::Vector2 __declspec(property(get=get_sizeDelta, put=set_sizeDelta))  sizeDelta;

 UnityEngine::Vector2 __declspec(property(get=get_pivot, put=set_pivot))  pivot;

 UnityEngine::Vector3 __declspec(property(put=set_anchoredPosition3D))  anchoredPosition3D;

 UnityEngine::Vector2 __declspec(property(get=get_offsetMin, put=set_offsetMin))  offsetMin;

 UnityEngine::Vector2 __declspec(property(get=get_offsetMax, put=set_offsetMax))  offsetMax;


// Methods

/// @brief Method add_reapplyDrivenProperties addr 0x2b6c134 size 0xb8 virtual false final false
static void add_reapplyDrivenProperties(UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties value) ;

/// @brief Method remove_reapplyDrivenProperties addr 0x2b6c1ec size 0xb8 virtual false final false
static void remove_reapplyDrivenProperties(UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties value) ;

/// @brief Method get_rect addr 0x2b6c2a4 size 0x58 virtual false final false
 UnityEngine::Rect get_rect() ;

/// @brief Method get_anchorMin addr 0x2b6c340 size 0x4c virtual false final false
 UnityEngine::Vector2 get_anchorMin() ;

/// @brief Method set_anchorMin addr 0x2b6c3d0 size 0x48 virtual false final false
 void set_anchorMin(UnityEngine::Vector2 value) ;

/// @brief Method get_anchorMax addr 0x2b6c45c size 0x4c virtual false final false
 UnityEngine::Vector2 get_anchorMax() ;

/// @brief Method set_anchorMax addr 0x2b6c4ec size 0x48 virtual false final false
 void set_anchorMax(UnityEngine::Vector2 value) ;

/// @brief Method get_anchoredPosition addr 0x2b6c578 size 0x4c virtual false final false
 UnityEngine::Vector2 get_anchoredPosition() ;

/// @brief Method set_anchoredPosition addr 0x2b6c608 size 0x48 virtual false final false
 void set_anchoredPosition(UnityEngine::Vector2 value) ;

/// @brief Method get_sizeDelta addr 0x2b6c694 size 0x4c virtual false final false
 UnityEngine::Vector2 get_sizeDelta() ;

/// @brief Method set_sizeDelta addr 0x2b6c724 size 0x48 virtual false final false
 void set_sizeDelta(UnityEngine::Vector2 value) ;

/// @brief Method get_pivot addr 0x2b6c7b0 size 0x4c virtual false final false
 UnityEngine::Vector2 get_pivot() ;

/// @brief Method set_pivot addr 0x2b6c840 size 0x48 virtual false final false
 void set_pivot(UnityEngine::Vector2 value) ;

/// @brief Method set_anchoredPosition3D addr 0x2b6c8cc size 0x30 virtual false final false
 void set_anchoredPosition3D(UnityEngine::Vector3 value) ;

/// @brief Method get_offsetMin addr 0x2b6c8fc size 0x54 virtual false final false
 UnityEngine::Vector2 get_offsetMin() ;

/// @brief Method set_offsetMin addr 0x2b6c950 size 0xf4 virtual false final false
 void set_offsetMin(UnityEngine::Vector2 value) ;

/// @brief Method get_offsetMax addr 0x2b6ca44 size 0xa0 virtual false final false
 UnityEngine::Vector2 get_offsetMax() ;

/// @brief Method set_offsetMax addr 0x2b6cae4 size 0xfc virtual false final false
 void set_offsetMax(UnityEngine::Vector2 value) ;

/// @brief Method GetLocalCorners addr 0x2b6cbe0 size 0x134 virtual false final false
 void GetLocalCorners(::ArrayW<UnityEngine::Vector3> fourCornersArray) ;

/// @brief Method GetWorldCorners addr 0x2b6cd14 size 0x15c virtual false final false
 void GetWorldCorners(::ArrayW<UnityEngine::Vector3> fourCornersArray) ;

/// @brief Method SetSizeWithCurrentAnchors addr 0x2b6ce70 size 0xfc virtual false final false
 void SetSizeWithCurrentAnchors(UnityEngine::UnityEngine__RectTransform__Axis axis, float_t size) ;

/// @brief Method SendReapplyDrivenProperties addr 0x2b6d08c size 0x6c virtual false final false
static void SendReapplyDrivenProperties(UnityEngine::RectTransform driven) ;

/// @brief Method GetParentSize addr 0x2b6cf6c size 0x120 virtual false final false
 UnityEngine::Vector2 GetParentSize() ;

/// @brief Method get_rect_Injected addr 0x2b6c2fc size 0x44 virtual false final false
 void get_rect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method get_anchorMin_Injected addr 0x2b6c38c size 0x44 virtual false final false
 void get_anchorMin_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_anchorMin_Injected addr 0x2b6c418 size 0x44 virtual false final false
 void set_anchorMin_Injected(ByRef<UnityEngine::Vector2> value) ;

/// @brief Method get_anchorMax_Injected addr 0x2b6c4a8 size 0x44 virtual false final false
 void get_anchorMax_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_anchorMax_Injected addr 0x2b6c534 size 0x44 virtual false final false
 void set_anchorMax_Injected(ByRef<UnityEngine::Vector2> value) ;

/// @brief Method get_anchoredPosition_Injected addr 0x2b6c5c4 size 0x44 virtual false final false
 void get_anchoredPosition_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_anchoredPosition_Injected addr 0x2b6c650 size 0x44 virtual false final false
 void set_anchoredPosition_Injected(ByRef<UnityEngine::Vector2> value) ;

/// @brief Method get_sizeDelta_Injected addr 0x2b6c6e0 size 0x44 virtual false final false
 void get_sizeDelta_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_sizeDelta_Injected addr 0x2b6c76c size 0x44 virtual false final false
 void set_sizeDelta_Injected(ByRef<UnityEngine::Vector2> value) ;

/// @brief Method get_pivot_Injected addr 0x2b6c7fc size 0x44 virtual false final false
 void get_pivot_Injected(ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method set_pivot_Injected addr 0x2b6c888 size 0x44 virtual false final false
 void set_pivot_Injected(ByRef<UnityEngine::Vector2> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__RectTransform__Axis, "UnityEngine", "RectTransform/Axis");
NEED_NO_BOX(UnityEngine::RectTransform);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform, "UnityEngine", "RectTransform");
NEED_NO_BOX(UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__RectTransform__ReapplyDrivenProperties, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
