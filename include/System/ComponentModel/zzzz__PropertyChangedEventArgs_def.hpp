#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::ComponentModel {
class PropertyChangedEventArgs;
}
// Type: System.ComponentModel::PropertyChangedEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8317))
// CS Name: System.ComponentModel.PropertyChangedEventArgs
class CORDL_TYPE PropertyChangedEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PropertyChangedEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: " const&", def_value: None }]
constexpr PropertyChangedEventArgs(PropertyChangedEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyChangedEventArgs", modifiers: "&&", def_value: None }]
constexpr PropertyChangedEventArgs(PropertyChangedEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyChangedEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr PropertyChangedEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyChangedEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyChangedEventArgs& operator=(PropertyChangedEventArgs&& o) noexcept = default;
  constexpr PropertyChangedEventArgs& operator=(PropertyChangedEventArgs const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__propertyName, put=__set__propertyName))  _propertyName;

constexpr void __set__propertyName(::StringW value) ;

constexpr ::StringW __get__propertyName() const;


// Methods

static System::ComponentModel::PropertyChangedEventArgs New_ctor(::StringW propertyName) ;

/// @brief Method .ctor addr 0x2787040 size 0x6c virtual false final false
 void _ctor(::StringW propertyName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::PropertyChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::PropertyChangedEventArgs, "System.ComponentModel", "PropertyChangedEventArgs");
