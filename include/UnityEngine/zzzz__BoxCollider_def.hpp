#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class BoxCollider;
}
// Type: UnityEngine::BoxCollider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15466))
// CS Name: UnityEngine.BoxCollider
class CORDL_TYPE BoxCollider : public UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BoxCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: " const&", def_value: None }]
constexpr BoxCollider(BoxCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BoxCollider", modifiers: "&&", def_value: None }]
constexpr BoxCollider(BoxCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BoxCollider(void* ptr) noexcept : UnityEngine::Collider(ptr) {
}


  constexpr BoxCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BoxCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BoxCollider& operator=(BoxCollider&& o) noexcept = default;
  constexpr BoxCollider& operator=(BoxCollider const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_center, put=set_center))  center;

 UnityEngine::Vector3 __declspec(property(get=get_size, put=set_size))  size;


// Methods

/// @brief Method get_center addr 0x2b9f50c size 0x5c virtual false final false
 UnityEngine::Vector3 get_center() ;

/// @brief Method set_center addr 0x2b9f5ac size 0x54 virtual false final false
 void set_center(UnityEngine::Vector3 value) ;

/// @brief Method get_size addr 0x2b9f644 size 0x5c virtual false final false
 UnityEngine::Vector3 get_size() ;

/// @brief Method set_size addr 0x2b9f6e4 size 0x54 virtual false final false
 void set_size(UnityEngine::Vector3 value) ;

/// @brief Method get_center_Injected addr 0x2b9f568 size 0x44 virtual false final false
 void get_center_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_center_Injected addr 0x2b9f600 size 0x44 virtual false final false
 void set_center_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_size_Injected addr 0x2b9f6a0 size 0x44 virtual false final false
 void get_size_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_size_Injected addr 0x2b9f738 size 0x44 virtual false final false
 void set_size_Injected(ByRef<UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::BoxCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BoxCollider, "UnityEngine", "BoxCollider");
