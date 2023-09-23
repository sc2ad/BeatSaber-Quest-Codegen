#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadBodyOffsetSO;
}
// Type: ::HeadBodyOffsetSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4087))
// CS Name: HeadBodyOffsetSO
class CORDL_TYPE HeadBodyOffsetSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HeadBodyOffsetSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: " const&", def_value: None }]
constexpr HeadBodyOffsetSO(HeadBodyOffsetSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadBodyOffsetSO", modifiers: "&&", def_value: None }]
constexpr HeadBodyOffsetSO(HeadBodyOffsetSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeadBodyOffsetSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr HeadBodyOffsetSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeadBodyOffsetSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeadBodyOffsetSO& operator=(HeadBodyOffsetSO&& o) noexcept = default;
  constexpr HeadBodyOffsetSO& operator=(HeadBodyOffsetSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__headNeckOffset, put=__set__headNeckOffset))  _headNeckOffset;

constexpr void __set__headNeckOffset(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__headNeckOffset() const;

 float_t __declspec(property(get=__get__verticalOffset, put=__set__verticalOffset))  _verticalOffset;

constexpr void __set__verticalOffset(float_t value) ;

constexpr float_t __get__verticalOffset() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_headNeckOffset))  headNeckOffset;

 float_t __declspec(property(get=get_verticalOffset))  verticalOffset;


// Methods

/// @brief Method get_headNeckOffset addr 0x20c2f6c size 0xc virtual false final false
 UnityEngine::Vector3 get_headNeckOffset() ;

/// @brief Method get_verticalOffset addr 0x20c2f78 size 0x8 virtual false final false
 float_t get_verticalOffset() ;

// Ctor Parameters []
explicit HeadBodyOffsetSO() ;

/// @brief Method .ctor addr 0x20c2f80 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HeadBodyOffsetSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadBodyOffsetSO, "", "HeadBodyOffsetSO");
