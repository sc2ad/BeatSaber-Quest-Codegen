#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
class IfNotBoundBinder;
}
// Type: Zenject::IfNotBoundBinder
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10864))
// CS Name: Zenject.IfNotBoundBinder
class CORDL_TYPE IfNotBoundBinder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IfNotBoundBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "IfNotBoundBinder", modifiers: " const&", def_value: None }]
constexpr IfNotBoundBinder(IfNotBoundBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IfNotBoundBinder", modifiers: "&&", def_value: None }]
constexpr IfNotBoundBinder(IfNotBoundBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IfNotBoundBinder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IfNotBoundBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IfNotBoundBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IfNotBoundBinder& operator=(IfNotBoundBinder&& o) noexcept = default;
  constexpr IfNotBoundBinder& operator=(IfNotBoundBinder const& o) noexcept = default;
                


// Fields

 Zenject::BindInfo __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField))  _BindInfo_k__BackingField;

constexpr void __set__BindInfo_k__BackingField(Zenject::BindInfo value) ;

constexpr Zenject::BindInfo __get__BindInfo_k__BackingField() const;


// Properties

 Zenject::BindInfo __declspec(property(get=get_BindInfo, put=set_BindInfo))  BindInfo;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit IfNotBoundBinder(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d61ca4 size 0x28 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method get_BindInfo addr 0x2d61ccc size 0x8 virtual false final false
 Zenject::BindInfo get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x2d61cd4 size 0x8 virtual false final false
 void set_BindInfo(Zenject::BindInfo value) ;

/// @brief Method IfNotBound addr 0x2d61cdc size 0x20 virtual false final false
 void IfNotBound() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IfNotBoundBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IfNotBoundBinder, "Zenject", "IfNotBoundBinder");
