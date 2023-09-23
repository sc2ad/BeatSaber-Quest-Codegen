#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ValidationMarker;
}
// Type: Zenject::ValidationMarker
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11308))
// CS Name: Zenject.ValidationMarker
class CORDL_TYPE ValidationMarker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ValidationMarker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationMarker", modifiers: " const&", def_value: None }]
constexpr ValidationMarker(ValidationMarker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationMarker", modifiers: "&&", def_value: None }]
constexpr ValidationMarker(ValidationMarker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationMarker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidationMarker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationMarker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationMarker& operator=(ValidationMarker&& o) noexcept = default;
  constexpr ValidationMarker& operator=(ValidationMarker const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__InstantiateFailed_k__BackingField, put=__set__InstantiateFailed_k__BackingField))  _InstantiateFailed_k__BackingField;

constexpr void __set__InstantiateFailed_k__BackingField(bool value) ;

constexpr bool __get__InstantiateFailed_k__BackingField() const;

 System::Type __declspec(property(get=__get__MarkedType_k__BackingField, put=__set__MarkedType_k__BackingField))  _MarkedType_k__BackingField;

constexpr void __set__MarkedType_k__BackingField(System::Type value) ;

constexpr System::Type __get__MarkedType_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_InstantiateFailed, put=set_InstantiateFailed))  InstantiateFailed;

 System::Type __declspec(property(get=get_MarkedType, put=set_MarkedType))  MarkedType;


// Methods

// Ctor Parameters [CppParam { name: "markedType", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "instantiateFailed", ty: "bool", modifiers: "", def_value: None }]
explicit ValidationMarker(System::Type markedType, bool instantiateFailed) ;

/// @brief Method .ctor addr 0x2da7e20 size 0x34 virtual false final false
 void _ctor(System::Type markedType, bool instantiateFailed) ;

// Ctor Parameters [CppParam { name: "markedType", ty: "System::Type", modifiers: "", def_value: None }]
explicit ValidationMarker(System::Type markedType) ;

/// @brief Method .ctor addr 0x2d8c9a4 size 0x2c virtual false final false
 void _ctor(System::Type markedType) ;

/// @brief Method get_InstantiateFailed addr 0x2da7e54 size 0x8 virtual false final false
 bool get_InstantiateFailed() ;

/// @brief Method set_InstantiateFailed addr 0x2da7e5c size 0xc virtual false final false
 void set_InstantiateFailed(bool value) ;

/// @brief Method get_MarkedType addr 0x2da7e68 size 0x8 virtual false final false
 System::Type get_MarkedType() ;

/// @brief Method set_MarkedType addr 0x2da7e70 size 0x8 virtual false final false
 void set_MarkedType(System::Type value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ValidationMarker);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ValidationMarker, "Zenject", "ValidationMarker");
