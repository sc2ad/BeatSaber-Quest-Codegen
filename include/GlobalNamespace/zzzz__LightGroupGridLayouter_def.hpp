#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupGridLayouter;
}
// Type: ::LightGroupGridLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5030))
// CS Name: LightGroupGridLayouter
class CORDL_TYPE LightGroupGridLayouter : public GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LightGroupGridLayouter() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupGridLayouter", modifiers: " const&", def_value: None }]
constexpr LightGroupGridLayouter(LightGroupGridLayouter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupGridLayouter", modifiers: "&&", def_value: None }]
constexpr LightGroupGridLayouter(LightGroupGridLayouter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupGridLayouter(void* ptr) noexcept : GlobalNamespace::LightGroupSubsystem(ptr) {
}


  constexpr LightGroupGridLayouter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupGridLayouter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupGridLayouter& operator=(LightGroupGridLayouter&& o) noexcept = default;
  constexpr LightGroupGridLayouter& operator=(LightGroupGridLayouter const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__columns, put=__set__columns))  _columns;

constexpr void __set__columns(int32_t value) ;

constexpr int32_t __get__columns() const;

 UnityEngine::Vector3 __declspec(property(get=__get__columnStep, put=__set__columnStep))  _columnStep;

constexpr void __set__columnStep(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__columnStep() const;

 bool __declspec(property(get=__get__columnsFromCenter, put=__set__columnsFromCenter))  _columnsFromCenter;

constexpr void __set__columnsFromCenter(bool value) ;

constexpr bool __get__columnsFromCenter() const;

 UnityEngine::Vector3 __declspec(property(get=__get__rowStep, put=__set__rowStep))  _rowStep;

constexpr void __set__rowStep(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__rowStep() const;

 bool __declspec(property(get=__get__rowsFromCenter, put=__set__rowsFromCenter))  _rowsFromCenter;

constexpr void __set__rowsFromCenter(bool value) ;

constexpr bool __get__rowsFromCenter() const;

 bool __declspec(property(get=__get__transposeOrder, put=__set__transposeOrder))  _transposeOrder;

constexpr void __set__transposeOrder(bool value) ;

constexpr bool __get__transposeOrder() const;

 bool __declspec(property(get=__get__alternateOrder, put=__set__alternateOrder))  _alternateOrder;

constexpr void __set__alternateOrder(bool value) ;

constexpr bool __get__alternateOrder() const;

 UnityEngine::Vector3 __declspec(property(get=__get__defaultRotation, put=__set__defaultRotation))  _defaultRotation;

constexpr void __set__defaultRotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__defaultRotation() const;


// Methods

static GlobalNamespace::LightGroupGridLayouter New_ctor() ;

/// @brief Method .ctor addr 0x225e670 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LightGroupGridLayouter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupGridLayouter, "", "LightGroupGridLayouter");
