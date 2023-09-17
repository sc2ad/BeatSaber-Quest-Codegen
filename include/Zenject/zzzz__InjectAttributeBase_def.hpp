#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
struct InjectSources;
}
// Forward declare root types
namespace Zenject {
class InjectAttributeBase;
}
// Type: Zenject::InjectAttributeBase
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15650))
// CS Name: Zenject.InjectAttributeBase
class CORDL_TYPE InjectAttributeBase : public ::Zenject::Internal::PreserveAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InjectAttributeBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: " const&", def_value: None }]
constexpr InjectAttributeBase(InjectAttributeBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: "&&", def_value: None }]
constexpr InjectAttributeBase(InjectAttributeBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InjectAttributeBase(void* ptr) noexcept : ::Zenject::Internal::PreserveAttribute(ptr) {
}


  constexpr InjectAttributeBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InjectAttributeBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InjectAttributeBase& operator=(InjectAttributeBase&& o) noexcept = default;
  constexpr InjectAttributeBase& operator=(InjectAttributeBase const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__Optional_k__BackingField, put=__set__Optional_k__BackingField))  _Optional_k__BackingField;

constexpr void __set__Optional_k__BackingField(bool value) ;

constexpr bool __get__Optional_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__Id_k__BackingField, put=__set__Id_k__BackingField))  _Id_k__BackingField;

constexpr void __set__Id_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__Id_k__BackingField() const;

 ::Zenject::InjectSources __declspec(property(get=__get__Source_k__BackingField, put=__set__Source_k__BackingField))  _Source_k__BackingField;

constexpr void __set__Source_k__BackingField(::Zenject::InjectSources value) ;

constexpr ::Zenject::InjectSources __get__Source_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_Optional, put=set_Optional))  Optional;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_Id, put=set_Id))  Id;

 ::Zenject::InjectSources __declspec(property(get=get_Source, put=set_Source))  Source;


// Methods

/// @brief Method get_Optional addr 0x2d402bc size 0x8 virtual false final false
 bool get_Optional() ;

/// @brief Method set_Optional addr 0x2d402c4 size 0xc virtual false final false
 void set_Optional(bool value) ;

/// @brief Method get_Id addr 0x2d402d0 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_Id() ;

/// @brief Method set_Id addr 0x2d402d8 size 0x8 virtual false final false
 void set_Id(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_Source addr 0x2d402e0 size 0x8 virtual false final false
 ::Zenject::InjectSources get_Source() ;

/// @brief Method set_Source addr 0x2d402e8 size 0x8 virtual false final false
 void set_Source(::Zenject::InjectSources value) ;

// Ctor Parameters []
explicit InjectAttributeBase() ;

/// @brief Method .ctor addr 0x2d402f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::InjectAttributeBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttributeBase, "Zenject", "InjectAttributeBase");
