#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class UnityEngine__UI__LayoutRebuilder____c;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine {
class Component;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutRebuilder;
}
namespace UnityEngine::UI {
class UnityEngine__UI__LayoutRebuilder____c;
}
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13031))
// CS Name: UnityEngine.UI.LayoutRebuilder::<>c
class CORDL_TYPE UnityEngine__UI__LayoutRebuilder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UI__LayoutRebuilder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutRebuilder____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__LayoutRebuilder____c(UnityEngine__UI__LayoutRebuilder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__LayoutRebuilder____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__LayoutRebuilder____c(UnityEngine__UI__LayoutRebuilder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__LayoutRebuilder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UI__LayoutRebuilder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutRebuilder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__LayoutRebuilder____c& operator=(UnityEngine__UI__LayoutRebuilder____c&& o) noexcept = default;
  constexpr UnityEngine__UI__LayoutRebuilder____c& operator=(UnityEngine__UI__LayoutRebuilder____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c value) ;

static UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c __get___9() ;

static System::Predicate_1<UnityEngine::Component> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(System::Predicate_1<UnityEngine::Component> value) ;

static System::Predicate_1<UnityEngine::Component> __get___9__10_0() ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __declspec(property(get=__get___9__12_0, put=__set___9__12_0))  __9__12_0;

static void __set___9__12_0(UnityEngine::Events::UnityAction_1<UnityEngine::Component> value) ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __get___9__12_0() ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __declspec(property(get=__get___9__12_1, put=__set___9__12_1))  __9__12_1;

static void __set___9__12_1(UnityEngine::Events::UnityAction_1<UnityEngine::Component> value) ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __get___9__12_1() ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __declspec(property(get=__get___9__12_2, put=__set___9__12_2))  __9__12_2;

static void __set___9__12_2(UnityEngine::Events::UnityAction_1<UnityEngine::Component> value) ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __get___9__12_2() ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __declspec(property(get=__get___9__12_3, put=__set___9__12_3))  __9__12_3;

static void __set___9__12_3(UnityEngine::Events::UnityAction_1<UnityEngine::Component> value) ;

static UnityEngine::Events::UnityAction_1<UnityEngine::Component> __get___9__12_3() ;


// Methods

static UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c New_ctor() ;

/// @brief Method .ctor addr 0x2c00058 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__5_0 addr 0x2c00060 size 0x5c virtual false final false
 UnityEngine::UI::LayoutRebuilder __cctor_b__5_0() ;

/// @brief Method <.cctor>b__5_1 addr 0x2c000bc size 0x1c virtual false final false
 void __cctor_b__5_1(UnityEngine::UI::LayoutRebuilder x) ;

/// @brief Method <StripDisabledBehavioursFromList>b__10_0 addr 0x2c000d8 size 0x8c virtual false final false
 bool _StripDisabledBehavioursFromList_b__10_0(UnityEngine::Component e) ;

/// @brief Method <Rebuild>b__12_0 addr 0x2c00164 size 0xbc virtual false final false
 void _Rebuild_b__12_0(UnityEngine::Component e) ;

/// @brief Method <Rebuild>b__12_1 addr 0x2c00220 size 0xbc virtual false final false
 void _Rebuild_b__12_1(UnityEngine::Component e) ;

/// @brief Method <Rebuild>b__12_2 addr 0x2c002dc size 0xc0 virtual false final false
 void _Rebuild_b__12_2(UnityEngine::Component e) ;

/// @brief Method <Rebuild>b__12_3 addr 0x2c0039c size 0xc0 virtual false final false
 void _Rebuild_b__12_3(UnityEngine::Component e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::LayoutRebuilder
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13032))
// CS Name: UnityEngine.UI.LayoutRebuilder
class CORDL_TYPE LayoutRebuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c;

/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LayoutRebuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutRebuilder", modifiers: " const&", def_value: None }]
constexpr LayoutRebuilder(LayoutRebuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutRebuilder", modifiers: "&&", def_value: None }]
constexpr LayoutRebuilder(LayoutRebuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayoutRebuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LayoutRebuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayoutRebuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayoutRebuilder& operator=(LayoutRebuilder&& o) noexcept = default;
  constexpr LayoutRebuilder& operator=(LayoutRebuilder const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get_m_ToRebuild, put=__set_m_ToRebuild))  m_ToRebuild;

constexpr void __set_m_ToRebuild(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_ToRebuild() const;

 int32_t __declspec(property(get=__get_m_CachedHashFromTransform, put=__set_m_CachedHashFromTransform))  m_CachedHashFromTransform;

constexpr void __set_m_CachedHashFromTransform(int32_t value) ;

constexpr int32_t __get_m_CachedHashFromTransform() const;

static UnityEngine::Pool::ObjectPool_1<UnityEngine::UI::LayoutRebuilder> __declspec(property(get=__get_s_Rebuilders, put=__set_s_Rebuilders))  s_Rebuilders;

static void __set_s_Rebuilders(UnityEngine::Pool::ObjectPool_1<UnityEngine::UI::LayoutRebuilder> value) ;

static UnityEngine::Pool::ObjectPool_1<UnityEngine::UI::LayoutRebuilder> __get_s_Rebuilders() ;


// Properties

 UnityEngine::Transform __declspec(property(get=get_transform))  transform;


// Methods

/// @brief Method Initialize addr 0x2bfed1c size 0x34 virtual false final false
 void Initialize(UnityEngine::RectTransform controller) ;

/// @brief Method Clear addr 0x2bfed50 size 0xc virtual false final false
 void Clear() ;

/// @brief Method ReapplyDrivenProperties addr 0x2bfef34 size 0x54 virtual false final false
static void ReapplyDrivenProperties(UnityEngine::RectTransform driven) ;

/// @brief Method get_transform addr 0x2bfef88 size 0x8 virtual true final true
 UnityEngine::Transform get_transform() ;

/// @brief Method IsDestroyed addr 0x2bfef90 size 0x60 virtual true final true
 bool IsDestroyed() ;

/// @brief Method StripDisabledBehavioursFromList addr 0x2bfeff0 size 0xfc virtual false final false
static void StripDisabledBehavioursFromList(System::Collections::Generic::List_1<UnityEngine::Component> components) ;

/// @brief Method ForceRebuildLayoutImmediate addr 0x2bff0ec size 0xdc virtual false final false
static void ForceRebuildLayoutImmediate(UnityEngine::RectTransform layoutRoot) ;

/// @brief Method Rebuild addr 0x2bff1c8 size 0x2b4 virtual true final true
 void Rebuild(UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method PerformLayoutControl addr 0x2bff77c size 0x3d0 virtual false final false
 void PerformLayoutControl(UnityEngine::RectTransform rect, UnityEngine::Events::UnityAction_1<UnityEngine::Component> action) ;

/// @brief Method PerformLayoutCalculation addr 0x2bff47c size 0x300 virtual false final false
 void PerformLayoutCalculation(UnityEngine::RectTransform rect, UnityEngine::Events::UnityAction_1<UnityEngine::Component> action) ;

/// @brief Method MarkLayoutForRebuild addr 0x2bfa470 size 0x3ec virtual false final false
static void MarkLayoutForRebuild(UnityEngine::RectTransform rect) ;

/// @brief Method ValidController addr 0x2bffb4c size 0x1f4 virtual false final false
static bool ValidController(UnityEngine::RectTransform layoutRoot, System::Collections::Generic::List_1<UnityEngine::Component> comps) ;

/// @brief Method MarkLayoutRootForRebuild addr 0x2bffd40 size 0x164 virtual false final false
static void MarkLayoutRootForRebuild(UnityEngine::RectTransform controller) ;

/// @brief Method LayoutComplete addr 0x2bffea4 size 0x80 virtual true final true
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2bfff24 size 0x4 virtual true final true
 void GraphicUpdateComplete() ;

/// @brief Method GetHashCode addr 0x2bfff28 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bfff30 size 0x50 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method ToString addr 0x2bfff80 size 0x6c virtual true final false
 ::StringW ToString() ;

static UnityEngine::UI::LayoutRebuilder New_ctor() ;

/// @brief Method .ctor addr 0x2bfffec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::LayoutRebuilder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutRebuilder, "UnityEngine.UI", "LayoutRebuilder");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__LayoutRebuilder____c, "UnityEngine.UI", "LayoutRebuilder/<>c");
