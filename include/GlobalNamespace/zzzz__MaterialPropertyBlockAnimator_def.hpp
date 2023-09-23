#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockAnimator;
}
// Type: ::MaterialPropertyBlockAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14723))
// CS Name: MaterialPropertyBlockAnimator
class CORDL_TYPE MaterialPropertyBlockAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MaterialPropertyBlockAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockAnimator", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockAnimator(MaterialPropertyBlockAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MaterialPropertyBlockAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockAnimator& operator=(MaterialPropertyBlockAnimator&& o) noexcept = default;
  constexpr MaterialPropertyBlockAnimator& operator=(MaterialPropertyBlockAnimator const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__property, put=__set__property))  _property;

constexpr void __set__property(::StringW value) ;

constexpr ::StringW __get__property() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 int32_t __declspec(property(get=__get_propertyId, put=__set_propertyId))  propertyId;

constexpr void __set_propertyId(int32_t value) ;

constexpr int32_t __get_propertyId() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Properties

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=get_materialPropertyBlockController, put=set_materialPropertyBlockController))  materialPropertyBlockController;


// Methods

/// @brief Method get_materialPropertyBlockController addr 0x1fa2004 size 0x8 virtual false final false
 GlobalNamespace::MaterialPropertyBlockController get_materialPropertyBlockController() ;

/// @brief Method set_materialPropertyBlockController addr 0x1fa200c size 0x7c virtual false final false
 void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

/// @brief Method SetProperty addr 0x1fa2088 size 0x4 virtual true final false
 void SetProperty() ;

/// @brief Method Awake addr 0x1fa208c size 0x90 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x1fa214c size 0x28 virtual false final false
 void Update() ;

/// @brief Method LazyInit addr 0x1fa211c size 0x30 virtual false final false
 void LazyInit() ;

/// @brief Method RefreshProperty addr 0x1fa2364 size 0x20 virtual false final false
 void RefreshProperty() ;

// Ctor Parameters []
explicit MaterialPropertyBlockAnimator() ;

/// @brief Method .ctor addr 0x1fa2384 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockAnimator, "", "MaterialPropertyBlockAnimator");
